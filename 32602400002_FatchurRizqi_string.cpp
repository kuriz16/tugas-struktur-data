#include <iostream>
#include <string>
using namespace std;

bool isVokal(char c) {
    return c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o';
}

int main() {
    string kalimat;
    int jumlah_vokal = 0;

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);  // membaca seluruh kalimat termasuk spasi

    for (char c : kalimat) {
        if (isVokal(c)) {
            jumlah_vokal++;
        }
    }

    cout << "Jumlah huruf vokal : " << jumlah_vokal << endl;

    return 0;
}