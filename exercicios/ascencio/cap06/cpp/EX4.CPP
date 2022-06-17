#include <stdio.h>

int main()
{   int num[8], pos[8], neg[8], cont, cont_n, cont_p, i;
	cont_n = 0;
	cont_p = 0;
	for (i=0;i<8;i++)
		{   printf("Digite o %d.o numero: ", i+1);
			scanf("%d%*c", &num[i]);
			if (num[i] >= 0)
				{ pos[cont_p] = num[i];
				  cont_p++;
				}
			else
				{ neg[cont_n] = num[i];
				  cont_n++;
				}
		}
	if (cont_n == 0)
	   printf("\nVetor de negativos vazio");
	else
		 { printf("\nNumeros negativos ");
			 for (i=0;i<cont_n;i++)
				 printf("\n %d", neg[i]);
		 }
	if (cont_p == 0)
		 printf("\nVetor de positivos vazio");
	else
		 { printf("\nNumeros positivos ");
		   for (i=0;i<cont_p;i++)
			   printf("\n%d", pos[i]);
		 }
	getchar();
	return 0;
}
