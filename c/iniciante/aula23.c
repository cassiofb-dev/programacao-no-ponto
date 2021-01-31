#include <stdio.h>

// <tipo de retorno> <nome da função>(<variaveis>) {
//
// };

int soma(int c, int d) {
  return c + d;
}

void helloWorld() {
  printf("Hello World!\n");
}

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d + %d = %d\n", a, b, soma(a,b));
  helloWorld();
  return 0;
}