#include <stdio.h>

int main() {
  int idade;
  scanf("%d", &idade);

  if(idade >= 18) {
    printf("parabens vc eh um adulto.\n");
  } else if (idade > -50) {
    printf("como assim?! vc nem nasceu ainda!\n");
  } else if (idade < -50) {
    printf("como assim?! vc tem menos de menos 50 anos!\n");
  } else {
    printf("que pena, vc ainda n eh um adulto.\n");
  }

  return 0;
}