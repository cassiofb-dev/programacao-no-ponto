#include <stdio.h>

// 1, 1, 2, 3, 5, 8, 13...
// F(n) = F(n-1) + F(n-2), F(0) = 1, F(1) = 1

int fibonacci(int n) {
  if(n < 2) return 1;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  int a;
  scanf("%d", &a);
  printf("%d", fibonacci(a));
  return 0;
}