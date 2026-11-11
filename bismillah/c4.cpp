// Globag Variable

#include <iostream>
#include <string>
using namespace std;

string nama = "Global Variabel: Syarip";

int main() {
  string nama = "Lokal Variable: Ahmad";
  cout << nama << endl;
  cout << ::nama << endl;
  return 0;
}
