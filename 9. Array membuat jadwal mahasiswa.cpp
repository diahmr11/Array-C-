#include <iostream>
using namespace std;
int main() {
    int i,j;
    string hari [3] = {"Senin", "Selasa", "Rabu"};
    string waktu [5] = {"08.00", "10.00", "12.00", "14.00", "16.00"};
    string jadwal [3][5];

    for (int i = 0; i < 3; i++) {
        cout << "Masukkan Jadwal untuk hari " << hari[i] << endl;
        for (int j = 0; j < 5; j++) {
            cout << "Jadwal Pada Pukul " << waktu[j] << ": ";
            cin >> jadwal [i][j];
        }
    }

    cout << "\nJadwal Kegiatan Mahasiswa : \n";
    for (int i = 0; i < 3; i++) {
        cout << "\nHari " << hari[i] << ":\n";
        for (int j = 0; j < 5; j++) {
            cout << waktu [j] << " - " << jadwal [i][j] << endl;
        }
    }
    return 0;
}