#include<iostream> //library untuk input/output
using namespace std; //menggunakan standar namespace

int main() { //fungsi utama program
    // goto label
    //contoh urutan data yang diberikan: hello world, fasilkom-ti, ilmu komputer, iklc
    //-> output yang diharapkan: hello world, iklc, ilmu komputer, fasilkom-ti

// a: //label a
//     cout << "hello world" << endl; //menampilkan "hello world"
//     goto d; //lompat ke label d
// b: //label b
//     cout << "fasilkom-TI" << endl; //menampilkan "fasilkom-TI"
//     return 0; //mengakhiri program
// c: //label c
//     cout << "ilmu komputer" << endl; //menampilkan "ilmu komputer"
//     goto b; //lompat ke label b
// d: //label d
//     cout << "IKLC" << endl; //menampilkan "IKLC"
//     goto c; //lompat ke label c

//menampilkan bilangan genap 1 -> 10 dengan goto
// int i = 10; //inisialisasi variabel i dengan 10
//     genap: //label genap
//     if( i%2 == 0) { //jika i genap
//         cout << i <<" "; } //tampilkan nilai i
//         i--; //kurangi i satu
//     if( i >= 2) { //jika i masih >= 2
//         goto genap; //kembali ke label genap
//     }

//statement while
// int i = 1; //inisialisasi i dengan 1
// while (i <= 10){ //selama i kurang dari sama dengan 10
//     if( i % 2 ==0){ //jika i genap
//         cout << i << " "; //tampilkan i
//     } i++; //increment i
// }

//statement do while
// int i =1; //inisialisasi i dengan 1
// do {
//     cout << i << endl; //tampilkan i
//     i++; //increment i
//     } while (i <= 10); //ulangi selama i <= 10

//satement for
//for(inisialisasi; kondisi; increment/decrement)
// for (int i = 1; i <= 10; i+=2){ //mulai dari 1, tambah 2 tiap iterasi, sampai 10
//         cout << "hello world" << endl; //tampilkan "hello world"
//     }

///nested for
// for (int i = 1; i <= 5; i++){ //loop baris 1-5
//     for (int j = 1; j <= 5; j++){ //loop kolom 1-5
//         cout << "*  "; //tampilkan bintang
//     } cout << endl; //pindah baris
// }

//segitiga siku-siku
// for (int i = 1; i <= 5; i++){ //loop baris 1-5
//     for (int j = 1; j <= i; j++){ //loop kolom sebanyak i
//         cout << "* "; //tampilkan bintang
//     } cout << endl; //pindah baris
// }
}