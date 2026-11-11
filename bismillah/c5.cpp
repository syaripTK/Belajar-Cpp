// Macam macam output dalam C++
// printf
// fungsi ini memerlukan penentu format dalam bentuk %
// %d untuk integer, %f untuk float, %c untuk char, %s untuk string
#include <stdio.h>
// int main() {
//   char nama[] = "Belajar C++", grade = 'A';
//   float nilai = 98;
//   printf("%s mendapatkan nilai %f \n", nama, nilai);
//   printf("%s mendapatkan nilai %c", nama, grade);
//   return 0;
// }

// puts()
// fungsi ini tidak memerlukan penentu format, karena secara bawaan sudah
// diperuntukan untuk string ada juga putchar() yang diperuntukkan untuk char

int main() {
  char nama[] = "Syarip";
  puts("\t Nama anda adalah \"Baginda\"");
  puts(nama);
  return 0;
}
