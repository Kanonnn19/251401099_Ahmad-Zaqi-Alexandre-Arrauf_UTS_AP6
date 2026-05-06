#include <iostream>
#include <cstdlib>
using namespace std; 

int fibo(int n){ // ini perintah untuk mencari suku ke-n dari deret fibonacci, dengan menggunakan rekursi
    if (n == 0){ // ini kondisi dasar untuk menghentikan rekursi, karena suku ke-0 dari deret fibonacci adalah 0
        return 0; // ini untuk mengembalikan nilai 0 sebagai hasil dari fungsi ini, karena suku ke-0 dari deret fibonacci adalah 0
    }
    else if (n == 1){ // ini kondisi dasar untuk menghentikan rekursi, karena suku ke-1 dari deret fibonacci adalah 1
        return 1; // ini untuk mengembalikan nilai 1 sebagai hasil dari fungsi ini, karena suku ke-1 dari deret fibonacci adalah 1
    }
    return fibo(n - 1) + fibo(n - 2); //ini rumus untuk mencari suku ke-n dari deret fibonacci, dengan menjumlahkan suku ke-(n-1) dan suku ke-(n-2)
}
int main(){
    system ("cls"); // ini untuk membersihkan layar sebelum program dijalankan, agar outputnya lebih bersih dan mudah dibaca
    int nacci;
    cout << "Masukkan suku ke-n: "; // ini untuk meminta user menginput suku ke-n yang akan dicari dalam deret fibonacci
    cin >> nacci;
    cout << "Output: " << fibo(nacci); // ini untuk menampilkan hasil dari perhitungan suku ke-n dari deret fibonacci yang sudah dilakukan
}