#include <iostream>
using namespace std;

int main() {
  float daya, jam, totalKwh;
  int hari;

  cout << "======================" << endl;
  cout << "PROGRAM HITUNG PEMAKAIAN ENERGI LISTRIK" << endl;
  cout << "======================" << endl;

  cout << "Masukkan daya perangkat (Watt): ";
  cin >> daya;
  cout << "Masukkan lama penggunaan per-hari (Jam): ";
  cin >> jam;
  cout << "Masukkan jumlah hari pemakaian: ";
  cin >> hari;

  if (daya <= 0) {
    cout << "Daya perangkat tidak valid!" << endl;
    return 1;
  } else if (jam <= 0 || jam > 24) {
    cout << "Format jam harus antara rentang 1 - 24 jam" << endl;
    return 1;
  } else if (hari <= 0 || hari > 31) {
    cout << "Format hari harus antara rentang 1 - 31 hari" << endl;
    return 1;
  } else {
    totalKwh = (daya * jam * hari) / 1000.0;
    cout << "----------------------------------------" << endl;
    cout << "Total pemakaian listrik dalam 1 bulan: " << totalKwh << "KWh"
         << endl;
    cout << "========================================" << endl;

    return 0;
  }
}
