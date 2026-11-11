#include <iostream>
using namespace std;

int main() {
  int angka1, angka2;
  cout << "=== Program Aritmatika Dasar ===" << endl;
  cout << "Masukkan angka pertama: ";
  cin >> angka1;
  cout << "Masukkan angka kedua: ";
  cin >> angka2;
  cout << endl;

  cout << "Hasil penjumlahan : " << angka1 << " + " << angka2 << " = "
       << angka1 + angka2 << endl;
  cout << "Hasil Pengurangan : " << angka1 << " - " << angka2 << " = "
       << angka1 - angka2 << endl;
  cout << "Hasil Perkalian : " << angka1 << " * " << angka2 << " = "
       << angka1 * angka2 << endl;
  cout << "Hasil Pembagian : " << angka1 << " / " << angka2 << " = "
       << angka1 / angka2 << endl;
  cout << "Hasil Modulus/ Sisa bagi : " << angka1 << " % " << angka2 << " = "
       << angka1 % angka2 << endl;

  return 0;
}
