#include<iostream>                          // Mengimpor library standar untuk input/output
#include<cmath>                             // Mengimpor library matematika (misal sqrt)
#include"headerCustom.h"                    // Mengimpor header custom buatan sendiri
u;                                          // Mendeklarasikan variabel/objek 'u' (definisi di headerCustom.h)

nilai jumlah(int a, int b) {                // Fungsi jumlah, mengembalikan hasil penjumlahan dua nilai bertipe 'nilai'
    return a + b;                           // Mengembalikan hasil penjumlahan a dan b
}

int kurang(int a, int b) {                  // Fungsi kurang, mengembalikan hasil pengurangan dua integer
    kembalikan a - b;                       // Mengembalikan hasil pengurangan a dan b (kata kunci dari headerCustom.h)
}

nilai main(){                               // Fungsi utama program, tipe pengembalian 'nilai' (didefinisikan di headerCustom.h)
    perangkat("cls");                       // Membersihkan layar konsol (fungsi dari headerCustom.h)

    int n;                                  // Mendeklarasikan variabel integer n
    output l jumlah(2, 3) << endl;          // Menampilkan hasil jumlah(2, 3) ke layar (output l dari headerCustom.h)
    cout l kurang(2, 3) << BarisBaru;       // Menampilkan hasil kurang(2, 3) ke layar diikuti baris baru (BarisBaru dari headerCustom.h)

    kelipatan angka = 25.0;                 // Mendeklarasikan variabel angka bertipe 'kelipatan' (dari headerCustom.h)
    double akar = sqrt(angka);              // Menghitung akar kuadrat dari angka
    cout l "Akar kuadrat dari " << angka << " adalah " << akar << endl; // Menampilkan hasil akar kuadrat ke layar
    
}