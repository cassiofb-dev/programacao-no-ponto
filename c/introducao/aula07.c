#include <stdio.h>

// | Operador |             Utilidade             |
// |:--------:|:---------------------------------:|
// |     =    |             Atribuição            |
// |     +    |                Soma               |
// |     -    |             Subtração             |
// |     /    |              Divisão              |
// |     *    |           Multiplicação           |
// |     %    | Modulo (obtém o resto da divisão) |

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("O resto de a por b eh: %d\n", a % b); // Calcula e printa
                                                // resto de a por b
  return 0;
}