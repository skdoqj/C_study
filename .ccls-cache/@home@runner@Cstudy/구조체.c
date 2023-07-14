#include <stdio.h>

int main() {

  struct person1 {
    char *name;
    int age;
  };

  struct person1 user1; //인스턴스 생성
  user1.name = "suwan";
  user1.age = 25;
  printf("%s, %d", user1.name, user1.age);

  //구조체 생성과 동시에 인스턴스 생성
  struct person2 {
    char *name;
    int age;
  } user2; //인스턴스 생성

  user2.name = "youmin";
  user2.age = 26;
  printf("%s, %d", user2.name, user2.age);

  //포인터 사용
  struct person3 {
    char *name;
    int age;
  };
  struct person3 *p; //인스턴스 생성
  p->name = "taesub";
  p->age = 2;
  printf("%s, %d", p->name, p->age);
}