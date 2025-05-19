#include<iostream>                      // Mengimpor library untuk input/output
#include<vector>                        // Mengimpor library untuk penggunaan vector
using namespace std;                    // Menggunakan namespace std agar tidak perlu menulis std::

int main(){                             // Fungsi utama program
    //vektor declaration & initialization
    vector<string> nama_karyawan = {"Alya", "Budi", "aurik", "Eko"}; // Deklarasi dan inisialisasi vector string

    //ascending element in vector
    // for (int i = 0; i < nama_karyawan.size(); i++){ // Loop untuk menampilkan semua elemen vector (dari awal ke akhir)
    //    cout << nama_karyawan[i] << endl;            // Menampilkan elemen ke-i dari vector
    // }

    //for (string karyawan : nama_karyawan){           // Loop for-each untuk menampilkan semua elemen vector
    //    cout << karyawan << endl;                    // Menampilkan elemen vector

    //add data to vector
    // nama_karyawan.push_back("imam");                // Menambahkan elemen baru "imam" ke akhir vector
    // for (int i = 0; i < nama_karyawan.size(); i++){ // Loop untuk menampilkan semua elemen vector setelah penambahan
    //     cout << nama_karyawan[i] << endl;           // Menampilkan elemen ke-i dari vector
    //  }

    //remove data from vector
    nama_karyawan.pop_back();                         // Menghapus elemen terakhir dari vector
    nama_karyawan.erase(nama_karyawan.begin() + 3);   // Menghapus elemen pada indeks ke-3 (elemen ke-4) dari vector

    for (int i = 0; i < nama_karyawan.size(); i++){   // Loop untuk menampilkan semua elemen vector setelah penghapusan
        cout << nama_karyawan[i] << endl;             // Menampilkan elemen ke-i dari vector
     }

}                                                     // Akhir dari fungsi main