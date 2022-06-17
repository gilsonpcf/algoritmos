#include <stdio.h>
int primos(int x, int y);
int main()
{ int x,y, soma;
	printf("Digite o valor de x ");
	scanf("%d%*c",&x);
	printf("Digite o valor de y ");
	scanf("%d%*c",&y);

	while (x != y)
	 {   soma = primos(x, y);
		 printf("\n\nSoma dos números primos entre %d e %d (inclusive) = %d \n\n",x,y,soma);
      	 printf("Digite o valor de x ");
         scanf("%d%*c",&x);
         printf("Digite o valor de y ");
         scanf("%d%*c",&y);
	 }
}
int primos(int x, int y)
{ int i, j, r, cont, somatorio;
	somatorio = 0;
	for (i=x; i<=y;i++)
			{ cont = 0;
				for (j=1;j<=i;j++)
						{ r = i % j;
							if (r == 0)
								 cont = cont + 1;
						}
				if (cont <= 2)
					 somatorio = somatorio + i;
			}
	 return somatorio;
}
