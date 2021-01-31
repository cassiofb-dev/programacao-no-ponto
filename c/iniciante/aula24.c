#include <stdio.h>

int global = 5;

void teste() {
  int local = 5; static int localEstatica = 5;
  local++; global++; localEstatica++;
  local *= 2; global *= 2; localEstatica *= 2;

  printf("local=%d | global=%d | localEstatica=%d\n", local, global, localEstatica);
}

int main() {
  global++;
  teste();
  teste();
  teste();
  return 0;
}