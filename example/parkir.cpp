#include <iostream>
using namespace std;

int main() {
  int jenisKendaraan, lamaParkir;
  float biayaParkir;

  cout << "-= Perhitungan Biaya Parkir =- \n (1) Mobil \n (2) Motor \n "
          "Masukkan jenis kendaraan anda:";
  cin >> jenisKendaraan;

  switch (jenisKendaraan) {
  case 1:
    cout << "Masukkan lama parkir (jam): ";
    cin >> lamaParkir;
    if (lamaParkir <= 0) {
      cout << "Masukkan tidak valid!" << endl;
      return 0;
    }
    if (lamaParkir <= 2)
      biayaParkir = 5000;
    else
      biayaParkir = 5000 + (lamaParkir - 2) * 2000;
    cout << "Biaya parkir anda: " << biayaParkir << endl;
    break;
  case 2:
    cout << "Masukkan lama parkir (jam): ";
    cin >> lamaParkir;
    if (lamaParkir <= 0) {
      cout << "Masukkan tidak valid!" << endl;
      return 0;
    }
    if (lamaParkir <= 2)
      biayaParkir = 2000;
    else
      biayaParkir = 2000 + (lamaParkir - 2) * 1000;
    cout << "Biaya parkir anda: " << biayaParkir << endl;
    break;
  default:
    cout << "Jenis kendaraan tidak valid" << endl;
    break;
  }

  return 0;
}
