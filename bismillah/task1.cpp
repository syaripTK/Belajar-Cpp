#include <stdio.h>

int main() {
  int nilai;
  char grade;

  printf("Masukkan nilai: ");
  scanf("%d", &nilai);

  if (nilai >= 85) {
    grade = 'A';
  } else if (nilai < 85 && nilai >= 70) {
    grade = 'B';
  } else if (nilai < 70 && nilai >= 55) {
    grade = 'C';
  } else {
    grade = 'D';
  }

  printf("Grade: %c", grade);
  return 0;
}
