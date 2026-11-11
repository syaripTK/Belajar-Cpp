#include <iostream>
using namespace std;

int main() {
  int pilihan;
  cout << "====MWNU PILIHAN==" << endl;
  cout << "1. Air Mineral" << endl;
  cout << "2. Es Teh" << endl;
  cout << "3. Es Jeruk" << endl;
  cout << "4. Kopi" << endl;
  cout << "5. Susu" << endl;

  cout << "Pilih menu minuman (1-5): ";

  cin >> pilihan;

  switch (pilihan) {
  case 1:
    cout << "Pilihan anda adalah air mineral";
    break;
  case 2:
    cout << "Pilihan anda adalah es teh";
    break;
  case 3:
    cout << "Pilihan anda adalah jus jeruk";
    break;
  case 4:
    cout << "Pilihan anda adalah kopi";
    break;
  case 5:
    cout << "Pilihan anda adalah susu";
    break;
  default:
    cout << "Pilihan tidak tersedia";
  }
}
