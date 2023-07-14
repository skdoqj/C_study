#include <stdio.h>

int main_2() {
  int a[3][2] = {{1, 2}, {3, 4}, {5, 6}};

  printf("%d\n", a);
  printf("%d\n", *a);
  printf("%d\n", **a);
  printf("%d\n", **a + 2);
  return 0;
}