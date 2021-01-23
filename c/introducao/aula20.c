#include <stdio.h>

// Um numero eh primo qnd eh divisivel por 1 e ele mesmo
// Ou seja ele so tem 2 divisores

int main() {
  int limite;
  scanf("%d", &limite);

  int numeroDivisores = 1;

  for(int i = 2; i < limite; i++) {
    for(int j = 2; j <= i; j++) if(i % j == 0) numeroDivisores++;
    if(numeroDivisores == 2) printf("%d\n", i);
    numeroDivisores = 1;
  }

  return 0;
}