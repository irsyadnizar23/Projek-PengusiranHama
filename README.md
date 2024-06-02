# Projek-Sistem Pengusiran hama otomatis berbasis mikrokontroler AVR 
![banner (1)](https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/8efb477f-d5e4-4955-8644-db39d9274031)

Serangan hama dapat menyebabkan kerusakan yang signifikan pada tanaman dan menurunkan produktivitas. Untuk mengatasi masalah ini, saya mencoba mengembangkan sebuah sistem pengusiran hama otomatis berbasis mikrokontroler AVR. Sistem ini dirancang untuk mendeteksi keberadaan hama secara otomatis dan mengusir hama tersebut dengan metode yang efektif dan ramah lingkungan

---
Anggota
1. Rizal Fadhillah Muhammad (2122500032)
2. Samuel Windez Ambarita (2122500036)
3. Muhammad Irsyad Nizar Fazari (2122500050)
4. Nyoman Darma Saputra (2122500053)
5. Nashry Haliim Risantosa (2122500054)
---
## Komponen / alat yang diperlukan
![Komponen](https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/5fb60bcb-52cc-47f8-9034-b85d39c70da2)

1. Arduino Uno
2. Led 3mm
3. Speaker
4. push Button(2)
5. Sensor sw 420
6. PAM 8403
7. Pin Header male dan female
8. resistor 1k

---
## Skematik projek
Schematik
![gambar schematik (1)](https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/882154b1-b774-43ad-a62c-a23035c45d2f)

Board
![Board (1)](https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/123f0080-6911-4621-b931-e5ad13746b6c)

Bottom
![Sch pengusir hama pcb BOTTOM](https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/659ae527-050a-4b4c-864e-293da0b7ead7)

Top
![Sch pengusir hama pcb TOP](https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/37c9e058-6059-437e-a106-7deaae68a30b)

---
## Blog diagram
![Blog  Diagram Hama drawio (2)](https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/e277846e-b06b-4b21-aa07-40b1cbcde06f)

Cara Kerja

1. Saat ada Tikus atau Burung Pipit yang melewati atau menyentuh Padi Akan Membuat Padi Bergerak/bergetar
2. Getaran Dari Padi akan Di Deteksi Oleh Sensor Getar dan menghasilkan Sinyal Yang akan di kirim ke Mikrokontroler
3. Setelah Sinyal dari Sensor getar Di Terima oleh Mikrokontroler Maka Akan Membuat Led Menyala 
4. Dimana Disini LED sebagai Indikator terdapat Keberadaan Hama, Dimana Petani Dapat Menekan tombol (Button) seusai LED menyala yang akan Mengaktifkan Suara Pengusir Hama
5. Suara Output dari Mikrokontroler akan Di kuatkan Oleh Amplifier (penguat), Yang mana Suara Akan di keluarkan pada Speaker 
6. lalu Suara Yang akan di Keluarkan adalah Suara Hewan Buas contohnya Harimau, yang mana akan mengusir Tikus Dan Burung Pipit dari Tumbuhan Padi
---
## Simulasi projek
Disini kita coba mensimulasikan dengan menggunakan aplikasi wokwi
![simulasi di wokwi (1)](https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/4f32a8e1-5674-4c84-8562-ea72835ad898)

![Simulasi di wokwi] (https://wokwi.com/projects/398310246027706369)

---
## Gambar Desain 3D
![WhatsApp Image 2024-05-14 at 09 17 57 (1)](https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/5291be6f-e928-441b-8287-0be4fe102cee)


![File projek ke Blend] https://github.com/irsyadnizar23/Projek-PengusiranHama/blob/main/Desain%203D/File/File%20Alat%20pengusir%20Hama%20dengan%20aplikasi%20blend.blend

## Hasil cetak PCB
![PCB jadi](https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/caa92b92-980c-40c2-a705-7ee4716ad887)

## Sistem audio
Disini untuk pembuatan audio kita menggunakan software audacity dan HXD yang kita gunakan untuk merekam hasil suara rekaman kita atau suara yang telah kita download bebrbentuk mp3
Berikut langkah langkah mengkonversi audio dari audacity hingga menjadi bahasa C
   1. Buka aplikasi audacity
   2. Rekam suara atau dapat ambil audio dari web
   3. Setelah melakukan perekaman audio akan menghasilkan seperti dibawah ini
<img width="960" alt="sebelum diset noise nya" src="https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/3861e563-bcba-45a7-ab11-f007b2620bb5">
   4. Setelah diset noise nya agar pada audio tidak terdapat sebuah noise
      
<img width="960" alt="foto saat memasukkan audio pada audacity" src="https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/cf032f5f-0f1d-4fc0-9144-a3cda52f95e0">
   5. Export audio ke bentuk RAW
   
<img width="959" alt="bentuk RAW hasil dari audacity" src="https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/98a209a3-080a-48d0-b7b9-c622ceb452aa">


   6. Buka aplikasi HXD
   7. Klik open lalu pilih file RAW yang telah kita ekspor dari audacity
      
<img width="959" alt="bentuk RAW hasil dari audacity" src="https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/15dfcc4c-df52-44b1-9898-82e6d77a5f27">
   8. lalu klik file lalu pilih export ke C, selanjutnya buka vs code pilih file yang telah kita export dari HXD 
<img width="765" alt="program audio di vscode" src="https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/8054094a-dc2c-4cac-9da0-c8a63c6282ca">

## Proses pengerjaan 
1. Mencoba sistem pada wokwi

2. Membuat desain 3d

3. Membuat shematik dan Board pada software eagle

4. pembelian komponen komponen yang diperlukan

5. Mensolder komponen pada PCB

6. Membuat rekaman audio pada audacity dan HXD

7. Membuat program pada arduino menggunakan arduino ide

8. Pengujian alat




