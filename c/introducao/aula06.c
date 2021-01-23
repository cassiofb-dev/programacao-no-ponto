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
  float a, b; // Declarando duas variáveis
  scanf("%f %f", &a, &b);
  printf("a + b = %f\n", a + b);  // Calcula e printa a soma
  printf("a - b = %f\n", a - b);  // Calcula e printa a diferença
  printf("a * b = %f\n", a * b);  // Calcula e printa a multiplicação
  printf("a / b = %f\n", a / b);  // Calcula e printa a divisão
  return 0;
}