#include <stdio.h>

void printMatriz(int matriz[][1], int linhas, int colunas) {
  for(int i = 0; i < linhas; i++) {
    for(int j = 0; j < colunas; j++) printf("%d, ", matriz[i][j]);
    printf("\n");
  }
}

int main() {
  int matriz[4][1] = {0};

  printMatriz(matriz, 4, 1);

  return 0;
}