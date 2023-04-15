/******************************************************************************

4) Receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) idade dessa pessoa;
b) quantos anos ela terá em 2050.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

int main()
{
    int anoDeNascimento, idadeHoje, anoAtual, idade2050;
    
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    printf("Digite seu ano de nascimento: ");
    scanf("%d", &anoDeNascimento);
    
    idadeHoje = anoAtual - anoDeNascimento;
    idade2050 = 2050 - anoDeNascimento;
    
    printf("Você tem %d anos.\nEm 2050 você terá %d anos.", idadeHoje, idade2050);
    
    return 0;
}
