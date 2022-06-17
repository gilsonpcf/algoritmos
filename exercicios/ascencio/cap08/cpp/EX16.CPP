#include <stdio.h>
void ordena_todos(int a[], int b[], int c[])
{ int i, j, k, cont;
  k=0;
  for (i=0;i<10;i++)
    { cont = 0;
      while ((cont < k) && (a[i] < c[cont]))
				cont++;
			if (cont == k)
				 { c[k] = a[i];
					 k++;
				 }
			else
				 { for (j=k;j>cont;j--)
							 c[j] = c[j-1];
					 c[cont] = a[i];
					 k++;
				 }
		}
	for (i=0;i<10;i++)
		{ cont = 0;
			while ((cont < k) && (b[i] < c[cont]))
				cont++;
			if (cont == k)
				 { c[k] = b[i];
					 k++;
				 }
			else
				 { for (j=k;j>cont;j--)
							c[j] = c[j-1];
					 c[cont] = b[i];
					 k++;
				 }
		}
}
int main()
{ int x, vet1[10], vet2[10], vet3[20];
	for (x=0;x<10;x++)
		{ printf("Digite o %dº elemento de A: ",x+1);
		  scanf("%d%*c",&vet1[x]);
		}
	printf("\n\n");
	for (x=0;x<10;x++)
		{ printf("Digite o %dº elemento de B: ",x+1);
		  scanf("%d%*c",&vet2[x]);
		}
	ordena_todos(vet1,vet2,vet3);
	printf("\n\nVetor ordenado \n\n");
	for (x=0;x<20;x++)
		printf("%d   ",vet3[x]);
	getchar();
	return 0;
}
