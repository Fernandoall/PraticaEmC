#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese"); //Definindo o idioma do sistema para português

  int a;
  int b;
  int c;

  printf("\nDigite um numero para a variavel a: ");
  scanf("%d", &a);
  printf("Digite um numero para a variavel b: ");
  scanf("%d", &b);
  printf("Digite um numero para a variavel c: ");
  scanf("%d", &c);

 if(a + b < c) {
  printf("O resultado da soma da variavel a: %d e b: %d e menor se comparado ao valor da variavel c: %d\n", a, b, c);
 }if(a + b > c) {
  printf("O resultado da soma das variaveis a: %d e b: %d e maior se comparado ao valor de variavel c: %d\n", a, b, c);
 }else {
  printf("A soma das variaveis a: %d e b %d e igual ou equivale ao valor da variavel c. %d\n", a, b, c);
 }

  return 0;
}