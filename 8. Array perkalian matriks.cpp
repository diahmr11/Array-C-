#include <iostream>
using namespace std;
int main() {
  int baris, kolom, jumlah;
  int matriks [2][2];
  
  //input elemen martiks A
  cout << "Masukkan Elemen Matriks : \n";
  for (int baris = 0; baris < 2; baris++) {
    for (int kolom = 0; kolom < 2; kolom++) {
          cin >> matriks [baris][kolom];
  }
      }
          
  //output matriks
  cout << "Matriks : " << endl;
  for (int baris = 0; baris < 2; baris++) {
      for (int kolom = 0; kolom < 2; kolom++) {
          cout << matriks [baris][kolom] * 5 << " ";
      }
      cout << endl;
  }
 
 return 0;
}