#include <iostream>                  // Library untuk input/output standar
#include <string>                    // Library untuk tipe data string
#include <vector>                    // Library untuk menggunakan vector
using namespace std;                 // Menggunakan namespace std agar tidak perlu menulis std::

struct alamat{                       // Mendefinisikan struct alamat
        string jalan;                // Menyimpan nama jalan
        string kota;                 // Menyimpan nama kota
        string kodepos;              // Menyimpan kode pos
};

struct mahasiswa{                    // Mendefinisikan struct mahasiswa
        string nama;                 // Menyimpan nama mahasiswa
        int umur;                    // Menyimpan umur mahasiswa
        float ipk;                   // Menyimpan IPK mahasiswa
        alamat alamat;               // Menyimpan data alamat (struct di dalam struct)
    };

    int main(){                      // Fungsi utama program
        system("cls");               // Membersihkan layar konsol (khusus Windows)

        mahasiswa mhs1;              // Membuat variabel mhs1 bertipe mahasiswa

        // vector untuk menyimpan banyak data mahasiswa
        vector<mahasiswa> mahasiswa; // Membuat vector untuk menampung data mahasiswa
        int n;                       // Variabel untuk jumlah mahasiswa
        cout << "masukkan jumlah mahasiswa : "; // Menampilkan pesan input jumlah mahasiswa
        cin >> n;                    // Membaca jumlah mahasiswa dari user

        for (int i = 0; i < n; i++){ // Loop untuk input data mahasiswa sebanyak n kali
            cout << "mahasiswa " << i + 1 << endl; // Menampilkan nomor mahasiswa
            cin.get();              // Mengambil karakter newline agar getline bisa bekerja
            cout << "masukkan nama : "; // Meminta input nama
            getline(cin, mhs1.nama);    // Membaca nama lengkap mahasiswa
            cout << "masukkan umur : "; // Meminta input umur
            cin >> mhs1.umur;           // Membaca umur mahasiswa
            cout << "masukkan ipk : ";  // Meminta input IPK
            cin >> mhs1.ipk;            // Membaca IPK mahasiswa

            mahasiswa.push_back(mhs1);  // Menyimpan data mahasiswa ke vector
        }

        for (int i = 0; i < n; i++){   // Loop untuk menampilkan data mahasiswa
            cout << "mahasiswa " << i + 1 << endl; // Menampilkan nomor mahasiswa
            cout << "nama : " << mahasiswa[i].nama << endl; // Menampilkan nama
            cout << "umur : " << mahasiswa[i].umur << endl; // Menampilkan umur
            cout << "ipk : " << mahasiswa[i].ipk << endl;   // Menampilkan IPK
        }
    }