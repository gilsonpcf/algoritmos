#include <stdio.h>
#include <math.h>
int main()
{   int expoente, i, x, j, fim, num_termos, den, denominador;
    float s, fat;
  	printf("Digite o n�mero de termos da sequ�ncia: ");
	scanf("%d%*c",&num_termos);
	printf("Digite o valor de X: ");
	scanf("%d%*c",&x);
	s = 0;
	denominador = 1;
	for (i=1;i<=num_termos;i++)
		{
			fim = denominador;
			fat = 1;
			for (j=1;j<=fim;j++)
				fat = fat * j;
			expoente = i+ 1;
			if (expoente % 2 == 0)
			 s = s - (pow(x,expoente)/fat);
			else
			 s = s + (pow(x,expoente)/fat);
			if (denominador == 4)
			 den = -1;
			if (denominador == 1)
			 den = 1;
			if (den == 1)
			 denominador = denominador + 1;
			else
			 denominador = denominador - 1;
		}
	printf("\nValor de S: %5.2f",s);
	getchar();
	return 0;
}
