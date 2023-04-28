/******************************************************************************

1) Leia um número inteiro que representa um código de DDD para discagem 
interurbana.Em seguida, informe a qual cidade o DDD pertence, considerando a
tabela abaixo. Se a entrada for qualquer outro DDD que não esteja presente na
tabela acima, o programa deverá informar: DDD não cadastrado! 
Obs: use o comando switch-case.

   DDD    Destino
   61     Brasilia
   71     Salvador
   11     Sao Paulo
   21     Rio de Janeiro
   32     Juiz de Fora
   19     Campinas
   27     Vitoria
   31     Belo Horizonte

*******************************************************************************/
#include <stdio.h>

int main()
{
    int ddd;
    
    printf("Digite um DDD: ");
    scanf("%d", &ddd);
    
    switch(ddd){
        case 61:
            printf("Brasilia");
        break;
        case 71:
            printf("Salvador");
        break;
        case 11:
            printf("Sao Paulo");
        break;
        case 21:
            printf("Rio de Janeiro");
        break;
        case 32:
            printf("Juiz de fora");
        break;
        case 19:
            printf("Campinas");
        break;    
        case 27:
            printf("Vitoria");
        break;
        case 31:
            printf("Belo Horizonte");
        break;
        default:
            printf("DDD nao cadastrado!");
        break;
    }
    

    return 0;
}

