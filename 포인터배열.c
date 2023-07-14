#include <stdio.h>

int main_pArr() {
  char *c[] = {"aaa", "bbb"};
  printf("%s\n", *(c + 1));

  return 0;
}