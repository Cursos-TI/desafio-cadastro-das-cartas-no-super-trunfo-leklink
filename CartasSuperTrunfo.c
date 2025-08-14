#include <stdio.h>

int main() {
  int idade;
  float altura;
  char nome[50];

  printf("Digite sua idade: ");
  scanf("%d", &idade);  // Lê um inteiro e armazena em 'idade'

  printf("Digite sua altura: ");
  scanf("%f", &altura); // Lê um float e armazena em 'altura'

  printf("Digite seu nome: ");
  scanf("%s", nome);   // Lê uma string (até o primeiro espaço) e armazena em 'nome'

  printf("\nDados inseridos:\n");
  printf("Idade: %d\n", idade);
  printf("Altura: %.2f\n", altura);
  printf("Nome: %s\n", nome);

  return 0;
}