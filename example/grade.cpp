#include <iostream>
using namespace std;

int main() {
  float nilai;
  char grade;
  cout << "Masukkan nilai anda: ";
  cin >> nilai;

  nilai >= 85   ? grade = 'A'
  : nilai >= 70 ? grade = 'B'
  : nilai >= 60 ? grade = 'C'
  : nilai >= 50 ? grade = 'D'
                : grade = 'E';
  cout << "Grade anda adalah: " << grade << endl;
  return 0;
}
