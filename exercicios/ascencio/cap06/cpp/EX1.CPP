#include <stdio.h>

int main()
{ int num[9], i, j, cont;
	for (i=0;i<9;i++)
	{ printf("\nDigite o %d.o numero: ", i+1);
	  scanf("%d%*c", &num[i]);
	}
	for (i=0;i<9;i++)
	{   cont = 0;
		for (j=1;j<=num[i];j++)
		{ if (num[i] % j == 0)
			 cont++;
		}
		if (cont <= 2)
			 { printf("\nNumero primo: %d na posicao %d", num[i], i);
			 }
	 }
	 getchar();
	 return 0;
}
