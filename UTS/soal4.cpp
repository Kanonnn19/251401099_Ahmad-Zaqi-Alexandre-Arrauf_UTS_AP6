#include <iostream>
#include <cstdlib>
using namespace std;

// fungsi untuk menghitung pangkat
int hitungPangkat(int bilangan, int pangkat) {  // ini perintah untuk menghitung pangkat dari sebuah bilangan, dengan menggunakan perulangan
    int hasil = 1; 
    for (int i = 0; i < pangkat; i++) {// ini untuk melakukan perulangan sebanyak pangkat yang diinginkan, untuk menghitung hasil dari bilangan yang dipangkatkan
        hasil *= bilangan;
    }
    return hasil; // ini untuk mengembalikan hasil dari perhitungan pangkat yang sudah dilakukan, sebagai output dari fungsi ini
}

int main() {
    system("cls"); // ini untuk membersihkan layar sebelum program dijalankan, agar outputnya lebih bersih dan mudah dibaca
    int angka, jumlahDigit, total = 0; // simpan angka , jumlah digit angka, dan total hasil perphitungan pangkat digit
    string angkaString; // ini untuk menyimpan angka yang diinputkan oleh user dalam bentuk string, agar bisa diakses digitnya satu per satu

    cout << "Masukkan angka: ";
    cin >> angka;

    // validasi input
    if (angka <= 0) { //ini kondisi supaya user tu input positif, karena bilangan armstrong itu harus positif
        cout << "Harus angka positif!";
        return 0;
    }

    angkaString = to_string(angka); // ini untuk mengubah angka yang diinputkan oleh user menjadi string, agar bisa diakses digitnya satu per satu
    jumlahDigit = angkaString.length(); // ini untuk menghitung jumlah digit dari angka yang diinputkan oleh user, dengan menggunakan fungsi length() dari string

    cout << "Perhitungan: ";
    for (int i = 0; i < jumlahDigit; i++) { //perulangan setiap digit dari angka yang diinputkan oleh user, untuk menghitung pangkat dari setiap digit dan menjumlahkannya
        int digit = angkaString[i] - '0';  // ini untuk mengubah karakter digit yang diakses dari string menjadi integer 

        // tampilkan bentuk perkalian (misalnya 3*3*3)
        for (int j = 0; j < jumlahDigit; j++) { // ini untuk menampilkan bentuk perkalian dari setiap digit, dengan menggunakan perulangan
            cout << digit;
            if (j < jumlahDigit - 1) cout << "*"; // ini untuk menampilkan tanda perkalian antara digit
        }

        total += hitungPangkat(digit, jumlahDigit); // ini untuk menghitung pangkat dari setiap digit dan menjumlahkannya ke total

        if (i < jumlahDigit - 1) cout << " + "; // ini untuk menampilkan tanda tambah antara hasil perhitungan dari setiap digit
    }

    cout << " = " << total << endl; // ini untuk menampilkan hasil akhir dari perhitungan pangkat digit yang sudah dilakukan

    // keputusan apakah Armstrong atau bukan
    if (total == angka) { //ini kondisi jika total hasil perhitungan pangkat digit sama dengan angka yang diinputkan oleh user, maka angka tersebut adalah bilangan Armstrong
        cout << "Yes " << angka << " adalah bilangan Armstrong";
    } else {
        cout << "No " << angka << " bukan bilangan Armstrong"; //ini kondisi jika total hasil perhitungan pangkat digit tidak sama dengan angka yang diinputkan oleh user, maka angka tersebut bukan bilangan Armstrong
    }

    return 0;
}