#include <iostream>
using namespace std;

int main() {
  string h1, h2, h3, h4, h5;
  h1 = "Kucing";
  h2 = "Anjing";
  h3 = "Ubur-ubur";
  h4 = "Beruang";
  h5 = "Musang";

  cout << "=======================================" << endl;
  cout << "Menampilkan Nama Hewan Sebelum Ditukar" << endl;
  cout << "=======================================" << endl;
  cout << "Hewan 1: " << h1 << endl;
  cout << "Hewan 2: " << h2 << endl;
  cout << "Hewan 3: " << h3 << endl;
  cout << "Hewan 4: " << h4 << endl;
  cout << "Hewan 5: " << h5 << endl;

  string temp;
  temp = h1;
  h1 = h2;
  h2 = temp;
  temp = h3;
  h3 = h4;
  h4 = temp;
  temp = h5;
  h5 = h1;
  h1 = temp;

  cout << "=======================================" << endl;
  cout << "Menampilkan Nama Hewan Setelah Ditukar" << endl;
  cout << "=======================================" << endl;
  cout << "Hewan 1: " << h1 << endl;
  cout << "Hewan 2: " << h2 << endl;
  cout << "Hewan 3: " << h3 << endl;
  cout << "Hewan 4: " << h4 << endl;
  cout << "Hewan 5: " << h5 << endl;
  cout << "=======================================" << endl;

  return 0;
}
