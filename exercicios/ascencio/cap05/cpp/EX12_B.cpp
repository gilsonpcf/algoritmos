#include <stdio.h>
int main()
{ int num_op, pecas_op, num_maior, cont_m, cont_f, tot_pecas, cont;
  float media_m, media_f, salario_op, salario_maior, tot_folha;
  char sexo_op;
  tot_folha = 0;
  tot_pecas = 0;
  media_m = 0;
  media_f = 0;
  cont_m = 0;
  cont_f = 0;
  cont = 1;
  while (cont<=15)
		{ 
            printf("\nDigite o número do %dº operário ",cont);
			scanf("%d%*c",&num_op);
			printf("Digite o sexo do operário (M ou F) ");
			scanf("%c%*c",&sexo_op);
			printf("Digite o total de peças fabricadas ");
			scanf("%d%*c",&pecas_op);
			if (pecas_op <= 30)
				salario_op = 450;
			if (pecas_op > 30 && pecas_op <=35)
				salario_op = 450 + ((pecas_op - 30) * 3 / 100 * 450);
			if (pecas_op > 35)
				salario_op = 450 + ((pecas_op - 35) * 5 / 100 * 450);
			printf("\nO operário de número %d recebe salário = %5.2f\n",num_op,salario_op);
			tot_folha = tot_folha + salario_op;
			tot_pecas = tot_pecas + pecas_op;
			if (sexo_op == 'M')
				{ 
                    media_m = media_m + pecas_op;
					cont_m = cont_m + 1;
				}
			else
				{ 
                    media_f = media_f + pecas_op;
					cont_f = cont_f + 1;
				}
			if (cont == 1)
				{ 
                    salario_maior = salario_op;
					num_maior = num_op;
				}
			else
				{ 
                    if (salario_op > salario_maior)
						{ 
                            salario_maior = salario_op;
							num_maior = num_op;
						}
				}
		cont++;
	}
	printf("\nTotal da folha de pagamento = %5.2f",tot_folha);
	printf("\nTotal de peças fabricadas no mês = %d",tot_pecas);
	if (cont_m == 0)
		printf("\nNenhum homem");
	 else
		{
		 media_m = media_m / cont_m;
		 printf("\nMédia de peças fabricadas por homens = %5.2f",media_m);
		}
	if (cont_f == 0)
		printf("\nNenhuma mulher");
	else
	 {
		 media_f = media_f / cont_f;
		 printf("\nMédia de peças fabricadas por mulheres = %5.2f",media_f);
	 }
	printf("\nO número do operário com maior salário = %d",num_maior);
	getchar();
	return 0;
}
