#include <stdio.h>

int main() {
  int   inteiro    = 1;
  float naoInteiro = 1.1;
  char  letra      = 'r';

  scanf("%d %f %c", &inteiro, &naoInteiro, &letra);                   // Recebendo do console 3 variaveis
  printf("int: %d\nfloat: %f\nchar: %c", inteiro, naoInteiro, letra); // Printando 3 variaveis
  return 0;
}