#include <iostream>
using namespace std;

//Tugas e-learning

//Kamus

int main() {

  int a, b;
  cout << "!!----Pengukuran Tinggi Badan----!!" << endl;
  cout << "1. Pria" << endl;
  cout << "2. Wanita" << endl;
  cout << "Masukan pilihan :" ;
  cin >> a;
  cout << "Masukan tinggi badan :" ;
  cin >> b;

  if (a == 1) {
    if (b >= 168 ) { cout << "--Tinggi Memenuhi Kriteria--" << endl;}
    else { cout << "--Tidak memenuhi Kriteria--" << endl;}
    }
  if (a == 2) {
    if (b >= 159 ) { cout << "--Tinggi Memenuhi Kriteria--" << endl;}
    else { cout << "--Tidak memenuhi Kriteria--" << endl;}
    }
return 0;

}
