#include <iostream>                  // Mengimpor library untuk input/output
using namespace std;                 // Menggunakan namespace std

int main(){                          // Fungsi utama program
    int a, b;                        // Deklarasi variabel integer a dan b

//     system("cls");                // Membersihkan layar (khusus Windows)
//     //assigment operator
    a = 3;                           // Memberikan nilai 3 ke variabel a
    b = 5;                           // Memberikan nilai 5 ke variabel b

//     //arithmetic operator
//     int tambah = a + b;           // Penjumlahan a dan b
//     int kurang = a - b;           // Pengurangan a dan b
//     int kali = a * b;             // Perkalian a dan b
//     float bagi = (float)a / (float)b; // Pembagian a dan b dengan casting ke float
//     int modulo = a % b;           // Sisa bagi a dan b

//     cout << "hasil penjumlahan = " << tambah << endl; // Menampilkan hasil penjumlahan
//     cout << "hasil pengurangan = " << kurang << endl; // Menampilkan hasil pengurangan
//     cout << "hasil perkalian = " << kali << endl;     // Menampilkan hasil perkalian
//     cout << "hasil pembagian = " << bagi << endl;     // Menampilkan hasil pembagian
//     cout << "hasil sisa bagi = " << modulo << endl;   // Menampilkan hasil sisa bagi
// } 

// // relational operator
// cout << (a == b) << endl;         // Mengecek apakah a sama dengan b
// cout << (a < b) << endl;          // Mengecek apakah a kurang dari b
// cout << (a <= b) << endl;         // Mengecek apakah a kurang dari atau sama dengan b
// cout << (a > b) << endl;          // Mengecek apakah a lebih dari b
// cout << (a >= b) << endl;         // Mengecek apakah a lebih dari atau sama dengan b
// cout << (a != b) << endl;         // Mengecek apakah a tidak sama dengan b

// logical operator (&&, ||, !)
// cout << (true && true) << endl;   // Logika AND, hasil true
// cout << (true && false) << endl;  // Logika AND, hasil false
// cout << (false && true) << endl;  // Logika AND, hasil false
// cout << (false && false) << endl; // Logika AND, hasil false

// cout << (true || true) << endl;   // Logika OR, hasil true
// cout << (true || false) << endl;  // Logika OR, hasil true
// cout << (false || true) << endl;  // Logika OR, hasil true
// cout << (false || false) << endl; // Logika OR, hasil false

// cout << (!true) << endl;          // Logika NOT, hasil false
// cout << (!false) << endl;         // Logika NOT, hasil true

// bitwise operator (&, |, ^, ~, <<, >>) --> biner
// cout << (5&7) << endl;            // Bitwise AND antara 5 dan 7
// cout << (5|7) << endl;            // Bitwise OR antara 5 dan 7
// cout << (5^7) << endl;            // Bitwise XOR antara 5 dan 7
// cout << (~7) << endl;             // Bitwise NOT dari 7
// cout << (7 << 2) << endl;         // Bitwise shift left 7 sebanyak 2 bit
// cout << (7 >> 2) << endl;         // Bitwise shift right 7 sebanyak 2 bit

// short hand operator
// a += 7; // a = a + 7              // Menambah 7 ke a
// cout << a << endl;                // Menampilkan nilai a
// a -= 7; // a = a - 7              // Mengurangi 7 dari a
// cout << a << endl;                // Menampilkan nilai a
// a *= 7; // a = a * 7              // Mengalikan a dengan 7
// cout << a << endl;                // Menampilkan nilai a
// a /= 7; // a = a / 7              // Membagi a dengan 7

//increment dan decrement
//pre increment
// cout << a << endl;                // Menampilkan nilai a sebelum increment
// cout << ++a << endl;              // Pre-increment: tambah 1 ke a, lalu tampilkan
// cout << b << endl;                // Menampilkan nilai b sebelum increment
// cout << ++b << endl;              // Pre-increment: tambah 1 ke b, lalu tampilkan

//post increment
// cout << a << endl;                // Menampilkan nilai a sebelum increment
// cout << a++ << endl;              // Post-increment: tampilkan a, lalu tambah 1 ke a
// cout << a << endl;                // Menampilkan nilai a setelah increment
// cout << b << endl;                // Menampilkan nilai b sebelum increment
// cout << b++ << endl;              // Post-increment: tampilkan b, lalu tambah 1 ke b
// cout << b << endl;                // Menampilkan nilai b setelah increment

//pre decrement
// cout << a << endl;                // Menampilkan nilai a sebelum decrement
// cout << --a << endl;              // Pre-decrement: kurangi 1 dari a, lalu tampilkan
// cout << b << endl;                // Menampilkan nilai b sebelum decrement
// cout << --b << endl;              // Pre-decrement: kurangi 1 dari b, lalu tampilkan

//post decrement
cout << a << endl;                   // Menampilkan nilai a sebelum decrement
cout << a-- << endl;                 // Post-decrement: tampilkan a, lalu kurangi 1 dari a
cout << a << endl;                   // Menampilkan nilai a setelah decrement
cout << b << endl;                   // Menampilkan nilai b sebelum decrement
cout << b-- << endl;                 // Post-decrement: tampilkan b, lalu kurangi 1 dari b
cout << b << endl;                   // Menampilkan nilai b setelah decrement
}