#include <stdio.h>
void substituicao(int vet[])
{ int z;
	for (z=0;z<25;z++)
			{ 
                      if (vet[z] < 0) vet[z] = 0;
			}
}

int main()
{ int vetor[25], i;
	for (i=0;i<25;i++)
			{ printf("Digite o número da posiçã %d:  ",i);
			  scanf("%d%*c",&vetor[i]);
			}
	substituicao(vetor);
	printf("\nVetor alterado\n");
	for (i=0;i<25;i++)
			{ 
                      printf("%d    ",vetor[i]);
			}
	getchar();
	return 0;
}
