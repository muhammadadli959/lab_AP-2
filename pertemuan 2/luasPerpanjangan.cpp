#include<iostream> // Mengimpor library untuk input/output
using namespace std; // Menggunakan namespace standar

int main(){ // Fungsi utama program
    float luas, p, l; // Deklarasi variabel float untuk luas, panjang, dan lebar

    cout << "Masukkan panjang: "; // Menampilkan pesan input panjang
    cin >> p; // Menerima input panjang dari user

    cout << "Masukkan lebar: "; // Menampilkan pesan input lebar
    cin >> l; // Menerima input lebar dari user

    luas = p * l; // Menghitung luas persegi panjang
    cout << "Luas=  " << luas << endl; // Menampilkan hasil luas

    return 0; // Mengakhiri program
}