#include <stdio.h>

int main()
{   int conta[10], i, j, codigo, op, achou;;
	float saldo[10], valor, soma;
	
	for (i=0;i<10;i++)
	{   printf("Digite o codigo da %d.a conta: ", i+1);
		do
		{   achou = 0;
			scanf("%d%*c", &conta[i]);
			for (j=0;j<i;j++)
			{ if (conta[i] == conta[j])
					 { printf("Codigo repetido. Digite novamente ");
					   achou = 1;
					 }
			}
		} while (achou ==  1);
		printf("Digite o saldo da %d.a conta: ", i+1);
		scanf("%f%*c", &saldo[i]);
	}
	do
	{ 
		printf("\nDigite sua opcao: \n1- Deposito \n2- Saque \n3- Mostrar ativo bancario \n4- Finalizar programa ");
		scanf("%d%*c", &op);
		achou = 0;
		if (op == 1)
			 {   printf("\nDigite o codigo da conta desejada ");
				 scanf("%d%*c", &codigo);
				 printf("Digite o valor do deposito ");
				 scanf("%f%*c", &valor);
				 for (i=0;i<10;i++)
				 { if (codigo == conta[i])
							{ saldo[i] = saldo[i] + valor;
							  achou = 1;
							  printf("\nDeposito efetuado");
							}
				 }
				 if (achou == 0)
					printf("\nConta nao cadastrada");
				 getchar();
			 }

		if (op == 2)
			 {   printf("\nDigite o codigo da conta desejada ");
				 scanf("%d%*c", &codigo);
				 printf("Digite o valor do saque ");
				 scanf("%f%*c", &valor);
				 for (i=0;i<10;i++)
				 { if (codigo == conta[i])
							{ if (saldo[i] < valor)
								  printf("\nSaldo insuficiente");
							  else
								 { saldo[i] = saldo[i] - valor;
								   printf("\nSaque efetuado");
								 }
							  achou = 1;
							}
				 }

				 if (achou == 0)
					 printf("\nConta nao cadastrada");
				 getchar();
			 }

		if (op == 3)
			 {   soma = 0;
				 for (i=0;i<10;i++)
				 {
					 soma = soma + saldo[i];
				 }
				 printf("\nAtivo bancario = %10.2f", soma);
				 getchar();
			 }
			 
		if (op < 1 || op > 4)
			 { printf("Opcao invalida");
			   getchar();
			 }
} while (op != 4);

return 0;

}
