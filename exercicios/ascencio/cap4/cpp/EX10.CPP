#include <stdio.h>
int main()
{ int d1,m1,a1,d2,m2,a2;
  //Mostra as mensagens solicitando o dia, o mês e o ano da primeira data
  printf("\nDigite a primeira data");
  printf("\ndia (dd): ");
  //Recebe o valor do dia
  scanf("%d%*c",&d1);
  printf("mês (mm): ");
  //Recebe o valor do mês
  scanf("%d%*c",&m1);
  printf("ano (aaaa): ");
  //Recebe o valor do ano
  scanf("%d%*c",&a1);
  //Mostra as mensagens solicitando o dia, o mês e o ano da segunda data
  printf("\nDigite a segunda data");
  printf("\ndia (dd): ");
  //Recebe o valor do dia
  scanf("%d%*c",&d2);
  printf("mês (mm): ");
  //Recebe o valor do mês
  scanf("%d%*c",&m2);
  printf("ano (aaaa): ");
  //Recebe o valor do ano
  scanf("%d%*c",&a2);
  //Determina e mostra qual a maior data digitada
  if (a1>a2)
	printf("\nA maior data é: %d - %d - %d",d1,m1,a1);
  else if (a2>a1)
	     printf("\nA maior data é: %d - %d - %d",d2,m2,a2);
	   else if (m1>m2)
		      printf("\nA maior data é: %d - %d - %d",d1,m1,a1);
			else if (m2>m1)
                   printf("\nA maior data é: %d - %d - %d",d2,m2,a2);
				else if (d1>d2)
                       printf("\nA maior data é: %d - %d - %d",d1,m1,a1);
					 else if (d2>d1)
					        printf("\nA maior data é: %d - %d - %d",d2,m2,a2);
						   else printf("\nAs datas são iguais !");
  //Pára o programa a espera de um ENTER
  getchar();
}
