#include <iostream>
#include <string>
using namespace std;

int main() {
  string nama, prodi, nim;
  float ipk;
  double penghasilanOrtu;
  cout << "Masukkan nama anda: ";
  getline(cin, nama);
  cout << "Masukkan prodi anda: ";
  getline(cin, prodi);
  cout << "Masukkan NIM anda: ";
  getline(cin, nim);
  cout << "Masukkan IPK anda: ";
  cin >> ipk;
  cout << "Masukkan penghasilan orang tua anda: ";
  cin >> penghasilanOrtu;

  if (ipk >= 3.50 && penghasilanOrtu <= 5000000) {
    cout << nama << endl
         << nim << endl
         << prodi << endl
         << "Selamat, anda berhak mendapatkan beasiswa" << endl;
  } else {
    cout << nama << endl
         << nim << endl
         << prodi << endl
         << "Maaf, anda tidak berhak mendapatkan beasiswa" << endl;
  }
  return 0;
}
