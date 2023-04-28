/******************************************************************************

2) Faça um programa que encontre as raízes reais de uma equação do segundo grau
na forma: ax2 + bx + c = 0. Implemente o cálculo das raízes como uma função e
considere os casos em que delta é igual a zero, maior que zero e menor que zero.
x = (-b +- raiz(Delta))/2*a
Delta = b^2 - 4*a*c

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    double x1, x2, a, b, c, delta;
    
    printf("a = ");
    scanf("%lf", &a);

    printf("b = ");
    scanf("%lf", &b);
    
    printf("c = ");
    scanf("%lf", &c);
    
    delta = pow(b, 2) - 4*a*c;
    
    if(delta<0){
        printf("Nao existe x real que solucione essa equação. Pois delta é menor que zero");
        return 0;
    }
    else if(delta == 0){
        x1 = (-b + sqrt(delta))/ 2*a;
        printf("Essa equação tem duas raizes iguais.\nElas sao iguais a %.2lf", x1);
    }
    else{
        x1 = (-b + sqrt(delta))/ 2*a;
        x2 = (-b - sqrt(delta))/ 2*a;
        printf("Essa equação tem duas raizes distintas.\nElas sao iguais a %.2lf e %.2lf", x1, x2);
    }
    
    return 0;
}

