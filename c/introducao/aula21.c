#include <stdio.h>

// Um numero eh primo qnd eh divisivel por 1 e ele mesmo
// Ou seja ele so tem 2 divisores

// Utilizando o Crivo de Eratóstenes
// [1, 1, 1, 1, 1...]
// [0, 1, 1, 0, 1...]

int main() {
  int limite;
  scanf("%d", &limite);

  int listaPrimos[limite];

  for(int i = 2; i < limite; i++) listaPrimos[i] = 1;

  listaPrimos[0] = listaPrimos[1] = 0;

  for(int i = 2; i < limite; i++) {
    int multiplo = i;

    while(multiplo + i < limite) {
      multiplo += i;
      listaPrimos[multiplo] = 0;
    }

  }

  for(int i = 0; i < limite; i++)
    if(listaPrimos[i]) printf("%d\n", i);

  return 0;
}