#include <iostream>
using namespace std;

int main () {
    int i;
    int nilai [5];
    
    cout << "inputan data" << endl;
    //pengisian elemen array
    for (i = 0; i < 5; i++){
        cin >> nilai [i];
    }
    
    //menampilkan data ke layar
    cout << "\nOutput data" << endl;
    for (i = 0; i < 5; i++){
        cout << nilai[i] << endl;
    }
    return 0;
}