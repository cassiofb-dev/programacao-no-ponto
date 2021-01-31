#include <stdio.h>

int misterio(int a) {
  if(a < 1) return 1;
  return misterio(a - 1) * 2;
}

// misterio(n) = misterio(n-1)*2, misterio(0) = 1
// misterio(1) = misterio(0)*2 = 1*2 = 2;

int main() {
  printf("%d", misterio(10));
  return 0;
}