# Projek-Sistem Pengusiran hama otomatis berbasis mikrokontroler AVR 
![banner](https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/e25dc312-565f-49ab-a219-4e9d0ef7242b)


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
![komponen (2)](https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/82e4f71f-da53-4c56-a634-b979b894d169)


1. Arduino Uno
2. Led 3mm
3. Speaker
4. push Button(2)
5. Sensor sw 420
6. PAM 8403
7. Pin Header male dan female
8. resistor 1k
9. Tip31c

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
LINK (https://youtu.be/nzQVdEaNT4E?si=r3UM6CYokPurmcue)
---
## Gambar Desain 3D
![WhatsApp Image 2024-05-14 at 09 17 57 (1)](https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/5291be6f-e928-441b-8287-0be4fe102cee)


![File projek ke Blend] https://github.com/irsyadnizar23/Projek-PengusiranHama/blob/main/Desain%203D/File/File%20Alat%20pengusir%20Hama%20dengan%20aplikasi%20blend.blend

## Hasil cetak PCB
![PCB jadi](https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/caa92b92-980c-40c2-a705-7ee4716ad887)

## Sistem audio
Disini untuk pembuatan audio kita menggunakan software audacity dan HXD yang kita gunakan untuk merekam hasil suara rekaman kita atau suara yang telah kita download bebrbentuk mp3
Berikut langkah langkah mengkonversi audio dari audacity hingga menjadi bahasa C:

   1. Buka aplikasi audacity
   2. Rekam suara atau dapat ambil audio dari web
   3. Setelah melakukan perekaman audio akan menghasilkan seperti dibawah ini
<img width="960" alt="sebelum diset noise nya" src="https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/3861e563-bcba-45a7-ab11-f007b2620bb5">

   4. Setelah diset noise nya agar pada audio tidak terdapat sebuah noise
  <img width="960" alt="foto saat memasukkan audio pada audacity" src="https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/8d39aa9f-4902-49c0-8d48-3de542ba20f2">
  
   5. Export audio ke bentuk RAW
   <img width="960" alt="export file audio ke bentuk RAW" src="https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/ddbfb209-371a-412e-9439-a4c2a2797b73">
  
   6. Buka aplikasi HXD
   7. Klik open lalu pilih file RAW yang telah kita ekspor dari audacity
   <img width="959" alt="bentuk RAW hasil dari audacity" src="https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/15dfcc4c-df52-44b1-9898-82e6d77a5f27">
 
   8. lalu klik file lalu pilih export ke C, selanjutnya buka vs code pilih file yang telah kita export dari HXD
<img width="765" alt="program audio di vscode" src="https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/dcf3253d-66e4-4f4c-8622-9e2738bf6c3d">

  LINK AUDACITY
  https://youtu.be/fRlAp86dA1M?si=hetPyFKCUFnrN079
  
## Dokumentasi Proses pengerjaan 
1. Mencoba sistem pada wokwi

2. Membuat desain 3d
![3d desain](https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/6fdcf2ea-cbf3-4007-82e8-b9c84960a5c5)

3. Membuat shematik dan Board pada software eagle

4. pembelian komponen komponen yang diperlukan
![komponen (2)](https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/3f1a4e43-b936-4ad9-8090-9b111e3a80ac)

5. Mensolder komponen pada PCB
![penyolderan](https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/ae9eb877-aed1-4451-a2c4-a713eadf102e)

6. Pembentukan casing menggunakan bor
![pembentukan casing menggunkan bor](https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/5810cc0d-0c8f-4b0f-8899-abff3b0d9605)

7. Membuat rekaman audio pada audacity dan HXD
![pembuatan audio](https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/751dc919-0dd5-4192-819b-89ae100a7557)

8. Membuat program pada arduino menggunakan arduino ide
![pembuatan program arduino](https://github.com/irsyadnizar23/Projek-PengusiranHama/assets/168854830/70e3e1fe-7266-4722-a4f5-5f07f2195544)

9. Pengujian alat




