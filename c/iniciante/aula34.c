#include <stdio.h>

// A V I A O

int ehPalindromo(char *str, int size) {
  for(int i = 0; i < size / 2; i++)
    if(str[i] != str[size - i - 1]) return 0;
  return 1;
}

int main() {
  char str[] = "socorrammesubinoonibusemmarrocos";

  if(ehPalindromo(str, 32)) {
    printf("eh palindromo");
  } else {
    printf("nao eh palindromo");
  }

  return 0;
}