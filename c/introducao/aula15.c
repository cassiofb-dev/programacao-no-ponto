#include <stdio.h>

int main() {
  //  Inicia um array
  int array[] = {1,2,3,7,6,4,0,0,0,7,4,2,1,34,4,6};

  for(int i = 0; i < 16; i += 2) {
    printf("%d, ", array[i]);
  }

  return 0;
}