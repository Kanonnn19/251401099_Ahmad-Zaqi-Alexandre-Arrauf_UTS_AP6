#include <iostream>
#include <cstdlib>
using namespace std;
// ini perintah prosedur untuk mereverse angkanya.kenapa ga fungsi? karena tidak perlu  mengembalikan nilai
void loop(int angka[], int ulang){ 
    for(int i = ulang - 1; i >= 0; i--){ 
        cout << angka[i] << " "; // ini untuk menampilkan angka yang sudah diinputkan oleh user, dengan format yang jelas dan mudah dipahami oleh user
    }
}
int main(){
    system ("cls"); // ini untuk membersihkan layar sebelum program dijalankan, agar outputnya lebih bersih dan mudah dibaca
    int angka[5]; // ini untuk mendeklarasikan variabel array yang akan digunakan untuk menyimpan angka yang diinputkan oleh user
    cout << "Masukkan 5 angka: "; // ini untuk meminta user menginput 5 angka yang akan direverse
    for(int i = 0; i < 5; i++){  // ini untuk melakukan perulangan sebanyak 5 kali, untuk menginput angka yang diinginkan oleh user
        cin >> angka[i]; // ini untuk menyimpan angka yang diinputkan oleh user ke dalam array, dengan indeks yang sesuai dengan urutan input
    }
    cout << "Output: "; // ini untuk menampilkan output yang akan dihasilkan setelah angka yang diinputkan oleh user direverse
    loop(angka, 5); // ini untuk memanggil prosedur loop yang sudah dibuat sebelumnya
}