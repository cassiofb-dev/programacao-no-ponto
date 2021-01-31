#include <stdio.h>

// 0! = 1
// 1! = 1
// 2! = 2 * 1 = 2
// 3! = 3 * 2 * 1 = 6
// 4! = 4 * 3 * 2 * 1 = 24
// n! = n * (n - 1) * (n - 2) * ... * 1
// n! = n * (n - 1)!

int fatorial(int n) {
  if(n < 1) return 1;
  return n * fatorial(n - 1);
}

int main() {
  int a;
  scanf("%d", &a);

  printf("%d! = %d", a, fatorial(a));
  return 0;
}