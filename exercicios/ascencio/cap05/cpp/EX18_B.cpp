#include <stdio.h>
#include <math.h>
int main()
{ float num, quad, cubo, raiz;
  do
  {
  printf("Digite um n�mero: ");
  scanf("%f%*c",&num);
  printf("\nValor");
  printf("\tQuadrado");
  printf("\tCubo");
  printf("\t\tRaiz");
  if (num > 0)
  { 
       quad = pow(num,2);
       cubo = pow (num,3);
       raiz = sqrt(num);
       printf("\n%5.2f",num);
	   printf("\t%5.2f",quad);
       printf("\t\t%5.2f",cubo);
       printf("\t\t%5.2f",raiz);
	   printf("\n\nDigite um n�mero ");
   }
  }
  while (num > 0);
    return 0;
}
