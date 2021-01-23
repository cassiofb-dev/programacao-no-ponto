// |-------------------------------|
// |    OPERADORES RELACIONAIS     |
// |-------------------------------|
// | Operador |      Utilidade     |
// |:--------:|:------------------:|
// |    ==    | Verifica igualdade |
// |    !=    | Verifica diferença |
// |     >    |      Maior que     |
// |     <    |      Menor que     |
// |    >=    |   Maior ou igual   |
// |    <=    |   Menor ou igual   |
// |-------------------------------|

#include <stdio.h>

int main() {
  int a, b, idade;
  scanf("%d %d %d", &a, &b, &idade);
  printf("%d == %d: %d\n", a, b, a == b); //  Verifica a = b
  printf("%d != %d: %d\n", a, b, a != b); //  Verifica a diferente b
  printf("%d > %d: %d\n", a, b, a > b);   //  Verifica a maior que b
  printf("%d < %d: %d\n", a, b, a < b);   //  Verifica a menor que b
  printf("%d >= %d: %d\n", a, b, a >= b); //  Verifica a maior igual que b
  printf("%d <= %d: %d\n", a, b, a <= b); //  Verifica a menor igual que b

  if(idade >= 18) { //  Executa se idade eh maior igual que 18
    printf("A idade eh maior que 18, pode ser preso.\n");
  }
  
  return 0;
}