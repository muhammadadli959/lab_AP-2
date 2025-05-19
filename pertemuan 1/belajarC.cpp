#include <stdio.h>      // Mengimpor header standar input/output C
#include <conio.h>      // Mengimpor header untuk fungsi getch()

int main() {            // Fungsi utama program
    char nama[50];      // Deklarasi array char untuk menyimpan nama
    int nim;            // Deklarasi variabel integer untuk NIM
    char kom[2];        // Deklarasi array char untuk menyimpan kode KOM
    float ip;           // Deklarasi variabel float untuk IP

    printf("Hello World\n");        // Menampilkan teks "Hello World" ke layar

    printf("Masukkan nama : ");     // Meminta user memasukkan nama
    gets(nama);                    // Mengambil input string nama dari user

    printf("Masukkan nim : ");     // Meminta user memasukkan NIM
    scanf("%d", &nim);             // Mengambil input integer NIM dari user

    getchar();                     // Mengambil karakter newline sisa dari buffer

    printf("Masukkan kom : ");     // Meminta user memasukkan kode KOM
    gets(kom);                     // Mengambil input string KOM dari user

    printf("Masukkan ip : ");      // Meminta user memasukkan IP
    scanf("%f", &ip);              // Mengambil input float IP dari user

    /* Untuk Output */
    printf("Nama : ");             // Menampilkan label "Nama :"
    puts(nama);                    // Menampilkan nama yang sudah diinput user

    printf("NIM : %d\n", nim);     // Menampilkan NIM yang sudah diinput user

    printf("KOM : ");              // Menampilkan label "KOM :"
    puts(kom);                     // Menampilkan kode KOM yang sudah diinput user

    printf("IP : %f\n", ip);       // Menampilkan IP yang sudah diinput user

    printf("press any button to continue..."); // Instruksi untuk melanjutkan
    getch();                       // Menunggu user menekan tombol apapun
}