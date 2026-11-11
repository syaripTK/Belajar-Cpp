#include <iostream>
using namespace std;

int main() {
  int member;
  double totalBelanja, diskon, totalDiskon;

  cout << "Pilihan keanggotaan \n (1) Member \n (2) Non Member \n Masukkan "
          "keanggotaan: ";
  cin >> member;
  cout << "Masukkan total belanja anda: ";
  cin >> totalBelanja;
  if (totalBelanja >= 100000) {
    member == 1 ? diskon = 0.20 : diskon = 0.10;
  } else {
    diskon = 0;
  }
  totalDiskon = totalBelanja * diskon;
  cout << "Diskon yang anda dapatkan adalah: " << totalDiskon << endl;
  cout << "Total belanja anda adalah: " << totalBelanja - totalDiskon << endl;
  return 0;
}
