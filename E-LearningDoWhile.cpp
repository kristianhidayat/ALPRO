#include <iostream>
using namespace std;
//PROGRAM PERHITUNGAN ANGKAN KECELAKAAN
//E-LEARNING DO WHILE
int main () {
//Kamus
  int i = 2000;
//ALGORITMA
do
   {
      // Kamus
       int j = 150;
       do
       {
          //OUTPUT DATA
           cout << "TAHUN : " << i << " ANGKA KECELAKAAN : " << j << endl;
           j--;
       }while(j > 141);
i--;
   }while(i > 1998);

   return 0;
}
