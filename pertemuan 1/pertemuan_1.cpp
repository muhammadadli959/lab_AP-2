#include<iostream> // Mengimpor library untuk input/output standar
#include<conio.h> // Mengimpor library untuk fungsi getch() dan getche()
using namespace std; // Menggunakan namespace standar C++
int main() // Fungsi utama program
{
    string nama; // Variabel untuk menyimpan nama
    char kom, jeniskelamin; // Variabel untuk kom dan jenis kelamin
    int nim; // Variabel untuk menyimpan NIM
    float ip; // Variabel untuk menyimpan IP
    cout <<"hello word"<< endl; // Menampilkan teks "hello word" ke layar
    cout <<"masukkan nama anda: "; // Meminta user memasukkan nama
    cin >> nama; // Input nama (hanya kata pertama)
    getline(cin, nama); // Input nama (bisa mengandung spasi)
    cout <<"masukkan kom: "; // Meminta user memasukkan kom
    cin >> kom; // Input kom
    cout <<"masukkan nim: "; // Meminta user memasukkan NIM
    cin >> nim; // Input NIM
    cout <<"masukkan ip: "; // Meminta user memasukkan IP
    cin >> ip; // Input IP
    cout <<"masukkan jenis kelamin (l/p): "; // Meminta user memasukkan jenis kelamin
    jeniskelamin = getche(); // Input satu karakter jenis kelamin, langsung tampil

    cout << nama << endl; // Menampilkan nama
    cout << kom << endl; // Menampilkan kom
    cout << nim << endl; // Menampilkan NIM
    cout << ip << endl; // Menampilkan IP
    putchar(jeniskelamin); // Menampilkan jenis kelamin
    getch(); // Menunggu input karakter tanpa menampilkannya (pause program)
}