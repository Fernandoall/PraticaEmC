#include <stdio.h>

int main() {

  char nome[15];
  float nota1, nota2, nota3;
  float media;
  float soma;

  printf("\nDigite seu nome: ");
  scanf("%s", &nome);
  printf("\nDigite sua primeira nota: ");
  scanf("%f", &nota1);
  printf("\nDigite sua segunda nota: ");
  scanf("%f", &nota2);
  printf("\nDigite sua terceira nota: ");
  scanf("%f", &nota3);
  
  soma = nota1 + nota2 + nota3;
  media = (nota1 + nota2 + nota3) / 3;

  if(media >= 6.0) {
    printf("%s voce foi aprovado! sua media foi: %.1f!", nome, media);
  }if(media < 6.0) {
    printf("%s voce pode realizar a prova de recuperacao, sua media foi: %.1f!", nome, media);
  }

  return 0;
};