#include <stdio.h>
void uniao(int a[], int b[], int u[])
{ int i, j, k, cont;
  for (i=0;i<20;i++)
      u[i] = -1;
  k=0;
  for (i=0;i<10;i++)
    { cont = 0;
      while ((cont < k) && (a[i] != u[cont]))
				 cont++;
			if (cont == k)
				 { u[k] = a[i];
					 k++;
				 }
		}
	for (i=0;i<10;i++)
		{ cont = 0;
			while ((cont < k) && (b[i] != u[cont]))
				 cont++;
			if (cont == k)
				 { u[k] = b[i];
					 k++;
				 }
		}
}
int main()
{ int x, vet1[10], vet2[10], vet3[20];
	for (x=0;x<10;x++)
		{ do
			 { printf("Digite o %dº elemento de A: ",(x+1));
				 scanf("%d%*c",&vet1[x]);
			 } while (vet1[x] < 0);
		}
	printf("\n\n");
	for (x=0;x<10;x++)
		{ do
			 { printf("Digite o %dº elemento de B: ",(x+1));;
			   scanf("%d%*c",&vet2[x]);
			 } while (vet2[x] < 0);
		}
	uniao(vet1,vet2,vet3);
	x=0;
	while ((x<20) && (vet3[x] != -1))
		{ 
            printf("\n %d",vet3[x]);
			x++;
		}
	getchar();
	return 0;
}
