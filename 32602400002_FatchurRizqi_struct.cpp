#include <iostream>
using namespace std;

// Struktur untuk menyimpan data buku
struct Buku {
    string judul;
    string penulis;
    int tahunTerbit;
};

int main() {
    const int jumlah_buku = 3;
    Buku daftarBuku[jumlah_buku];

    // Input data 3 buku
    cout << "Masukkan data 3 buku:\n";
    for (int i = 0; i < jumlah_buku; i++) {
        cout << "\nBuku ke-" << i+1 << ":\n";
        cout << "Judul\t\t: ";
        getline(cin, daftarBuku[i].judul);
        cout << "Penulis\t\t: ";
        getline(cin, daftarBuku[i].penulis);
        cout << "Tahun Terbit\t: ";
        cin >> daftarBuku[i].tahunTerbit;
        cin.ignore(); // Menghindari masalah getline setelah cin
    }

    // Menampilkan semua data buku
    cout << "\n-- Daftar Buku --\n";
    for (int i = 0; i < jumlah_buku; i++) {
        cout << "\nBuku ke-" << i+1 << ":\n";
        cout << "Judul\t\t: " << daftarBuku[i].judul << endl;
        cout << "Penulis\t\t: " << daftarBuku[i].penulis << endl;
        cout << "Tahun Terbit\t: " << daftarBuku[i].tahunTerbit << endl;
    }

    // Mencari buku terlama
    int terlama = 0;
    for (int i = 1; i < jumlah_buku; i++) {
        if (daftarBuku[i].tahunTerbit < daftarBuku[terlama].tahunTerbit) {
            terlama = i;
        }
    }

    // Menampilkan buku terlama
    cout << "\n-- Buku Terlama --\n";
    cout << "Judul\t\t: " << daftarBuku[terlama].judul << endl;
    cout << "Penulis\t\t: " << daftarBuku[terlama].penulis << endl;
    cout << "Tahun Terbit\t: " << daftarBuku[terlama].tahunTerbit << endl;

    return 0;
}