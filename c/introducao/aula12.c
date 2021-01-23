#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);

  do {
    printf("%d\n", a);
    a -= 2;
  } while(a > 0);

  return 0;
}