#include <iostream>

// I.S Program Kalkulator
// F.S Hasil Perhitungan Kalkulator

using namespace std;

//Prototype
int tambah (int a, int b);
int kurang (int a, int b);
int kali (int a, int b);
int bagi1 (int a, int b);
int bagi2 (int a, int b);


int main () {

    // Kamus
    int a,b ;

    // Input Data A
    cout << "Masukan Nilai A : ";
    cin >> a;

    // Input Data B
    cout << "Masukan Nilai B : ";
    cin >> b;

    cout << endl; // Untuk Enter

    // Pertambahan
    cout << "Hasil Pertambahan A dan B adalah " << tambah (a, b) << endl;

    //Pengurangan
    cout << "Hasil Pengurangan A dan B adalah " << kurang (a, b) << endl;

    //Perkalian
    cout << "Hasil Perkalian A dan B adalah " << kali (a, b) <<endl;

    //Pembagian (Division/Div) Tanpa Sisa
    cout << "Hasil Pembagian A dan B adalah " << bagi1 (a, b) <<endl;

    //Pembagian (Modulus/Mod) Dengan Sisa Pembagian
    cout << "Hasil Sisa Pembagian A dan B adalah " << bagi2 (a, b) <<endl;

    //Jika Nilai A Sama dengan B (==)
     if (a == b) {
       cout << " A sama dengan B " << endl;
     } else {
       cout << " A Tidak sama dengan B " << endl;
     }

     //Jika Nilai A Tidak sama dengan B (!=)
     if (a != b) {
       cout << " A Tidak sama dengan B " << endl;
     } else {
       cout << " A sama dengan B " << endl;
     }

     //Jika Nilai A Kurang dari sama dengan B (<=)
     if (a <= b) {
       cout << " A Kurang dari B " << endl;
   } else {
     cout << " A Lebih Besar dari B " << endl;
   }

     //Jika Nilai B Lebih dari sama dengan A (>=)
     if (a >= b) {
       cout << " A Lebih Besar dari B " << endl;
   } else {
     cout << " A Kurang dari B " << endl;
   }

     //Jika Nilai A Kurang dari B (<)
     if (a < b) {
       cout << " A Lebih Kecil dari B " << endl;
     } else {
       cout << " A Tidak Lebih Kecil dari B " << endl;
     }

     //Jika Nilai A Lebih dari B (>)
     if (a > b) {
       cout << " A Lebih Besar dari B " << endl;
     } else {
       cout << " A Tidak Lebih Besar dari B " << endl;
     }

    return 0;
}

// Aritmatika
int tambah (int a, int b) {
    return a + b;
}

int kurang (int a, int b) {
    return a - b;
}

int kali (int a, int b) {
    return a * b;
}

int bagi1 (int a, int b) {
    return a / b;
}

int bagi2 (int a, int b) {
    return a % b;
}
