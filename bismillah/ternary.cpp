#include <iostream>
using namespace std;

int main() {
  string nama;
  int nilai;
  char grade;
  cout << "Masukkan nama: ";
  cin >> nama;
  cout << "Masukkan nilai :";
  cin >> nilai;
  grade = nilai >= 85 ? 'A' : nilai >= 70 ? 'B' : nilai >= 55 ? 'C' : 'D';
  cout << "Hi " << nama << ", " << "Grade anda adalah: " << grade << endl;
  return 0;
}
