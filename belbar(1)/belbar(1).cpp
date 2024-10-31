#include <iostream> // Mengimpor pustaka input-output C++
#include <string>   // Mengimpor pustaka untuk menggunakan string
using namespace std; // Menggunakan namespace std agar tidak perlu menulis std:: setiap kali

int main() {
    // Deklarasi variabel
    string nim;              // Variabel untuk menyimpan NIM pelanggan (Nomor Induk Mahasiswa)
    double hargaBarang;      // Variabel untuk menyimpan harga per barang (dalam tipe desimal)
    int jumlahBarang;        // Variabel untuk menyimpan jumlah barang yang dibeli (dalam tipe integer)
    int duaDigitTerakhir;    // Variabel untuk menyimpan dua digit terakhir dari NIM
    int diskon;              // Variabel untuk menyimpan nilai diskon yang diterapkan (dalam persen)

    // Input NIM dari user
    cout << "Masukkan NIM: ";
    cin >> nim; // Mengambil input NIM dan menyimpannya dalam variabel nim

    // Input harga barang dari user
    cout << "Masukkan harga barang: ";
    cin >> hargaBarang; // Mengambil input harga barang dan menyimpannya dalam variabel hargaBarang

    // Input jumlah barang dari user
    cout << "Masukkan jumlah barang: ";
    cin >> jumlahBarang; // Mengambil input jumlah barang dan menyimpannya dalam variabel jumlahBarang

    // Ambil dua digit terakhir dari NIM
    // nim.size() mengembalikan panjang string NIM
    // nim.substr(nim.size() - 2) mengambil substring dari NIM, yaitu 2 karakter terakhir
    // stoi(...) mengonversi substring ini dari string ke integer
    duaDigitTerakhir = stoi(nim.substr(nim.size() - 2));

    // Tentukan diskon berdasarkan kondisi jumlah barang dibandingkan dua digit terakhir NIM
    if (jumlahBarang > duaDigitTerakhir) { // Jika jumlah barang lebih besar dari dua digit terakhir NIM
        diskon = 15; // Terapkan diskon 15%
    }
    else { // Jika tidak
        diskon = 5; // Terapkan diskon 5%
    }

    // Hitung total harga sebelum diskon
    // totalHarga adalah hasil kali antara harga per barang dan jumlah barang yang dibeli
    double totalHarga = hargaBarang * jumlahBarang;

    // Hitung jumlah diskon dalam satuan uang
    // (diskon / 100.0) mengonversi persen menjadi desimal
    double jumlahDiskon = (diskon / 100.0) * totalHarga;

    // Hitung total yang harus dibayar setelah diskon
    double totalBayar = totalHarga - jumlahDiskon;

    // Output hasil perhitungan
    cout << "Jumlah barang: " << jumlahBarang << endl; // Menampilkan jumlah barang yang dibeli
    cout << "Diskon: " << diskon << "%" << endl; // Menampilkan nilai diskon dalam persen
    cout << "Total bayar setelah diskon: Rp" << totalBayar << endl; // Menampilkan total yang harus dibayar setelah diskon

    return 0; // Mengembalikan nilai 0 menandakan bahwa program telah selesai dengan baik
}
