#include <stdio.h>

int main()
{   int primos[10], i, qtde, num, divisores;
	num = 101;
	qtde = 0;
	do
	{   divisores = 0;
		for (i=1;i<=num;i++)
		{ if (num%i == 0)
			 divisores++;
		}
		if (divisores <= 2)
		{ primos[qtde] = num;
		  qtde++;
		}
		num++;
	} while (qtde < 10);

	printf("Numeros primos gerados");
	for (i=0;i<10;i++)
	{ printf("\n%d", primos[i]);
	}
	getchar();
	return 0;
}
