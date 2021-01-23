#include <stdio.h>

// 1, 1, 2, 3, 5, 8, 13...
// F(n) = F(n-1) + F(n-2), F(0) = 1, F(1) = 1

int main() {
  int ultimoTermo;
  scanf("%d", &ultimoTermo);

  int sequenciaFibonacci[ultimoTermo];
  sequenciaFibonacci[0] = 1;
  sequenciaFibonacci[1] = 1;

  for(int i = 2; i < ultimoTermo; i++)
    sequenciaFibonacci[i] = sequenciaFibonacci[i-1] + sequenciaFibonacci[i-2];

  for(int i = 0; i < ultimoTermo; i++)
    printf("%d, ", sequenciaFibonacci[i]);

  return 0;
}