// Primeira aula de C! Seja bem vindo!
// Para comentar em C utilizamos o "//"

// Caso tenha alguma dúvida do ambiente
// Ver a playlist de configuração do ambiente

/*
  Também podemos comentar múltiplas
  linhas com "/*" para abrir o comentário
  e "*‎/" para fechar.
*/

// Nessa aula iremos fazer um programa que
// printa "Hello World" no console

#include <stdio.h>          // Importando as informações necessárias
                            // No caso a função printf() para printar no console

int main() {                // Função a ser executada primeiro (padrão)
  printf("Hello World!");   // Printando Hello World no console
  return 0;                 // Retornando 0 e terminando o programa
}

// Compilando o programa no terminal
// gcc <nome do arquivo do programa> -o <nome do executavel>
// No nosso caso
// gcc .\aula01.c -o aula01