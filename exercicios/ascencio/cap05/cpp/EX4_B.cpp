#include <stdio.h>
int main()
{ int cont, cod, num_vei, num_acid, soma_vei;
  int maior, cid_maior, menor, cid_menor, cont_acid;
  float media_vei, media_acid, soma_acid;
  soma_vei = 0;
  soma_acid = 0;
  cont_acid = 0;
  cont = 1;
  do
		{
			printf("Digite o c�digo da %d cidade ",cont);
			scanf("%d%*c",&cod);
			printf("Digite o n�mero de ve�culos de passeio da %d � cidade ",cont);
			scanf("%d%*c",&num_vei);
			printf("Digite o n�mero de acidentes de tr�nsito da %d � cidade ",cont);
			scanf("%d%*c",&num_acid);
			if (cont == 1)
				{
					maior = num_acid;
					cid_maior = cod;
					menor = num_acid;
					cid_menor = cod;
				}
			else
			   {
				if (num_acid > maior)
					{
						maior = num_acid;
						cid_maior = cod;
					}
			    if (num_acid < menor)
					{
						menor = num_acid;
						cid_menor = cod;
					}
			   }
			soma_vei = soma_vei + num_vei;
			if (num_vei < 2000)
				{
					soma_acid = soma_acid + num_acid;
					cont_acid = cont_acid + 1;
				}
	cont = cont + 1;
	}
	while (cont<=5);
	printf("\nMaior n�mero de acidentes = %d na cidade de c�digo = %d",maior,cid_maior);
	printf("\nMenor n�mero de acidentes = %d na cidade de c�dgio = %d",menor,cid_menor);
	media_vei = soma_vei/5;
	printf("\nM�dia de ve�culos nas 5 cidades = %5.2f",media_vei);
	if (cont_acid == 0)
		 printf("\nN�o foi digitada nenhuma cidade com menos de 2000 ve�culos");
	else
		 {
			media_acid = soma_acid/cont_acid;
			printf("\nM�dia de acidentes nas cidades com menos de 2000 ve�culos = %5.2f",media_acid);
      	 }
	getchar();
	return 0;
}
