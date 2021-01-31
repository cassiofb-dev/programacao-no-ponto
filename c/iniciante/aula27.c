#include <stdio.h>

void printArray(int *array, int size) {
  for(int i = 0; i < size; i++) {
    printf("%d, ", array[i]);
  }
}

int main() {
  int array[] = {1,2,3,42,2,14};
  printArray(array, 6);
  return 0;
}