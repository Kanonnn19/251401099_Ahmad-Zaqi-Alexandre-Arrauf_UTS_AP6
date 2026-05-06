#include <iostream> // ini perintah untuk menginput dan output
#include <cstdlib> // ini perintah untuk membersihkan layar, biar ga penuh sama output sebelumnya
using namespace std;
//setelah dihitung disini akan di panggil di output
int fpb(int a,int b){ // ini perintah untuk mencari fpb
    while (b != 0) { // selama b tidak sama dengan 0, maka akan terus dilakukan perhitungan
        int hasil = a % b; // hasil dari a mod b, ini untuk mencari sisa bagi dari a dibagi b
        a = b; // a akan diisi dengan nilai b, ini untuk memindahkan nilai b ke a
        b = hasil; // b akan diisi dengan nilai hasil, ini untuk memperbarui nilai b untuk iterasi selanjutnya dan memastikan bahwa proses perhitungan terus 
        // berjalan hingga b menjadi 0, yang menandakan bahwa fpb sudah ditemukan.
    }
    return a; // setelah b menjadi 0, maka a akan berisi nilai fpb dari angka yang diinputkan, dan akan dikembalikan sebagai hasil dari fungsi ini
}
int main() {
    system ("cls"); // ini untuk membersihkan layar sebelum program dijalankan, agar outputnya lebih bersih dan mudah dibaca
    int angka1, angka2, hasil; // ini untuk mendeklarasikan variabel yang akan digunakan untuk menyimpan angka yang diinputkan oleh user dan hasil dari perhitungan fpb
    // ini untuk meminta user menginput angka pertama dan kedua yang akan dihitung fpb-nya
    cout << "Masukkan angka ke-1: ";
    cin >> angka1;
    cout << "Masukkan angka ke-2: ";
    cin >> angka2;

    // ini supaya angka yang di input user itu bener, kan ga mungkin mencari fpb dari angka <= 1
    if (angka1 <= 0 || angka2 <= 0) {
        cout << "Masukkan angka yang bener kocak." << endl;
        return 0;
    }
    // kalo bagian ini untuk memanggil fungsi dari perhitungan fpb tadi
    hasil = fpb(angka1, angka2);// biar singkat (padahal sama aja keknya)
    cout << "Fpb dari " << angka1 << " dan " << angka2 << " adalah " << hasil; // ini untuk menampilkan hasil dari perhitungan fpb yang sudah dilakukan
    return 0; 
}