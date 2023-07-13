#include <stdio.h>

int main_loop() {
  // for 정해진 횟수만큼 반복
  int j;
  int sum = 0;
  for (j = 2; j <= 70; j += 5) {
    sum = sum + 1;
    printf("%d %d\n", j, sum);
  }
  printf("%d", sum);

  // while 조건이 만족하는 동안 반복
  int i = 0;
  while (i < 3) {
    printf("i = %d\n", i);
    i++;
  }
  printf("sum = %d\n", i);
  // do ~ while 무조건 한번 수행 후 조건이 만족하는 동안 반복
  int k = 3;
  do {
    printf("i = %d\n", i);
    i++;
  } while (i < 3);
  printf("sum = %d\n", i);

  // continue 더이상 아래 문장을 실행하지 않고, 반복문의 처음으로 돌아감
  for (i = 0; i < 3; i++) {
    if (i == 1)
      continue;
    sum++;
  }

  // break 반복문을 빠져나감
  for (i = 0; i < 3; i++) {
    if (i == 1)
      break;
    ;
    sum++;
  }

  // 다중 반복문
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("i:%d, j:%d", i, j);
    }
  }

  return 0;
}