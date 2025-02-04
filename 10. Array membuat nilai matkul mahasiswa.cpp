#include <iostream>
using namespace std;
int main() {
    int i,j;
    int nilai [3][3];
    string nama [3];
    double ratarata;

    for (int i = 0; i < 3; i++) {
        cout << "Masukkan Nama Mahasiswa : ";
        cin >> nama [i];

        for (int j = 0; j < 3; j++) {
            cout << "Masukkan Nilai Mata Kuliah " << j+1 << ": ";
            cin >> nilai [i][j];
        }
    }

    cout << "Rata - Rata Nilai Mahasiswa " << endl;
    for (int i = 0; i < 3; i++) {
        ratarata = 0;
        for (int j = 0; j < 3; j++) {
            ratarata += nilai [i][j]; 
        }
        ratarata /= 3;
        cout << nama[i] << ": " << ratarata << endl;
    }
    return 0;
}