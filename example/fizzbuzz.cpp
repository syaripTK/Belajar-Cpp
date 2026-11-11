#include <iostream>
using namespace std;

int main() {
  int limit;
  cout << "Masukkan limit: ";
  cin >> limit;

  if (limit == 0) {
    cout << "Error: Angka tidak valid";
  } else {
    for (int i = 1; i <= limit; i++) {
      if (i % 3 == 0 && i % 5 == 0)
        cout << "FizzBuzz" << endl;
      if (i % 3 == 0)
        cout << "Fizz" << endl;
      if (i % 5 == 0)
        cout << "Buzz" << endl;
      cout << i << endl;
    }
  }
  return 0;
}
