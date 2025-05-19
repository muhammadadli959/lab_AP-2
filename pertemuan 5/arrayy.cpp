#include <iostream>                  // Library untuk input/output standar
#include<array>                      // Library untuk array STL
using namespace std;                 // Menggunakan namespace std

int main() {                         // Fungsi utama program
    //array declaration & initialization
    //2 cara membuat array

    // cara 1 array kosong
    // string nama{5};               // Deklarasi array string kosong berukuran 5
    // nama[0] = "Alya"              // Mengisi elemen pertama array
    // nama[1] = "Budi";             // Mengisi elemen kedua array
    // nama[2] = "Cindy";            // Mengisi elemen ketiga array
    // nama[3] = "Diana";            // Mengisi elemen keempat array
    // nama[4] = "Eko";              // Mengisi elemen kelima array

    // cara 2 array langsung diisi
    // string nama[5] = {"Alya", "Budi", "Cindy", "Diana", "Eko"}; // Deklarasi & inisialisasi array
    // string nama[] = {"Alya", "Budi", "Cindy", "Diana", "Eko"};  // Deklarasi array tanpa ukuran eksplisit

    //ascending element in array
    // cout <<nama[0] << endl;        // Menampilkan elemen pertama array
    // cout <<nama[1] << endl;        // Menampilkan elemen kedua array
    // cout <<nama[2] << endl;        // Menampilkan elemen ketiga array
    // cout <<nama[3] << endl;        // Menampilkan elemen keempat array
    // cout <<nama[4] << endl;        // Menampilkan elemen kelima array

    // menggunakan looping
    // for (int i = 0; i < 5; i++){   // Loop dari 0 sampai 4
    //     cout << nama[i] << endl;   // Menampilkan setiap elemen array
    // }

    //descending element in array use looping
    // for (int i = 4; i >= 0; i--){  // Loop dari 4 sampai 0 (mundur)
    //     cout << nama[i] << endl;   // Menampilkan setiap elemen array
    // }

    //multidimensional array
    // 1 3 5 
    // 2 4 6 

    // int matrix[2][3] = { {1, 3, 5}, {2, 4, 6} }; // Deklarasi array 2D
    // for(int i = 0 ; i < 2; i++){                // Loop baris
    //     for(int j = 0; j < 3; j++){             // Loop kolom
    //         cout << matrix[i][j] << " ";        // Tampilkan elemen matrix
    //     }
    //     cout << endl;                           // Pindah baris
    // }

    //string array
    // string nama = "adli";           // Deklarasi string
    // cout << nama[0] << endl;        // Menampilkan karakter pertama
    // cout << nama[2] << endl;        // Menampilkan karakter ketiga

    // for(int i = 0; i < nama.length(); i++){ // Loop setiap karakter string
    //     cout << nama[i] << endl;            // Tampilkan karakter
    // }

    // string s1 = "hello";            // Deklarasi string s1
    // string s2 = "world";            // Deklarasi string s2
    /*1. s1 = s2*/
    // s1 = s2;                        // Menyalin isi s2 ke s1
    // cout << "s1 = " << s1 << endl;  // Menampilkan s1

    /*2. s1 = s1 + s2*/
    // s1 = "hello"; // reset nilai di s1 // Mengatur ulang nilai s1
    // cout << "hasil : " << s1 + s2 << endl; // Gabungkan s1 dan s2 lalu tampilkan

    /*3. s1. length()*/
    // cout << s1.length() << endl;    // Tampilkan panjang string s1
    // cout << (s1 + s2).length() << endl; // Tampilkan panjang gabungan s1 dan s2

    /*4. s1. subrst(n, m)*/
    // cout << s1.substr(2, 3) << endl; // Tampilkan substring dari s1 mulai indeks 2 sepanjang 3 karakter
    // cout << (s1 + s2). substr(5, 3) << endl; // Tampilkan substring dari gabungan s1+s2 mulai indeks 5 sepanjang 3 karakter

    // operator sizeof
    // int angka = 10;                 // Deklarasi variabel integer
    // cout << sizeof(angka);          // Menampilkan ukuran memori variabel angka
    
    // int nilai[] = (10, 20, 30, 40, 50); // Salah, seharusnya pakai kurung kurawal
    // cout << sizeof(nilai);          // Menampilkan ukuran array nilai

    // string s1 = "alya";             // Deklarasi string s1
    // cout << sizeof(s);              // Menampilkan ukuran memori string (variabel salah, seharusnya s1)

    // array library
    array<float, 5> nilai = {87.5, 90, 100, 95.7, 78.3}; // Deklarasi array STL bertipe float
    cout << "nilai : ";              // Menampilkan teks "nilai : "

    // for (int i = 0; i < nilai.size(); i++){ // Loop berdasarkan ukuran array
    //     cout << nilai[i] << " ";    // Menampilkan setiap elemen array
    // }

    // for (float n : nilai){          // Loop dengan range-based for
    //     cout << n << " ";           // Menampilkan setiap elemen array
    // }
    
    return 0;                        // Mengakhiri program
}