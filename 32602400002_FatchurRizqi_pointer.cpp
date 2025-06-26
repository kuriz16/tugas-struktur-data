#include <iostream>
using namespace std;

// Fungsi menukar dua nilai menggunakan pointer
void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int data[5];
    int *p = data;  // Pointer ke array data

    // Input data
    cout << "Masukkan 5 bilangan bulat:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Bilangan ke-" << i + 1 << " : ";
        cin >> *(p + i);
    }

    // Mencari nilai terbesar dan terkecil menggunakan pointer
    int *maks = p;
    int *min = p;
    for (int i = 1; i < 5; i++) {
        if (*(p + i) > *maks)
            maks = p + i;
        if (*(p + i) < *min)
            min = p + i;
    }

    // Tampilkan nilai maksimum dan minimum
    cout << "\nNilai terbesar: " << *maks << endl;
    cout << "Nilai terkecil: " << *min << endl;

    // Tukar elemen pertama dan terakhir menggunakan pointer
    tukar(p, p + 4);

    // Tampilkan array setelah ditukar
    cout << "\nArray setelah elemen pertama dan terakhir ditukar:\n";
    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;

    return 0;
}