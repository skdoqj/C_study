#include <stdio.h>

int main() {
  int a = 10;
  int *b = &a;

  // printf(" a = %d\n &a = %d\n", a, &a);
  // printf(" b = %d\n b = %d\n", b, *b);

  // int A = 10, B;
  // int *C = &B;
  // B = A--;
  // B += 20;
  // printf("%d", *C);

  int A[5];
  int *B = A;
  A[2] = 10;
  B[2] = 20;
  printf("%d", A[2]); // 20

  return 0;
}