#include <iostream>                  // Mengimpor library untuk input/output
using namespace std;                 // Menggunakan namespace std

string namaglobal = "ilmu";          // Mendeklarasikan variabel global

void namavariabel(){                 // Mendefinisikan fungsi namavariabel
    string namalokal = " komputer";  // Mendeklarasikan variabel lokal

    //coba akses
    cout << namalokal << endl;       // Menampilkan nilai variabel lokal

    //coba akses
    cout << namaglobal << endl;      // Menampilkan nilai variabel global
}
int main(){                          // Fungsi utama program

    namavariabel();                  // Memanggil fungsi namavariabel

    //coba akses
    cout << namaglobal << endl;      // Menampilkan nilai variabel global

    //coba akses
    // cout << namalokal << endl;    // Error: variabel lokal tidak bisa diakses di sini

}