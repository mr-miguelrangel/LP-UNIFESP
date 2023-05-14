/******************************************************************************

3) Dada uma sequC*ncia de n nC:meros inteiros, imprimi-los sem repetiC'C5es.
 Exemplo, para n = 10 e a sequencia 1, 3, 5, 1, 10, 1, 5, 8, 2, 10 o programa
 deve imprimir a saC-da 1, 3, 5, 10, 8, 2

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int a[10], imprimir[10];
  int igual;

  for (int i = 0; i < 10; i++)
    {
      printf ("Entre com a[%d]: ", a[i]);
      scanf ("%d", &a[i]);
    }

  for (int i = 0; i < 10; i++)
    {
      igual = 0;

      for (int j = 0; j < 10; j++)
	{
	  if (a[i] == imprimir[j])
	    {
	      igual++;
	    }
	}

      if (igual == 0)
	{
	  imprimir[i] = a[i];
	}

      if (imprimir[i] != 0)
	{
	  printf ("%d ", imprimir[i]);
	}
    }



  return 0;
}
