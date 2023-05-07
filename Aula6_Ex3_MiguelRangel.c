/******************************************************************************

3) Um determinado material perde metade de sua massa a cada 30 segundos. Dada a
massa inicial informada pelo usuário, em gramas, fazer um programa em C que
calcule o tempo necessário para que essa massa se torne menor que 1 grama. O
programa em C deve escrever a massa inicial, a massa final e o tempo calculado
em horas, minutos e segundos.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float massaFinal, massaInicial;
    int decaimento = 0;
    int hora, minuto, segundo;
    
    printf ("Massa do material em gramas: ");
    scanf ("%f", &massaInicial);
    
    massaFinal = massaInicial;
    
    /* A solucao da equacao massaInicial * (0.5) ^ 1 < 1 resulta no paramentro 
    de parada do loop */
    for (int i = 0; i <= (-log (massaInicial) / log (0.5)); i++) 
    {
        // Conta quantas vezes a amostra teve a massa reduzida
        decaimento++; 
        massaFinal = massaFinal / 2;
    }
    
    // Calcula o tempo em segundos
    decaimento = decaimento * 30; 
    
    hora = decaimento / 3600;
    decaimento = decaimento % 3600;
    
    minuto = decaimento / 60;
    segundo = decaimento % 60;
    
    printf ("Massa inicial: %.2f g \nMassa final: %.3f g\n", massaInicial, massaFinal);
    printf ("Tempo para a amostra ter menos de 1 grama: %d horas, %d minutos e %d segundos\n", hora, minuto, segundo);
    
    return 0;
}

