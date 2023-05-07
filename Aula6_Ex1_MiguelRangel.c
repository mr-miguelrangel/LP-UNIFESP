/*
1) Suponha que dois jogadores irão fazer a seguinte disputa:
Jogar uma moeda 10 vezes.

Quando der cara o jogador1 faz um ponto.
Quando der coroa o jogador2 faz um ponto.

Faça um programa que simule 10 jogadas com a função rand(), considere que 0 é cara e 1 é coroa.
No final indique o jogador vencedor. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) 
{
  int jogador1 = 0, jogador2 = 0,i = 0, moeda;
  srand(time(NULL));

  do
  {
    moeda = rand() % 2;
    
    // Se moeda for 1 (coroa) o jogador 2 pontua
    if(moeda) 
    {
      jogador2++;
      printf("Jogada %d Coroa!\nJogador 1: %d  Jogador 2: %d\n\n", i + 1, jogador1, jogador2);
    }
    else
    {
      jogador1++;
      printf("Jogada %d Cara!\nJogador 1: %d  Jogador 2: %d\n\n", i + 1, jogador1, jogador2);;  
    }
    i++;  
  } 
  while(i < 10);

  if (jogador1 > jogador2)
  {
    printf("Jogador 1 venceu!"); 
  }
  else if (jogador2 > jogador1)
  {
    printf("Jogador 2 venceu!");
  }
  else
  {
    printf("Empate!");
  }
  
  return 0;
}
