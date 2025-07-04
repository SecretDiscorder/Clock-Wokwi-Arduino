# Clock-Wokwi-Arduino

![Screenshot from 2024-09-09 18-00-46](https://github.com/user-attachments/assets/c58cdff1-3fe1-41b2-8949-2581eaf81e0b)


![Screenshot from 2024-09-09 15-29-49](https://github.com/user-attachments/assets/f261833b-db37-4a6b-9e8e-672d6dc7b137)


## ⏰ Clock Wokwi Arduino - Jadwal Salat + LCD RTC + Buzzer

Proyek ini adalah jam digital dengan fitur **pengingat waktu salat**, menggunakan:

* RTC DS3231
* LCD I2C 16x2
* Buzzer
* Platform: Arduino (simulasi Wokwi atau perangkat nyata)

### 🔧 Fitur Utama

* Tampilkan tanggal dan waktu dari RTC secara real-time
* Tampilkan notifikasi teks waktu salat setiap 2 menit (durasinya 30 detik)
* Bunyikan buzzer dengan melodi saat masuk waktu salat
* Penjadwalan khusus untuk **salat Jumat** setiap hari Jumat jam 12:15
* Scroll teks berjalan di LCD saat waktu salat tiba

### 📜 Waktu Salat Default (24 Jam Format)

* Subuh (Fajr): 04:30
* Dzuhur (Dhuhr): 12:00
* Ashar (Asr): 15:00
* Maghrib: 18:00
* Isya: 19:00
* Jum'at: 12:15 (khusus hari Jumat)

### 🧰 Komponen

* Arduino Uno
* RTC DS3231
* LCD I2C 16x2 (Alamat default 0x27)
* Buzzer (di pin 8)

### ▶️ Cara Menjalankan

1. Upload sketch ke board Arduino (via IDE atau Wokwi)
2. Pastikan pustaka berikut sudah terinstal:

   * `RTClib`
   * `LiquidCrystal_I2C`
3. Buka serial monitor (9600 baud) untuk debugging
4. LCD akan menampilkan waktu saat ini
5. Setiap 2 menit, info salat akan ditampilkan selama 30 detik
6. Jika waktu salat tiba, buzzer akan berbunyi dengan melodi

### 📂 File Utama

* `sketch.ino`: Seluruh kode berada di dalam sketch ini

### 📜 Lisensi

Proyek ini berada di bawah lisensi [MIT License](https://opensource.org/licenses/MIT)

---

## 👤 Kontributor

* [SecretDiscorder](https://github.com/SecretDiscorder)
