#include <Wire.h>
#include <RTClib.h>
#include <LiquidCrystal_I2C.h>

#define BUZZER_PIN 8 // Tentukan pin buzzer, sesuaikan jika diperlukan

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
const int jumuahHour = 13;
const int jumuahMinute = 15;

// Variabel untuk melacak waktu update
unsigned int previousMillis = 0;
unsigned int infoStartMillis = 0;
const int interval = 120000; // Interval 2 menit (120000 ms)
const int displayDuration = 30000; // Durasi tampilan info salat (30 detik)

// Gambar dinosaurus dalam ASCII Art
const char* dinoArt = 
" * * * * * \n";

// Posisi dinosaurus
int dinoPos = 0;
int speed = 1; // Kecepatan gerakan dinosaurus

bool infoDisplayed = false;

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
  lcd.clear(); // Hapus tampilan

  lcd.setCursor(0, 0); // Pindahkan kursor ke baris pertama
  lcd.print("Prayer Time:");

  lcd.setCursor(0, 1); // Pindahkan kursor ke baris kedua

  // Menampilkan waktu salat sesuai dengan waktu saat ini
  if (hour == fajrHour && minute == fajrMinute) {
    lcd.print("Fajr: ");
    lcd.print(fajrHour);
    lcd.print(':');
    if (fajrMinute < 10) lcd.print('0'); // Padding nol untuk menit satu digit
    lcd.print(fajrMinute);
  } else if (dayOfWeek == 5 && hour == jumuahHour && minute == jumuahMinute) {
    lcd.print("Jumuah: ");
    lcd.print(jumuahHour);
    lcd.print(':');
    if (jumuahMinute < 10) lcd.print('0'); // Padding nol untuk menit satu digit
    lcd.print(jumuahMinute);
  } else if (hour == dhuhrHour && minute == dhuhrMinute) {
    lcd.print("Dhuhr: ");
    lcd.print(dhuhrHour);
    lcd.print(':');
    if (dhuhrMinute < 10) lcd.print('0'); // Padding nol untuk menit satu digit
    lcd.print(dhuhrMinute);
  } else if (hour == asrHour && minute == asrMinute) {
    lcd.print("Asar: ");
    lcd.print(asrHour);
    lcd.print(':');
    if (asrMinute < 10) lcd.print('0'); // Padding nol untuk menit satu digit
    lcd.print(asrMinute);
  } else if (hour == maghribHour && minute == maghribMinute) {
    lcd.print("Maghrib: ");
    lcd.print(maghribHour);
    lcd.print(':');
    if (maghribMinute < 10) lcd.print('0'); // Padding nol untuk menit satu digit
    lcd.print(maghribMinute);
  } else if (hour == ishaHour && minute == ishaMinute) {
    lcd.print("Isha: ");
    lcd.print(ishaHour);
    lcd.print(':');
    if (ishaMinute < 10) lcd.print('0'); // Padding nol untuk menit satu digit
    lcd.print(ishaMinute);
  } else {
    lcd.clear();
    // Update posisi dinosaurus
    updateDino();
  }
}

void updateDino() {
  // Tampilkan gambar dinosaurus di baris pertama
  lcd.setCursor(dinoPos, 0);
  lcd.print(dinoArt);

  // Hapus dinosaurus dari posisi lama
  lcd.setCursor(dinoPos, 0);
  lcd.print("                "); // Kosongkan area dari posisi dinosaurus lama

  // Update posisi dinosaurus
  dinoPos += speed;
  if (dinoPos >= 16) {
    dinoPos = -strlen(dinoArt); // Mulai dari kiri lagi jika keluar dari layar
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
    tone(BUZZER_PIN, 1000); // Aktifkan suara buzzer
  } else {
    noTone(BUZZER_PIN); // Matikan buzzer
  }
}
