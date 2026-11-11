#include <iomanip>
#include <ios>
#include <iostream>
using namespace std;

int main() {
  int jenis;
  char irigasi;
  double harta, zakat;
  float nishob = 48000000, nishobMas = 64;
  cout << "== KALKULATOR PENGHITUNG ZAKAT == \n (1) Zakat Penghasilan \n (2) "
          "Zakat Pertanian \n (3) Zakat Mas Perak \n Masukkan jenis zakat yang "
          "mau dikeluarkan: ";
  cin >> jenis;
  switch (jenis) {
  case 1:
    cout << "Berapa jumlah penghasilan anda pertahun? " << endl;
    cin >> harta;
    if (harta < nishob) {
      cout << "Harta anda belum wajib untuk dizakati" << endl;
      break;
    } else {
      zakat = harta * 0.025;
      cout << fixed << setprecision(0);
      cout << "Zakat yang harus anda keluarkan adalah: Rp." << zakat << endl;
    }
    break;
  case 2:
    cout << "Berapa jumlah harta dari hasil pertanian anda? " << endl;
    cin >> harta;
    if (harta < nishob) {
      cout << "Harta anda belum wajib untuk dizakati" << endl;
      return 0;
    } else {
      cout << "Apakah anda membayar irigasi? (y/n) ";
      cin >> irigasi;
      irigasi == 'y' ? zakat = harta * 0.20 : zakat = harta * 0.10;
      cout << "Zakat yang harus anda keluarkan adalah: Rp." << zakat << endl;
    }
    break;
  case 3:
    cout << "Berapa jumlah mas / perak yang anda punya? (gram) ";
    cin >> harta;
    if (harta < nishobMas) {
      cout << "Anda belum wajib mengeluarkan zakat" << endl;
      return 0;
    } else {
      zakat = harta * 0.05;
      cout << "Zakat yang wajib anda keluarkan adalah: " << zakat << "gram"
           << endl;
    }
    break;
  default:
    cout << "Jenis zakat tidak valid!" << endl;
    break;
  }

  return 0;
}
