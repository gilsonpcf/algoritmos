#include <stdio.h>
#include <ctype.h>
void leitura(char sexo[], char olhos[], char cabelos[], int idade[])
{ int x;
	for (x=0;x<5;x++)
		{ printf("\nDados da %dª a pessoa\n\n",x+1);
			do {
					 printf("Digite o sexo (M ou F) ");
					 scanf("%c%*c",&sexo[x]);
					 sexo[x] = toupper(sexo[x]);
			 } while ((sexo[x] != 'F') && (sexo[x] != 'M'));
			do {
				 printf("Digite a cor dos olhos (C-castanhos ou A-azuis) ");
				 scanf("%c%*c",&olhos[x]);
				 olhos[x] = toupper(olhos[x]);
			 } while ((olhos[x] != 'C') && (olhos[x] != 'A'));
			do {
				 printf("Digite a cor dos cabelos (C-castanhos, L-louros ou P-pretos) ");
				 scanf("%c%*c",&cabelos[x]);
				 cabelos[x] = toupper(cabelos[x]);
			 } while ((cabelos[x] != 'C') && (cabelos[x] != 'L') && (cabelos[x] != 'P'));
			printf("Digite a idade ");
			scanf("%d%*c",&idade[x]);
		}
}

float media_idade (char olhos[], char cabelos[], int idade[])
{ int i, cont;
	float soma, media;
	soma=0;
	cont=0;
	for (i=0;i<5;i++)
		{ if ((olhos[i] == 'C') && (cabelos[i] == 'P'))
				 { soma = soma + idade[i];
					 cont++;
				 }
		}
	if (cont == 0)
		 media = 0;
	else
		 media = soma/cont;
	return media;
}

int maior_idade (int idade[])
{ int i, maior=0;
	for (i=0;i<5;i++)
			if (i==0)
	 maior = idade[i];
			else
	 if (idade[i] > maior)
			maior = idade[i];
	return maior;
}

int quantidade_individuos(char sexo[], char olhos[], char cabelos[], int idade[])
{ int i, qtd;
	qtd=0;
	for (i=0;i<5;i++)
			if ((sexo[i] == 'F') && (idade[i] >= 18) && (idade[i] <=35) &&
					(olhos[i] == 'A') && (cabelos[i] == 'L'))
				 qtd++;
	return qtd;
}

int main()
{ char sexo[5], olhos[5], cabelos[5];
	int idade[5], x, i, q;
	float m;
	leitura(sexo, olhos, cabelos, idade);
	m = media_idade(olhos, cabelos, idade);
	printf("\nMédia de idade das pessoas com olhos castanhos e cabelos pretos = %5.2f",m);
	i = maior_idade(idade);
	printf("\nMaior idade entre os habitantes = %d",i);
	q = quantidade_individuos(sexo, olhos, cabelos, idade);
	printf("\nQuantidade de mulheres louras com olhos azuis e idade entre 18 e 35 = %d",q);
	getchar();
	return 0;
}
