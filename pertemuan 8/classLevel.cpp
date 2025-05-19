#include<iostream>                  // Mengimpor library standar untuk input/output
using namespace std;                // Menggunakan namespace std agar tidak perlu menulis std::

// Deklarasi kelas contohAkses
class contohAkses{
    private:
        int privateVar;            // Variabel hanya bisa diakses di dalam kelas ini

    protected:
        int protectedVar;          // Variabel bisa diakses di kelas ini dan turunannya
    
    public:
        int publicVar;             // Variabel bisa diakses dari mana saja

        // Constructor untuk inisialisasi variabel anggota
        contohAkses(){
            privateVar = 1;        // Inisialisasi privateVar dengan nilai 1
            protectedVar = 2;      // Inisialisasi protectedVar dengan nilai 2
            publicVar = 3;         // Inisialisasi publicVar dengan nilai 3
        }

        void tampilkansemua(){     // Method untuk menampilkan semua variabel anggota
            cout << "aksses dari dalam class : " << endl; // Menampilkan teks penjelas
            cout << privateVar << endl;    // Menampilkan nilai privateVar
            cout << protectedVar << endl;  // Menampilkan nilai protectedVar
            cout << publicVar << endl;     // Menampilkan nilai publicVar
        }
};

// Deklarasi kelas turunan dari contohAkses
class turunan : public contohAkses{
    public: 
        void aksesProtected() {    // Method untuk mengakses variabel protected dan public
            cout << "akses publicVar: " << publicVar << endl;      // Menampilkan publicVar
            cout << "akses protectedVar: " << protectedVar << endl; // Menampilkan protectedVar
        }
};

int main(){                       // Fungsi utama program

    contohAkses obj;              // Membuat objek dari kelas contohAkses
    obj.tampilkansemua();         // Memanggil method untuk menampilkan semua variabel

    cout << "aksses dari luar class : " << endl; // Menampilkan teks penjelas
    cout << obj.publicVar << endl; // Mengakses dan menampilkan publicVar dari luar kelas
    // cout << obj.protectedVar << endl; // Tidak bisa diakses, akan error jika dibuka
    // cout << obj.privateVar << endl;   // Tidak bisa diakses, akan error jika dibuka

    turunan tur;                  // Membuat objek dari kelas turunan
    tur.aksesProtected();         // Memanggil method untuk menampilkan protectedVar dan publicVar
}