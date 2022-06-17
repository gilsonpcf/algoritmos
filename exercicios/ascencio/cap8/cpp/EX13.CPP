#include <stdio.h>
void fatoriais(float a[], float b[])
{ int i, j;
	float f;
	for (i=0;i<10;i++)
		{ if ((a[i] == 0) || (a[i] == 1))
				 b[i] = 1;
			else
				 { b[i]=1;
					 for (j=1;j<=a[i];j++)
							 b[i] = b[i] * j;
				 }
		}
}
int main()
{ int x;
	float vet1[10], vet2[10];
	for (x=0;x<10;x++)
		{ 
            printf("Digite o %dª elemento de A: ",(x+1));
			scanf("%f%*c",&vet1[x]);
		}
	fatoriais(vet1,vet2);
	for (x=0;x<10;x++)
		{ 
          printf("\nO fatorial de %5.2f é %5.2f",vet1[x],vet2[x]);
		}
	getchar();
	return 0;
}
