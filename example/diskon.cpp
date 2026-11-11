#include <iostream>
using namespace std;

int main() {
  double totalBelanja, diskon = 0, totalHarga;
  cout << "Masukkan total belanja: ";
  cin >> totalBelanja;

  totalBelanja >= 200000   ? diskon = 0.20 *totalBelanja
  : totalBelanja >= 100000 ? diskon = 0.10 *totalBelanja
                           : diskon = 0;
  totalHarga = totalBelanja - diskon;
  cout << "Harga akhir adalah: " << totalHarga << endl;
  return 0;
}
