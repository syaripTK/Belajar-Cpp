#include <iostream>
using namespace std;

int main() {
  int a, b = 10, hasil;

  cout << "Masukan nilai a: ";
  cin >> a;
  a = a + 1;
  hasil = a - b;
  cout << "Hasil dari a - b adalah: " << hasil << endl;
  return 0;
}
