#include <iostream>                  // Mengimpor library untuk input/output standar
using namespace std;                 // Menggunakan namespace std agar tidak perlu menulis std::

// Fungsi untuk menyapa pengguna dengan nama yang diberikan
void sapa(string nama) {             
    cout << "halo" << nama <<" selamat datang di AP 2 !" << endl; // Menampilkan pesan sapaan ke layar
}

int main(){                         
    string namapengguna = " adli";   // Mendeklarasikan variabel nama pengguna dan mengisinya dengan " adli"
    sapa(namapengguna);              // Memanggil fungsi sapa dengan parameter namapengguna
    return  0;                       // Mengembalikan nilai 0, menandakan program selesai dengan sukses
}