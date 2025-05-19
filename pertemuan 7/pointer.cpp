#include <iostream> //kenapa harus iostream? karena ini menggunakan cin dan cout
using namespace std; // menggunakan namespace std agar tidak perlu menulis std:: di depan cout/cin

void penjumlahan(int a, int b){ // fungsi penjumlahan biasa (tanpa pointer)
    cout << a + b << endl;      // menampilkan hasil penjumlahan a dan b
} //fungsi void adalah fungsi yang tidak mengembalikan nilai

void penjumlahanpointer(int *a, int *b){ // fungsi penjumlahan dengan parameter pointer
    *a += *b;                            // menambahkan nilai yang ditunjuk pointer b ke pointer a
    cout << *a << endl;                  // menampilkan hasil penjumlahan
}

int main(){
    system("cls"); // membersihkan layar console (khusus Windows)

    //pointer declaration
    // int num = 35; // deklarasi variabel int
    // int *pointer_number = &num; // deklarasi pointer yang menunjuk ke alamat num

    // cout << "isi variabel number = " << num << endl; // menampilkan nilai num
    // cout << "alamat dari variabel number = " << &num << endl; // menampilkan alamat memori num
    // cout << "isi variabel pointer_number = " << pointer_number << endl; // menampilkan alamat yang ditunjuk pointer
    // cout << "isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl; // menampilkan nilai yang ditunjuk pointer
    // cout << "alamat memori variabel pointer_number = " << &pointer_number << endl; // menampilkan alamat pointer itu sendiri

    //pointer operation
    // *pointer_number = 25; // mengubah nilai yang ditunjuk pointer menjadi 25
    // cout << "isi variabel number = " << num << endl; // menampilkan nilai num setelah diubah lewat pointer
    // cout << "alamat dari variabel number = " << &num << endl; 
    // cout << "isi variabel pointer_number = " << pointer_number << endl; 
    // cout << "isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << "alamat memori variabel pointer_number = " << &pointer_number << endl;

    //pointer array
    int num[] = {1, 2, 3, 4, 5}; // deklarasi array integer
    int *pointer_num = num;       // pointer menunjuk ke array num (elemen pertama)
    // cout << "isi variabel number = " << num[0] << endl; // menampilkan elemen pertama array
    // cout << "alamat dari memori variabel num = " << &num[3] << endl; // menampilkan alamat elemen ke-4
    // cout << "isi variabel pointer_num = " << pointer_num << endl; // menampilkan alamat elemen pertama
    // cout << "isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl; // menampilkan nilai elemen pertama
    // cout << "alamat memori variabel pointer_num = " << &pointer_num << endl; // menampilkan alamat pointer_num
    // cout << endl;

    // *pointer_num += 5; // menambah 5 ke elemen pertama array melalui pointer
    // cout << "isi variabel number = " << num[0] << endl; // menampilkan elemen pertama setelah ditambah
    // cout << "alamat dari memori variabel num = " << &num[3] << endl;
    // cout << "isi variabel pointer_num = " << pointer_num << endl;
    // cout << "isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    // cout << "alamat memori variabel pointer_num = " << &pointer_num << endl;
    // cout << endl;

    //pointer in parameter
    // int num1 = 5; // deklarasi variabel num1
    // int num2 = 7; // deklarasi variabel num2
    // penjumlahan(num1, num2); // memanggil fungsi penjumlahan biasa
    // cout << num1 << endl; // menampilkan nilai num1
    // cout << num2 << endl; // menampilkan nilai num2

    // penjumlahanpointer(&num1, &num2); // memanggil fungsi penjumlahan dengan pointer
    // cout << num1 << endl; // menampilkan nilai num1 setelah dijumlahkan
    // cout << num2 << endl; // menampilkan nilai num2

    //pointer in pointer
    // int score = 4; // deklarasi variabel score
    // int *pointer_score = &score; // pointer menunjuk ke score
    // int **ptr_pointer_score = &pointer_score; // pointer ke pointer
    // cout << "isi variabel score = " << score << " alamat memorinya " << &score << endl; 
    // cout << "isi variabel pointer_score " << pointer_score << " dan isi variabel yang ditunjuk oleh pointer_score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl;
    // cout << "isi variabel ptr_pointer_score " << ptr_pointer_score << " dan isi variabel yang ditunjuk oleh ptr_pointer_score " << **ptr_pointer_score << " alamat memori pointer_score " << &ptr_pointer_score << endl;

    //dinamic pointer
    int *ptr = new int; // membuat pointer dinamis (alokasi memori di heap)
    *ptr = 30;          // mengisi nilai 30 ke alamat yang ditunjuk ptr
    cout << "isi variabel ptr = " << *ptr << " dan alamat " << &ptr << endl; // menampilkan nilai dan alamat pointer

    delete ptr; // menghapus (dealokasi) memori yang dialokasikan dengan new
    cout << "isi variabel ptr = " << *ptr << " dan alamat " << &ptr << endl;  // menampilkan nilai setelah delete (undefined)
}