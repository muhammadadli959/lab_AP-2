#include<iostream>                  // Mengimpor library untuk input/output
using namespace std;                // Menggunakan namespace std

int main(){                         // Fungsi utama program
    string kalimat;                 // Deklarasi variabel string untuk menyimpan kalimat
    int i;                          // Deklarasi variabel integer untuk iterasi
    cout << "Masukkan kalimat: ";   // Menampilkan pesan input ke layar
    getline(cin, kalimat);          // Membaca satu baris input dari user ke variabel kalimat

    for( i = 0; i < kalimat.length(); i++){ // Loop untuk setiap karakter dalam kalimat
        kalimat[i] = toupper(kalimat[i]);   // Mengubah karakter ke huruf kapital
    }
    cout << "kalimat dalam huruf kapital: " << kalimat << endl; // Menampilkan hasil kalimat kapital

    return 0;                      // Mengakhiri program dengan nilai kembali 0
}