#include <stdio.h>

// 0! = 1
// 1! = 1
// 2! = 2 * 1 = 2
// 3! = 3 * 2 * 1 = 6
// 4! = 4 * 3 * 2 * 1 = 24
// n! = n * (n - 1) * (n - 2) * ... * 1

int main() {
  int n;
  scanf("%d", &n);

  int resultado = 1;

  for(int i = n; i > 0; i--) resultado *= i;

  printf("%d! = %d\n", n, resultado);

  return 0;
}