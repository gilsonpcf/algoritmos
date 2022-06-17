#include <stdio.h>
int main()
{ int op;
  float sal, imp, aum, novo_sal;
            printf("\n1- Imposto ");
            printf("\n2- Novo Salário ");
			printf("\n3- Classificação ");
			printf("\n4- Finalizar o programa ");
			printf("\nDigite a opção desejada ");
			scanf("%d%*c",&op);
			while (op !=4)
			{
			if (op < 1 || op > 4)
			 printf("\nOpção inválida !");
			else
				{ if (op == 1)
						{   printf("\nDigite o valor do salário\n");
							scanf("%f%*c",&sal);
							if (sal < 500)
								imp = sal * 5 / 100;
							if (sal >= 500 && sal <= 850)
								imp = sal * 10 / 100;
							if (sal > 850)
								imp = sal * 15 / 100;
							printf("\nValor do imposto a ser pago = %5.2f",imp);
						}
					if (op == 2)
						{ printf("\nDigite o valor do salário\n ");
							scanf("%f%*c",&sal);
							if (sal > 1500)
								aum = 25;
							if (sal >= 750 && sal <= 1500)
								aum = 50;
							if (sal >= 450 && sal < 750)
								aum = 75;
							if (sal < 450)
								aum = 100;
							novo_sal = sal + aum;
							printf("Valor do salário com aumento = %5.2f",novo_sal);
						}
					if (op == 3)
					{ printf("\nDigite o valor do salário\n");
							scanf("%f%*c",&sal);
							if (sal <= 700)
								printf("\nMal Remunerado ");
							else
								printf("\nBem Remunerado ");
						}
               }		
			getchar();
			printf("\n1- Imposto ");
            printf("\n2- Novo Salário ");
			printf("\n3- Classificação ");
			printf("\n4- Finalizar o programa ");
			printf("\nDigite a opção desejada ");
			scanf("%d%*c",&op);
		}
		return 0;
}
