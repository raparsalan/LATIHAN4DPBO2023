# LATIHAN4DPBO2023
# Janji
Saya Rafi Arsalan NIM 2108938 mengerjakan Latihan 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
# Desain Program
Program yang dibuat kali ini bertujuan untuk melakukan praktek terhadap Composite dalam OOP, desain yang dibuat menggunakan Inheritence, Composite dan Agregation.     

Pada program yang saya buat kali ini memiliki 6 Class yaitu Course, ProgramStudi, Human, Sivitas, Mahasiswa, dan juga Dosen. Course merupakan class yang berisi mata kuliah dan class ini akan dicomposite kedalam sebuah class lainnya yaitu ProgramStudi dimana objek Course ini akan dibuat didalam objek programstudi karena sebuah mata kuliah tidak bisa berdiri sendiri dan harus berada didalam suatu ProgramStudi. Sivitas merupakan penurunan dari class Human, dan Mahasiswa dan dosen adalah Penurunan dari Class Sivitas, Pada class sivitas ini akan diagregasi suatu objek yaitu Programstudi karena seorang mahasiswa pasti memiliki sebuah program studi tapi suatu program studi bisa dibuat tanpa harus membuat objek Mahasiswa terlebih dahulu

### Class Diagram :

![latian4dpbo](https://user-images.githubusercontent.com/90766249/224559370-a7bf19b9-abd9-483a-b903-c811c51631ca.png)

# Alur Program dan dokumentasi
Alur dari program ini sendiri awalnya membuat sebuah class Course dengan atribut :
- Nama Matkul
- Jumlah SKS

lalu membuat sebuah class ProgramStudi yang didalamnya akan dicomposite sebuah objek Course yang akan dibuat list sehingga memiliki atribut :
- Kode Prodi
- Nama Prodi
- List Mata Kuliah

Setelah membuat 2 class tadi kini beralih untuk class Human, Sivitas, Mahasiswa dan dosen, Class Human memiliki atribut :
- NIK
- Nama
- Jenis Kelamin

Lalu Class human tadi akan diwariskan kepada class Sivitas, dan didalam class sivitas ini akan diagregasikan suatu Objek Program studi yang sudah dibuat sebelumnya diluar class ini, sehingga Sivitas memiliki atribut :
- Asal Universitas
- Email Edu
- Objek Program Studi

Barulah terakhir class Sivitas akan diwariskan kepada class Mahasiswa dan juga Dosen, dimana class Mahasiswa Memiliki Atribut :
- NIM
- Semester

dan dosen memiliki Atribut :
- NIP
- Pendidikan Terakhir
- Keahlian

dan saya membuat sebuah list dimana didalamnya akan menampung kumpulan mahasiswa dan juga dosen yang nantinya akan dibuat dan ditambahkan

### Output yang dihasilkan : 
![hasilCPP](https://user-images.githubusercontent.com/90766249/224560047-99526c73-11fc-4126-99de-dcb1af1c21ab.png)


