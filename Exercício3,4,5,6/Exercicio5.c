#include <stdio.h>

int main() {

  int a;
  int b;
  int c;

  printf("\nDigite um numero: ");
  scanf("%d", &a);
  printf("Digite um numero: ");
  scanf("%d", &b);
  
  if(a == b) {
    c = a + b;
    printf("\nOs numeros sao iguais. \nE o resultado da soma foi armazenada na variavel c %d", c);
  }else {
    c = a * b;
    printf("\nOs numeros nao sao iguais. \nE o resultado da multiplicacao foi atribuido a c %d", c);
  };

  return 0;
}

//  Faça um programa que leia dois valores inteiros A e B. 
// Se os valores forem iguais deverá ser calculada a soma dos dois valores, 
// caso contrário multiplicar A por B. Armazene o resultado em uma variável C.