#include <stdio.h>

int main() {
  char texto[100] = "ab";
  char input[100];

  scanf("%[^\n]%*c", input);

  printf("%s\ninput=%s", texto, input);
  return 0;
}