/******************************************************************************
1) Leia dois vetores A e B (de tamanho 10 cada um).  Depois faça duas funções
que calcule:
- a soma dos elementos do vetor A com os do vetor B (respeitando as mesmas
posições) e escrever  o resultado em um vetor Soma.
- a subtração dos elementos do vetor A com os do vetor B (respeitando as mesmas
posições) e escrever  o resultado em um vetor Subtracao.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[10], b[10];
    int soma[10], subtracao[10];
    
    for (int i = 0; i < 10; i++)
    {
        printf("Entre com a[%d]: ", i);
        scanf("%d", &a[i]);
        printf("Entre com b[%d]: ", i);
        scanf("%d", &b[i]);
        
        soma[i] = a[i] + b[i];
        subtracao[i] = a[i] - b[i];
    }
    
    for(int i = 0; i < 10; i++)
    {
        printf("soma[%d] = %d  subtracao[%d] = %d\n", i, soma[i], i, subtracao[i]);
    }

    return 0;
}

