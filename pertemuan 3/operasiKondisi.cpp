#include <iostream> // Library untuk input/output
using namespace std; // Menggunakan namespace std

int main(){ // Fungsi utama program
    int nilai; // Deklarasi variabel untuk menyimpan nilai
    system("cls"); // Membersihkan layar konsol (khusus Windows)

    cout << "Masukkan nilai: "; // Menampilkan pesan input ke user
    cin >> nilai; // Menerima input nilai dari user

    //if statement
    // if (nilai <=65){ // Jika nilai kurang dari atau sama dengan 65
    //     cout <<"anda tidak lulus"; // Tampilkan tidak lulus
    // }

    //if else statement
    // if (nilai <=65){ // Jika nilai <= 65
    //     cout <<"anda tidak lulus"; // Tampilkan tidak lulus
    // } else { // Jika tidak
    //     cout <<"anda lulus"; // Tampilkan lulus
    //  }

    //if else if statment
    // if(nilai >= 100){ // Jika nilai >= 100
    //     cout << "anda kece" << endl; // Tampilkan anda kece
    // } else if (nilai <= 65){ // Jika nilai <= 65
    //     cout << "anda tidak lulus" << endl; // Tampilkan tidak lulus
    // } else { // Selain itu
    //     cout << "anda lulus" << endl; // Tampilkan lulus
    // }

    //nested if statement
    //     if (nilai <= 65){ // Jika nilai <= 65
    //         cout << "anda tidak lulus" << endl; // Tampilkan tidak lulus
    //     } else { // Jika tidak
    //     if (nilai == 100){ // Jika nilai 100
    //         cout << "anda lulus dan anda hebat" << endl; // Tampilkan lulus dan hebat
    //     } else { // Selain itu
    //         cout << "anda lulus" << endl; // Tampilkan lulus
    //     }
    // }

    //switch case statement
    // switch (nilai){ // Memilih aksi berdasarkan nilai
    //     case 1: 
    //         cout << "senin" << endl; // Jika 1, tampilkan senin
    //         break; // Keluar dari switch
    //     case 2:
    //         cout << "selasa" << endl; // Jika 2, tampilkan selasa
    //         break;
    //     case 3:
    //         cout << "rabu" << endl; // Jika 3, tampilkan rabu
    //         break;
    //     case 4: 
    //         cout << "kamis" << endl; // Jika 4, tampilkan kamis
    //         break;
    //     case 5:
    //         cout << "jumat" << endl; // Jika 5, tampilkan jumat
    //         break;
    //     case 6:
    //         cout << "sabtu" << endl; // Jika 6, tampilkan sabtu
    //         break;
    //     case 7:
    //         cout << "minggu" << endl; // Jika 7, tampilkan minggu
    //         break;
    //     default: //untuk membatasi nilai yang sudah disediakan
    //         cout << "inputan anda tidak valid"<< endl; // Jika bukan 1-7, tampilkan tidak valid
    //         break;
    // }

    // switch range
    // switch (nilai){ // Memilih aksi berdasarkan rentang nilai
    //     case 101 ... 9999: cout << "tidak masuk akal"<< endl; break; // Jika nilai di luar batas, tampilkan tidak masuk akal
    //     case 85 ... 100:
    //         cout << "nilai anda A"<< endl; // Jika 85-100, tampilkan A
    //         break;
    //     case 80 ... 84:
    //         cout << "nilai anda B+"<< endl; // Jika 80-84, tampilkan B+
    //         break;
    //     case 75 ... 79:
    //         cout << "nilai anda B"<< endl; // Jika 75-79, tampilkan B
    //         break;
    //     case 70 ... 74: 
    //         cout << "nilai anda C+"<< endl; // Jika 70-74, tampilkan C+
    //         break;
    //     case 65 ... 69:
    //         cout << "nilai anda C"<< endl; // Jika 65-69, tampilkan C
    //         break;
    //     case 60 ... 64:        
    //         cout << "nilai anda D"<< endl; // Jika 60-64, tampilkan D
    //         break;
    //     devault: cout << "E" << endl; // Jika tidak ada yang cocok, tampilkan E (typo: harusnya default)
    // }

    //ternary operator
    // if (nilai % 2 == 0){ // Jika nilai habis dibagi 2
    //     cout << "genap sih" << endl; // Tampilkan genap
    // } else {
    //     cout << "ganjil sih" << endl; // Tampilkan ganjil
    // }
    // a > 5 ? 9 : 6 // Contoh ternary operator
    // string cheknum = (nilai % 2 == 0) ? "genap" : "ganjil"; // Cek genap/ganjil dengan ternary
    // cout << nilai << " tuh bilangan " << cheknum << endl; // Tampilkan hasil cek
    return 0; // Mengakhiri program
}