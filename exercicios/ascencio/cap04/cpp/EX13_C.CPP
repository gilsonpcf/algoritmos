#include <stdio.h>
int main()
{   float sal, imp, aum, novo_sal;
    int op;
	// Mostra o menu de op��s
	printf("Menu de Op��es");
	printf("\n1 - Imposto");
	printf("\n2 - Novo Sal�rio");
	printf("\n3 - Classifica��o");
	printf("\nDigite a op��o desejada ");
	// Recebe a op��o do usu�rio
	scanf("%d%*c",&op);
	// Avalia o valor da vari�vel op para decidir qual case ser� executado
	switch (op)
		{
			 case 1:
				 printf("Digite o valor do sal�rio: ");
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
          		 printf("Digite o valor do sal�rio: ");
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
			     printf("Valor do Novo Sal�rio = %5.2f",novo_sal);
				 break;
			 case 3:
				 printf("Digite o valor do sal�rio: ");
     			 scanf("%f%*c",&sal);
	     		 if (sal <= 700)
		    		printf("Mal Remunerado");
			     if (sal > 700)
				    printf("Bem Remunerado");
				 break;
			 default:
				  printf( "Op��o Inv�lida");
      }			  
  // P�ra o programa a espera de um ENTER
  getchar();
  return 0;
}
