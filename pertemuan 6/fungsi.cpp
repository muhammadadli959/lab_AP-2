#include<iostream>                      // Mengimpor library untuk input/output
using namespace std;                    // Menggunakan namespace std

//fungsi tanpa nilai balikan
void tampilkanpesan(){                  // Mendefinisikan fungsi tanpa nilai balikan
    cout << "=====Selamat datang di AP 2=====" << endl; // Menampilkan pesan ke layar
}

//fungsi dengan nilai balikan
int tambah(int a, int b) {              // Fungsi dengan nilai balikan bertipe int
    return a + b;                       // Mengembalikan hasil penjumlahan a dan b
}

//fungsi overload
int kali(int a, int b) {                // Fungsi overload untuk perkalian bertipe int
    return a * b;                       // Mengembalikan hasil perkalian a dan b
}

double kali(double a, double b) {       // Fungsi overload untuk perkalian bertipe double
    return a * b;                       // Mengembalikan hasil perkalian a dan b
}

//fungsi rekursif
int faktorial(int n) {                  // Fungsi rekursif untuk menghitung faktorial
    if (n == 0 || n == 1) {             // Basis: jika n 0 atau 1
        return 1;                       // Kembalikan 1
    } else {                            // Jika tidak
        return n * faktorial(n - 1);    // Rekursi: n dikali faktorial(n-1)
    }   
}

int main() {                            // Fungsi utama program
    system("cls");                      // Membersihkan layar (khusus Windows)
    // menggunakan fungsi tanpa nilai balikan
    tampilkanpesan();                   // Memanggil fungsi tampilkanpesan

    int x = 5, y = 3;                   // Mendeklarasikan dan menginisialisasi variabel x dan y
    // fungsi dengan balikan/hasil
    int hasil = tambah(x, y);           // Memanggil fungsi tambah dan menyimpan hasilnya
    cout << "Hasil penjumlahan : " << x << " + " << y << " = " << hasil << endl; // Menampilkan hasil penjumlahan

    // menggunakan fungsi overload
    int hasilkaliint = kali(x, y);      // Memanggil fungsi kali (int) dan menyimpan hasilnya
    double hasilkalidouble = kali(5.5, 2.0); // Memanggil fungsi kali (double) dan menyimpan hasilnya

    cout << "Hasil perkalian (int) : "<< hasilkaliint << endl; // Menampilkan hasil perkalian int
    cout << "Hasil perkalian (double) : "<< hasilkalidouble << endl; // Menampilkan hasil perkalian double

    // menggunakan fungsi rekursif
    int angka = 5;                      // Mendeklarasikan variabel angka
    cout << "faktorial dari " << angka << " adalah " << faktorial(angka) << endl; // Menampilkan hasil faktorial
}