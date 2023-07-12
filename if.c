#include <stdio.h>

int main_if() {

  int a = 0;
  switch (a) {
  case 0:
    printf("%d\n", 1);
    break; // break가 없으면 아래도 계속 실행된다
  default:
    printf("%d\n", 2);
    break;
  }

  return 0;
}