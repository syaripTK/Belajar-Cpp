#include <iostream>
using namespace std;

int main() {
  int pilihan;
  cout << "===PILIH HARI==" << endl;
  cout << "1. Senin" << endl;
  cout << "2. Selasa" << endl;
  cout << "3. Rabu" << endl;
  cout << "4. Kamis" << endl;
  cout << "5. Jum'at" << endl;
  cout << "5. Sabtu" << endl;
  cout << "5. Minggu" << endl;

  cout << "Masukkan pilihan hari favorit anda (1-7): ";

  cin >> pilihan;

  switch (pilihan) {
  case 1:
    cout << "Hari favorit anda adalah senin";
    break;
  case 2:
    cout << "Hari favorit anda adalah selasa";
    break;
  case 3:
    cout << "Hari favorit anda adalah rabu";
    break;
  case 4:
    cout << "Hari favorit anda adalah kamis";
    break;
  case 5:
    cout << "Hari favorit anda adalah jum'at";
    break;
  case 6:
    cout << "Hari favorit anda adalah sabtu";
    break;
  case 7:
    cout << "Hari favorit anda adalah minggu";
    break;
  default:
    cout << "Pilihan tidak tersedia";
  }
}

#include <iostream>
using namespace std;

int maul() {
  int pilihan;
  cout << "====MENU PILIHAN==" << endl;
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
