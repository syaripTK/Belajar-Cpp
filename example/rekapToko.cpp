#include <iostream>
using namespace std;

int main() {
  int n = 0;
  double hasil = 0, transaksi, average;
  cout << "Masukkan jumlah transaksi: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Masukkan transaksi ke -" << i + 1 << ": ";
    cin >> transaksi;
    hasil += transaksi;
  }
  average = hasil / n;
  cout << "Total transaksi hari ini adalah: " << hasil << endl;
  cout << "Rata-rata transaksi adalah: " << average << endl;
  return 0;
}
