#include <stdio.h>

int main() {
  FILE *arquivo = fopen("aula31.txt", "w");       // Abre o arquivo para escrita
  char texto[] = "testando arquivo\nnova linha";

  fprintf(arquivo, texto);                        // Escreve no arquivo

  fclose(arquivo);                                // Fecha o arquivo
  arquivo = fopen("aula31.txt", "r");             // Abre o arquivo para leitura

  char linha[100];
  fgets(linha, 100, arquivo);                     // Pegando uma linha
  printf("%s", linha);                            // Printando a linha

  fclose(arquivo);                                // Fechando o arquivo
  return 0;
}