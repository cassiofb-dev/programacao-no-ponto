#include <stdio.h>
#include <math.h>

int main() {
  int limite;
  scanf("%d", &limite);

  float piSobreQuatro = 0;

  for(int n = 0; n < limite; n++) {
    piSobreQuatro += pow(-1,n)/(2*n + 1);
    printf("pi = %f\n", piSobreQuatro * 4);
  }
  
  return 0;
}