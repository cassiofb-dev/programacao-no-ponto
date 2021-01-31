#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "teste", str2[] = "texto";

  int compara = strcmp(str1, "teate");

  if(compara == 0) {
    printf("sao iguais\n");
  } else if(compara < 0) {
    printf("string da esquerda menor");
  } else {
    printf("string da direita menor");
  }

  strcat(str1, str2);

  printf("\n%s", str1);

  return 0;
}