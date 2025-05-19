#include<iostream> // library untuk input/output
#include<string>   // library untuk tipe data string

using namespace std; // agar tidak perlu menulis std:: di depan fungsi

struct mahasiswa{        // deklarasi struct bernama mahasiswa
    string nama;         // atribut nama bertipe string
    int umur;            // atribut umur bertipe integer
    float ipk;           // atribut ipk bertipe float
};

int main(){ // fungsi utama program

    mahasiswa mhs1;         // deklarasi variabel mhs1 bertipe struct mahasiswa
    mhs1.nama = "adli";     // mengisi atribut nama pada mhs1
    mhs1.umur = 19;         // mengisi atribut umur pada mhs1
    mhs1.ipk = 4.00;        // mengisi atribut ipk pada mhs1

    // cout << "nama = " << mhs1.nama << endl; // menampilkan nama mhs1
    // cout << "umur = " << mhs1.umur << endl; // menampilkan umur mhs1
    // cout << "ipk = " << mhs1.ipk << endl;   // menampilkan ipk mhs1

    mahasiswa *ptrmhs1 = &mhs1;           // deklarasi pointer ke struct mahasiswa, menunjuk ke mhs1
    cout << "nama = " << ptrmhs1->nama << endl; // menampilkan nama melalui pointer
    cout << "umur = " << ptrmhs1->umur << endl; // menampilkan umur melalui pointer
    cout << "ipk = " << ptrmhs1->ipk << endl;   // menampilkan ipk melalui pointer
    
}