/******************************************************************************

2) Ler dois valores para as variáveis A e B e efetue a troca dos valores de
forma que a variável A passe a possuir o valor da variável B e a variável B 
passe a possuir o valor da variável A. Apresente os valores trocados.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int A, B, vtemporario;
    
    printf("Digite um número inteiro para 'A': ");
    scanf("%d", &A);
        printf("Digite um número inteiro para 'B': ");
    scanf("%d", &B);
    
    printf("A = %d e B = %d \n", A, B);
    
    vtemporario = A;
    A = B;
    B = vtemporario;
    
    printf("Agora...\nA = %d e B = %d", A, B);

    return 0;
}
