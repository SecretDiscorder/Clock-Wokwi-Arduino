#include <Wire.h>
#include <RTClib.h>
#include <LiquidCrystal_I2C.h>

#define BUZZER_PIN 8 // Tentukan pin buzzer, sesuaikan jika diperlukan
#define NOTE_C4 262
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_G4 392
#define NOTE_A4 440
#define NOTE_B4 493
#define NOTE_C5 523
#define NOTE_D5 587
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_G5 784
#define NOTE_A5 880
#define NOTE_B5 987

// Melody and duration arrays
int melody[] = {
  NOTE_G4, NOTE_C5, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_E4, NOTE_E4, 
  NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4, NOTE_C4, NOTE_C4, 
  NOTE_D4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, 
  NOTE_E5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_B4, NOTE_G4, 
  NOTE_C5, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_E4, NOTE_E4, 
  NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4, NOTE_C4, NOTE_C4, 
  NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_B4, NOTE_C5, NOTE_D5, 
  NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_G4, NOTE_G4, NOTE_B4, NOTE_C5, NOTE_D5,
  NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_E4, NOTE_E4, NOTE_G4, NOTE_A4, NOTE_B4,
  NOTE_C5, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_A4, NOTE_C5, NOTE_F5,
  NOTE_F5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_C5, NOTE_C5,
  NOTE_D5, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_A4, NOTE_A4,
  NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4, NOTE_C4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5
};

int noteDurations[] = {
  8, 4, 6, 16, 4, 8, 8, 
  4, 6, 16, 4, 8, 8, 
  4, 8, 8, 4, 8, 8, 4, 8, 8, 2,
  4, 6, 16, 4, 8, 8, 
  4, 6, 16, 4, 8, 8, 
  4, 6, 16, 4, 6, 16, 
  4, 6, 16, 8, 8, 8, 8, 
  2, 8, 8, 8, 8, 3, 8, 8, 8, 8, 8,
  2, 8, 8, 8, 8, 3, 8, 8, 8, 8, 8,
  4, 6, 16, 4, 6, 16, 4, 8, 8, 2,
  2, 8, 8, 8, 8, 3, 8, 2,
  2, 8, 8, 8, 8, 3, 8, 2,
  4, 6, 16, 4, 4, 2, 4, 4, 1
};

// Inisialisasi RTC
RTC_DS3231 rtc;

// Inisialisasi LCD (alamat 0x27 adalah umum; sesuaikan jika diperlukan)
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Definisikan waktu salat (format 24 jam)
const int fajrHour = 4;
const int fajrMinute = 30;

const int dhuhrHour = 12;
const int dhuhrMinute = 0;

const int asrHour = 15;
const int asrMinute = 0;

const int maghribHour = 18;
const int maghribMinute = 0;

const int ishaHour = 19;
const int ishaMinute = 0;

// Waktu salat Jum'at
const int jumuahHour = 12;
const int jumuahMinute = 15;

// Variabel untuk melacak waktu update
unsigned int previousMillis = 0;
unsigned int infoStartMillis = 0;
const int interval = 120000; // Interval 2 menit (120000 ms)
const int displayDuration = 30000; // Durasi tampilan info salat (30 detik)

bool infoDisplayed = false;
String message = ""; // Pesan untuk ditampilkan

void setup() {
  // Mulai komunikasi serial
  Serial.begin(9600);
  lcd.backlight();
  // Inisialisasi RTC
  if (!rtc.begin()) {
    Serial.println("Couldn't find RTC");
    while (1);
  }

  // Periksa jika RTC kehilangan daya dan setel tanggal & waktu jika perlu
  if (rtc.lostPower()) {
    Serial.println("RTC lost power, setting the time!");
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }

  // Inisialisasi LCD
  lcd.begin(16, 2); // Tentukan jumlah kolom dan baris
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Clock:");

  // Inisialisasi Pin Buzzer
  pinMode(BUZZER_PIN, OUTPUT);
  noTone(BUZZER_PIN); // Pastikan buzzer mati pada awalnya
}

void loop() {
  // Ambil waktu saat ini dari RTC
  DateTime now = rtc.now();

  // Cetak waktu ke monitor serial
  Serial.print(now.hour());
  Serial.print(':');
  Serial.print(now.minute());
  Serial.print(':');
  Serial.print(now.second());
  Serial.println();

  unsigned int currentMillis = millis();

  // Periksa apakah waktunya untuk memperbarui tampilan info salat
  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    infoStartMillis = currentMillis; // Reset timer tampilan info
    infoDisplayed = true;
  }

  // Tentukan apa yang akan ditampilkan di LCD
  if (infoDisplayed) {
    // Periksa apakah 30 detik telah berlalu sejak menampilkan info salat
    if (currentMillis - infoStartMillis < displayDuration) {
      // Tentukan dan tampilkan waktu salat saat ini
      displayPrayerTime(now.hour(), now.minute(), now.dayOfTheWeek());
    } else {
      // Saatnya kembali ke tampilan jam
      infoDisplayed = false;
    }
  } else {
    // Tampilkan waktu dan tanggal di LCD
    lcd.setCursor(0, 0); // Pindahkan kursor ke baris pertama
    lcd.print("Date: ");
    lcd.print(now.day());
    lcd.print('/');
    lcd.print(now.month());
    lcd.print('/');
    lcd.print(now.year());

    lcd.setCursor(0, 1); // Pindahkan kursor ke baris kedua
    lcd.print("Time: ");
    lcd.print(now.hour());
    lcd.print(':');
    if (now.minute() < 10) lcd.print('0'); // Padding nol untuk menit satu digit
    lcd.print(now.minute());
    lcd.print(':');
    if (now.second() < 10) lcd.print('0'); // Padding nol untuk detik satu digit
    lcd.print(now.second());

  }

  // Periksa waktu salat dan aktifkan buzzer
  checkPrayerTimes(now.hour(), now.minute(), now.dayOfTheWeek());

  delay(1000); // Perbarui tampilan setiap detik
}

void displayPrayerTime(int hour, int minute, int dayOfWeek) {
  lcd.clear(); // Clear the display

  // Tentukan teks yang akan ditampilkan
  String text;
  if ((hour == fajrHour && minute == fajrMinute) || (hour >= fajrHour && hour <= 6)) {
    text = "Waktunya Salat Subuh";
  } else if (dayOfWeek == 5 && hour == jumuahHour && minute == jumuahMinute) {
    text = "Waktunya Salat Jum'at";
  } else if ((hour == dhuhrHour && minute == dhuhrMinute) || (hour >= dhuhrHour && hour <= asrHour)) {
    text = "Waktunya Salat Dhuhur";
  } else if ((hour == asrHour && minute == asrMinute) || (hour >= asrHour && hour <= maghribHour)) {
    text = "Waktunya Salat Asar";
  } else if ((hour == maghribHour && minute == maghribMinute) || (hour >= maghribHour && hour <= ishaHour)) {
    text = "Waktunya Salat Maghrib";
  } else if ((hour == ishaHour && minute == ishaMinute) || (hour >= ishaHour || hour <= fajrHour)) {
    text = "Waktunya Salat Isya";
  } else {
    text = "Tidak Ada Waktu Salat";
  }

  // Tampilkan teks berjalan
  displayScrollingText(text);
}

void displayScrollingText(String text) {
  int textLength = text.length();
  for (int pos = 0; pos < textLength + 16; pos++) {
    lcd.clear();
    lcd.setCursor(0, 0);

    if (pos < textLength) {
      lcd.print(text.substring(pos, pos + 16));
    } else {
      lcd.print(text.substring(pos - 16, pos));
    }
    
    delay(300); // Delay untuk kecepatan scroll
  }
}

void checkPrayerTimes(int hour, int minute, int dayOfWeek) {
  // Periksa apakah waktu saat ini cocok dengan waktu salat
  if ((hour == fajrHour && minute == fajrMinute) ||
      (hour == dhuhrHour && minute == dhuhrMinute) ||
      (hour == asrHour && minute == asrMinute) ||
      (hour == maghribHour && minute == maghribMinute) ||
      (hour == ishaHour && minute == ishaMinute) ||
      (dayOfWeek == 5 && hour == jumuahHour && minute == jumuahMinute)) {
    int melodyLength = sizeof(melody) / sizeof(melody[0]);

    for (int thisNote = 0; thisNote < melodyLength; thisNote++) {
      int noteDuration = 2000 / noteDurations[thisNote]; // Duration of the note
      tone(BUZZER_PIN, melody[thisNote], noteDuration); // Play the note
      int pauseBetweenNotes = noteDuration * 1.30; // Pause between notes
      delay(pauseBetweenNotes); // Wait before playing the next note
      noTone(BUZZER_PIN); // Stop the tone
    }

  } else {
    noTone(BUZZER_PIN); // Matikan buzzer
  }
}

