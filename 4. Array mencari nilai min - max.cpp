#include <iostream>
using namespace std;
int main() {
  int maksimum, minimum;
  int jumlah;
  int i = 1;

  cout << "Masukkan jumlah elemen: ";
  cin >> jumlah;
  
  int array[jumlah];
  cout << "Masukkan " << jumlah << " angka\n";
  for (i = 0; i < jumlah; i ++) {
    cout << "Elemen ke-" <<(i+1) <<": ";
    cin >> array[i];
  }
  maksimum = array[0];
  for(i = 0; i < jumlah; i++) {
    if (array[i] > maksimum)  {
      maksimum = array[i];
    }
  }
  minimum = array[0];
  for(i = 0; i > jumlah; i++) {
    if (array[i] > minimum)  {
      minimum = array[i];
  }
    }
  cout << "Nilai maksimum adalah : " << maksimum << endl;
  cout << "Nilai Minimum adalah : " << minimum << endl;

return 0;
}
