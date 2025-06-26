#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int jumlah_siswa = 10, pertemuan = 5;
    string siswa [jumlah_siswa] = {"Anto","Budi","Siti","Andi","Zaid",
                                    "Amar","Hindun","Paijo","Paimen","Lili"};
    int nilai [jumlah_siswa][pertemuan] = {{70,80,50,60,85}, {90,85,80,70,75},
                                            {86,94,85,80,90}, {82,65,70,60,75},
                                            {76,89,67,46,87}, {98,89,78,80,90},
                                            {76,78,56,66,65}, {78,77,75,64,79},
                                            {87,89,88,85,83}, {80,85,86,78,79}};
    //menghitung rata rata nilai siswa
    cout << "--- Rata-rata nilai tiap siswa ---\n";
    for(int i = 0; i < jumlah_siswa; i++){
        float total = 0;
        for(int j = 0; j < pertemuan; j++){
            total += nilai[i][j];
        }
        float rata_rata = total/pertemuan;
        cout << siswa [i] << " = " << fixed << setprecision(2) << rata_rata << endl;
    }

    //mencari nilai tertinggi tiap pertemuan
    cout << "\n--- Nilai Tertinggi Tiap Pertemuan ---\n";
    for (int j = 0; j < pertemuan; j++) {
        int tertinggi = 0;
        for (int i = 0; i < jumlah_siswa; i++) {
            if (nilai[i][j] > nilai[tertinggi][j]) {
                tertinggi = i;
            }
        }
        cout << "Pertemuan ke-" << j + 1 << " : " << siswa[tertinggi]
             << " (" << nilai [tertinggi][j] << ")" << endl;
    }
    
    return 0;
}
