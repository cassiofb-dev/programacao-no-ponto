#include <stdio.h>

int soma(int a, int b) {
  return a + b;
}

void printaInteiro(int a) {
  printf("%d\n", a);
}

void printaSoma(int a, int b) {
  printaInteiro(soma(a,b));
}

int main() {
  printaSoma(3,8);
  return 0;
}