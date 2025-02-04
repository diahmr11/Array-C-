#include <iostream>
using namespace std;

int main() {
  char arr [10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h','i', 'j'};
  
  cout << "Isi Array Indeks Ganjil : " << endl;
  for  (int i = 1; i < 10; i+=2){
      cout << "indeks " << i << arr [i] << endl;
  }
  return 0;
}