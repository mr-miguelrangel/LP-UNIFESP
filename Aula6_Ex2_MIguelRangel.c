/*
2) Escreva um programa que pergunta um número ao usuário, e mostra sua tabuada completa (de 1 até 10).
*/

#include <stdio.h>

int main()
{
  int numero, produto;

  printf ("Digite um numero inteiro: ");
  scanf ("%d", &numero);
  
  for (int i = 0; i < 10; i++)
  {
    produto = (i + 1) * numero;
    printf("%d x %d = %d\n", (i + 1), numero, produto);    
  }
  
  return 0;
}