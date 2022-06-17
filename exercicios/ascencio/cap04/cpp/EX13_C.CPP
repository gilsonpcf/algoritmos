#include <stdio.h>
int main()
{   float sal, imp, aum, novo_sal;
    int op;
	// Mostra o menu de opçõs
	printf("Menu de Opções");
	printf("\n1 - Imposto");
	printf("\n2 - Novo Salário");
	printf("\n3 - Classificação");
	printf("\nDigite a opção desejada ");
	// Recebe a opção do usuário
	scanf("%d%*c",&op);
	// Avalia o valor da variável op para decidir qual case será executado
	switch (op)
		{
			 case 1:
				 printf("Digite o valor do salário: ");
     			 scanf("%f%*c",&sal);
	     		 if (sal < 500)
		    		imp = sal * 5/100;
			     if (sal >= 500 && sal <= 850)
				    imp = sal * 10/100;
        		 if (sal > 850)
		      		imp = sal * 15/100;
			     printf("Valor do Imposto = %5.2f",imp);
				 break;
			 case 2:
          		 printf("Digite o valor do salário: ");
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
			     printf("Valor do Novo Salário = %5.2f",novo_sal);
				 break;
			 case 3:
				 printf("Digite o valor do salário: ");
     			 scanf("%f%*c",&sal);
	     		 if (sal <= 700)
		    		printf("Mal Remunerado");
			     if (sal > 700)
				    printf("Bem Remunerado");
				 break;
			 default:
				  printf( "Opção Inválida");
      }			  
  // Pára o programa a espera de um ENTER
  getchar();
  return 0;
}
