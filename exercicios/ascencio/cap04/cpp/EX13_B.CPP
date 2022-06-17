#include <stdio.h>
int main()
{   float op, sal, imp, aum, novo_sal;
	// Mostra o menu de opçõs
	printf("Menu de Opções");
	printf("\n1 - Imposto");
	printf("\n2 - Novo Salário");
	printf("\n3 - Classificação");
	printf("\nDigite a opção desejada ");
	// Recebe a opção do usuário
	scanf("%f%*c",&op);
	if (op == 1)
		 {
			 printf("Digite o valor do salário: ");
			 scanf("%f%*c",&sal);
			 if (sal < 500)
				imp = sal * 5/100;
			 else if (sal <= 850)
						 imp = sal * 10/100;
						else
						 imp = sal * 15/100;
			 printf("Valor do Imposto = %5.2f",imp);
		 }
	else if (op == 2)
				{
					printf("Digite o valor do salário: ");
			        scanf("%f%*c",&sal);
					if (sal > 1500)
					 aum = 25;
					else if (sal >= 750)
								aum = 50;
							 else if (sal >= 450)
										 aum = 75;
										else
										 aum = 100;
					novo_sal = sal + aum;
					printf("Valor do Novo Salário = %5.2f",novo_sal);
				}
			else if (op == 3)
						{
							 printf("Digite o valor do salário: ");
			                 scanf("%f%*c",&sal);
							if (sal <= 700)
							 printf("Mal Remunerado");
							else
							 printf("Bem Remunerado");
						} 
					else printf( "Opção Inválida");
  // Pára o programa a espera de um ENTER
  getchar();
  return 0;
}
