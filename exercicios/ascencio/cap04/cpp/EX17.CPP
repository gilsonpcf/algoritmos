#include <stdio.h>
// Neste programa ser� usada a fun�� sqrt. Sendo assim,
// faz-se necess�ria a biblioteca math.h
#include <math.h>
int main()
{ float a, b, c, delta, x1, x2;
  //Mostra mensagem solicitando o valor de a
  printf("Digite o valor de a: ");
  //Recebe o valor de a
  scanf("%f%*c",&a);
  //Mostra mensagem solicitando o valor de b
  printf("Digite o valor de b: ");
  //Recebe o valor de b
  scanf("%f%*c",&b);
  //Mostra mensagem solicitando o valor de c
  printf("Digite o valor de c: ");
  //Recebe o valor de c
  scanf("%f%*c",&c);
  // Calcula as ra�zes da equa��o
  if (a == 0)
	 printf("\nEstes valores n�o formam uma equa��o de segundo grau ");
	else
		 {
 			 delta = (b * b) - ( 4 * a * c);
			 if (delta < 0)
				printf("\nN�o existe raiz real ");
			 if (delta == 0)
				{
					printf("\nExiste uma raiz real: ");
					x1 = (- b) / (2 * a);
					printf("%5.2f",x1);
				}
			 if (delta > 0)
				{
					printf("\nExistem duas ra�zes reais");
					x1 = ( - b + sqrt(delta)) / ( 2 * a);
					x2 = ( - b - sqrt(delta)) / ( 2 * a);
					printf("\nPrimeira raiz = %5.2f",x1);
					printf("\nSegunda raiz = %5.2f",x2);
				}
		}
 //P�ra o programa a espera de um ENTER
 getchar();
 return 0;
}
