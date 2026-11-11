#include <iostream>
using namespace std;

int main() {
  int batas, kelipatan;
  cout << "Masukkan batas angka: ";
  cin >> batas;
  cout << "Masukkan kelipatan angka yang diharapkan: ";
  cin >> kelipatan;
  for (int i = 1; i <= batas; i++) {
    if (i % kelipatan == 0) {
      cout << i << " ";
    }
  }
  cout << endl;
  return 0;
}
