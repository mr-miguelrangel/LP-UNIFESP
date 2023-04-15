/******************************************************************************

3) Leia um valor inteiro e apresente os resultados do quadrado, do cubo e da 
raiz quadrada do valor lido.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    int numero, quadrado, cubo;
    float raiz;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    quadrado = pow(numero, 2);
    cubo = pow(numero, 3);
    raiz = sqrt(numero);
    
    printf("%d ao quadrado é igual a %d.\n", numero, quadrado);
    printf("%d ao cubo é igual a %d.\n", numero, cubo);
    printf("A raíz quadrada de %d é igual a %f.\n", numero, raiz);

    return 0;
}
