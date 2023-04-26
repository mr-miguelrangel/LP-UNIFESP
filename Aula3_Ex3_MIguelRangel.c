/******************************************************************************

A professora Lilian usa a seguinte avaliação: 
M1: é a média de duas provas (P1+P2/2);
M2: é a média de três trabalhos (T1+T2+T3/3);
M3: é a média de 30 exercícios (M3).

Leia seis números (P1, P2, T1, T2, T3, M3) correspondente às notas de um aluno.
Calcule as médias M1 e M2 e a NOTA FINAL com pesos 60%, 30% e 10%, respectivamente.
Informe a nota final ao aluno.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float p1, p2, t1, t2, t3, m1, m2, m3, notaFinal;
    
    
    printf("P1: ");
    scanf("%f", &p1);   

    printf("P2: ");
    scanf("%f", &p2);   
    
    printf("T1: ");
    scanf("%f", &t1);

    printf("T2: ");
    scanf("%f", &t2);
    
    printf("T3: ");
    scanf("%f", &t3);
    
    printf("M3: ");
    scanf("%f", &m3);
    
    m1 = (p1 + p2) / 2;
    m2 = (t1 + t2 + t3) / 3;
    notaFinal = 0.6*m1 + 0.3*m2 + 0.1*m3;
    
    printf("Nota final: %.2f", notaFinal);
    
    return 0;
}
