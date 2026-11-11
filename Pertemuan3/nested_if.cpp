#include <iostream>
using namespace std;

int main() {
  string kerja, sekolah, hasil;
  int usia, pendapatan, tanggungan, biayaHidup;
  cout << "Masukkan usia kau : ";
  cin >> usia;

  if (usia <= 18) {
    cout << "Apakah kamu sudah bekerja? (Y/T)";
    cin >> kerja;

    if (kerja == "Y") {
      cout << "Masukkan pendapatan perbulan = ";
      cin >> pendapatan;
      cout << "Masukkan jumlah tanggungan = ";
      cin >> tanggungan;

      biayaHidup = pendapatan / tanggungan;

      if (biayaHidup < 3000000) {
        hasil = "Penduduk Miskin";
      } else {
        hasil = "Bukan penduduk miskin";
      }
    } else {
      cout << "Apakah kamu masih sekolah? ";
      cin >> sekolah;

      if (sekolah == "Y") {
        hasil = "Bukan penduduk miskin";
      } else {
        hasil = "Penduduk miskin";
      }
    }

    cout << "Selamat, anda termasuk ke dalam kategori " << hasil << endl;
  } else {
    cout << "Anda sudah bangkotan" << endl;
  }
  return 0;
}
