#include <iostream>  //Masukin library
using namespace std; // standard

int main() {
  string nama, status;
  int nim, penghasilanOrangTua;
  float ipk;

  cout << "Masukkan Nama : " << endl;
  cin >> nama;

  cout << "Masukkan IPK : " << endl;
  cin >> ipk;

  if (ipk >= 3.50) {
    cout << "Masukkan NIM : " << endl;
    cin >> nim;
    cout << "Masukkan penghasilan orang tua perbulan : " << endl;
    cin >> penghasilanOrangTua;
    if (penghasilanOrangTua <= 4000000) {
      status = "Lolos Mendapatkan Beasiswa";
      cout << "Selamat anda lolos beasiwa" << status << endl;
    } else {
      status = "Tidak Lolos";
    }
  } else {
    status = "Tidak Lolos";
    cout << "Selamat anda lolos beasiwa" << status << endl;
  }

  return 0;
}

// int main() {
//   int x, y, z;
//   x = 5;
//   y = 3;
//
//   z = x * y;
//
//   cout << "Hasil perkalian: " << z;

//   float jari, hasil;
//   const float p = 3.14;
//   jari = 2;
//
//   cout << "Jari-jari: " << jari << endl;
//   hasil = (jari * p) * 2;
//
//   cout << "Kelilig dari lingkaran adalah: " << hasil;
//

//   int angka;
//   bool hasil;
//
//   angka = 5;
//
//   cout << "Angka yang anda masukkan:" << angka << endl;
//   hasil = angka > 10;
//   cout << boolalpha;
//   cout << hasil;
// }
