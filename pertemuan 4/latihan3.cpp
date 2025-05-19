#include <iostream>                  // Mengimpor library untuk input/output
using namespace std;                 // Menggunakan namespace std

int main() {                         // Fungsi utama program
    string password, sandi, expected = ""; // Deklarasi variabel string

    cout << "Masukkan kata sandi : ";      // Menampilkan pesan input password
    cin >> password;                       // Membaca input password dari user

    cout << "Masukkan kata : ";            // Menampilkan pesan input sandi
    cin >> sandi;                          // Membaca input sandi dari user

    // Membuat string "expected" berdasarkan pola tertentu
    for (int i = 0; i < password.length(); i++) { // Loop sebanyak panjang password
        expected += password.substr(0, i + 1);    // Menambah substring password ke expected
    }

    // Mengecek apakah input kedua sesuai dengan pola yang diharapkan
    if (expected == sandi) {                // Jika expected sama dengan sandi
        cout << "Tulisan agen benar" << endl;   // Output jika benar
    } else {                                // Jika tidak sama
        cout << "Tulisan agen salah" << endl;   // Output jika salah
    }

    return 0;                               // Mengakhiri program
}