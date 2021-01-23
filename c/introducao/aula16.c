#include <stdio.h>

int main() {
  // Construindo a matriz
  //  [1][2]
  //  [3][4]
  int matriz[][2] = {
    {1,2},
    {3,4}
  };

  printf("%d", matriz[1][0]);

  return 0;
}