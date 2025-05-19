#include<iostream>                      // Mengimpor library untuk input/output
using namespace std;                    // Menggunakan namespace std

int main(){                             // Fungsi utama program
    string kalimat;                     // Deklarasi variabel string untuk menyimpan kalimat
    int i;                              // Deklarasi variabel integer untuk iterasi
    cout << "Masukkan kalimat: ";       // Menampilkan pesan input ke layar
    getline(cin, kalimat);              // Membaca satu baris input dari user ke variabel kalimat

    for(i = 0; i < kalimat.length(); i++){ // Loop untuk setiap karakter dalam kalimat
        // Mengecek apakah karakter adalah huruf vokal (a, e, i, o, u, baik kecil maupun besar)
        if(kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || kalimat[i] == 'o' || kalimat[i] == 'u' ||
           kalimat[i] == 'A' || kalimat[i] == 'E' || kalimat[i] == 'I' || kalimat[i] == 'O' || kalimat[i] == 'U'){
            kalimat[i] = toupper(kalimat[i]); // Mengubah huruf vokal menjadi huruf kapital
        }
    }
    cout << "Kalimat dengan huruf kapital: " << kalimat << endl; // Menampilkan hasil kalimat yang sudah diubah

    return 0;                            // Mengakhiri program
}