#include <iostream>
using namespace std;
int main() {
  int baris, kolom;
  int A [2][2], B [2][2], C [2][2];
  //input elemen martiks A
  cout << "Masukkan Elemen Matriks A : \n";
  for (int baris = 0; baris < 2; baris++) {
      for (int kolom = 0; kolom < 2; kolom++) {
          cin >> A [baris][kolom];
      }
  }
  //input elemen matriks B
  cout << "Masukkan Elemen Matriks B : \n";
  for (int baris = 0; baris < 2; baris++) {
      for (int kolom = 0; kolom < 2; kolom++) {
          cin >> B [baris][kolom];
      }
  }
  //penjumlahan matriks 
  for (int baris = 0; baris < 2; baris++) {
      for (int kolom = 0; kolom < 2; kolom++) {
          C [baris][kolom] = A [baris][kolom] + B [baris][kolom];
      }
  }
  //output matriks A, B, C
  cout << "Matriks A : " << endl;
  for (int baris = 0; baris < 2; baris++) {
      for (int kolom = 0; kolom < 2; kolom++) {
          cout << A [baris][kolom] << " ";
      }
      cout << endl;
  }
  
  cout << "Matriks B : " << endl;
  for (int baris = 0; baris < 2; baris++) {
      for (int kolom = 0; kolom < 2; kolom++) {
          cout << B [baris][kolom] << " ";
      }
      cout << endl;
  }
  
  cout << "Matriks C : " << endl;
  for (int baris = 0; baris < 2; baris++) {
      for (int kolom = 0; kolom < 2; kolom++) {
          cout << C [baris][kolom] << " ";
      }
      cout << endl;
 }
 
 return 0;
    
}