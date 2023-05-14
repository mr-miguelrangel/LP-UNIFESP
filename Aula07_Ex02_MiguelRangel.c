/******************************************************************************

2) Faça um algoritmo para ler e armazenar em um vetor a temperatura de todos os
dias da semana. Calcule:
- Menor temperatura da semana
- Maior temperatura da semana
- Temperatura média semanal

*******************************************************************************/
#include <stdio.h>

int main()
{
    float temperatura[7];
    float menor = 1000, maior = -1000, media = 0;
    
    for (int i = 0; i < 7; i++)
    {
        printf("Entre a a temperatura no dia %d: ", i + 1);
        scanf("%f", &temperatura[i]);
        
        if (temperatura[i] < menor)
        {
            menor = temperatura[i];
        }
        else if (temperatura[i] > maior)
        {
            maior = temperatura[i];
        }
        
        media += temperatura[i]; // media = media + temperatura[i]
    }
    
    media = media / 7;
    
    printf ("Minima: %.1f ºC \nMaxima: %.1f ºC \nMedia: %.1f ºC", menor, maior, media);

    return 0;
}

