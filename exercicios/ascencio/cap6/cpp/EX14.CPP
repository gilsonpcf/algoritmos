#include <stdio.h>

int main()
{   char nome[5][30];
	float sal[5], novo_sal;
	int quant[5], i;

	for (i=0;i<5;i++)
	{   printf("\nDigite o nome do %d.o funcionario: ", i+1);
		scanf("%s%*c", nome[i]);
		printf("Digite o salario do %d.o funcionario: ", i+1);
		scanf("%f%*c", &sal[i]);
		printf("Digite o tempo de servico do %d.o funcionario: ", i+1);
		scanf("%d%*c", &quant[i]);
	 }
	 for (i=0;i<5;i++)
	 { if (quant[i] <= 5 && sal[i] >= 400)
	      printf("\nFuncionario que nao recebera aumento: %s", nome[i]);
	 }
	 for (i=0;i<5;i++)
	 { if (quant[i] > 5 || sal[i] < 400)
			{ if (quant[i] > 5 && sal[i] < 400)
				 novo_sal = sal[i] + sal[i] * 35 / 100;
			  else if (quant[i] > 5)
					   novo_sal = sal[i] + sal[i] * 25 / 100;
				   else novo_sal = sal[i] + sal[i] * 15 / 100;
		      printf("\nNome do funcionario: %s  Novo salario %10.2f: ", nome[i], novo_sal);
			}
	 }
	getchar();
	return 0;
}
