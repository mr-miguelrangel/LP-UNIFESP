/******************************************************************************

1) Faça um programa que lê o valor da cotação do dólar em um determinado dia e
em seguida lê uma quantia em dólares. Realize a conversão para reais.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

int main()
{
    float dolar, dinheiro, real;
    
    printf("Cotação do dólar hoje: ");
    scanf("%f", &dolar);
    printf("Quantia em dólares a ser convertida: ");
    scanf("%f", &dinheiro);
    
    real = dolar * dinheiro;
    
    printf("Valor em Reais: R$ %.2f", real);

    return 0;
}
