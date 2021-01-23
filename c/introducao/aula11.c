#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);

  switch(a) {
    case 1:
      printf("a = 1");
      break;
    case 2:
      printf("a = 2");
      break;
    case 3:
      printf("a = 3");
      break;
    case 4:
      printf("a = 4");
      break;
    default:
      printf("caso nao definido");
      break;
  }

  return 0;
}