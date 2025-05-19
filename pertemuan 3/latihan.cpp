#include <iostream> // Mengimpor library untuk input/output
using namespace std; // Menggunakan namespace std agar tidak perlu menulis std::

// Program utama
int main() {
    int number; // Mendeklarasikan variabel untuk menyimpan input user

    cout << "Masukkan sebuah bilangan bulat: "; // Menampilkan pesan input ke user
    cin >> number; // Membaca input user dan menyimpannya ke variabel number

    if (number % 10 == 0) { // Mengecek apakah number kelipatan 10
        cout << number << " adalah kelipatan dari 10." << endl; // Jika ya, tampilkan pesan kelipatan 10
    } else if (number % 5 == 0) { // Jika tidak, cek apakah number kelipatan 5
        cout << number << " adalah kelipatan dari 5." << endl; // Jika ya, tampilkan pesan kelipatan 5
    } else { // Jika bukan kelipatan 5 maupun 10
        cout << number << " bukan kelipatan dari 5 maupun 10." << endl; // Tampilkan pesan bukan kelipatan
    }

    return 0; // Mengakhiri program
}