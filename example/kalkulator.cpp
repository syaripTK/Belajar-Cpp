#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
  int pilihan;
  float a, b, hasil;
  puts("--====Masukkan Operator Aritmatika====--");
  puts("1. + (Pertambahan)");
  puts("2. - (Pengurangan)");
  puts("3. * (Perkalian)");
  puts("4. / (Pembagian)");

  cout << "Masukkan pilihan (1-4): ";
  cin >> pilihan;

  cout << "Masukkan angka pertama: ";
  cin >> a;
  cout << "Masukkan angka kedua: ";
  cin >> b;

  switch (pilihan) {
  case 1:
    hasil = a + b;
    break;
  case 2:
    hasil = a - b;
    break;
  case 3:
    hasil = a * b;
    break;
  case 4:
    if (b != 0) {
      hasil = a / b;

    } else {
      cout << "Error: pembagi tidak boleh 0" << endl;
    }
    break;
  default:
    cout << "Pilihan menu tidak valid!" << endl;
  }

  cout << "Hasilnya adalah: " << hasil << endl;

  return 0;
}
