#include <stdio.h>
// Como neste programa ser� utilizada a fun��o sqrt
// faz-se necess�ria a biblioteca math.h
#include <math.h>
int main()
{ float num1,num2,soma, raiz;
  int op;
  //Mostra um menu de op��es
  printf("MENU");
  printf("\n1- Somar dois n�meros");
  printf("\n2- Raiz quadrada de um n�mero");
  //Mostra mensagem solicitando a op��o do usu�rio
  printf("\nDigite sua op��o: ");
  //Recebe a op��o do usu�rio
  scanf("%d%*c",&op);
 //Avalia o valor da vari�vel op para decidir qual CASE ser� executado
 switch(op)
	 {
		case 1:
			printf("\nDigite um valor para o primeiro n�mero: ");
			scanf("%f%*c",&num1);
			printf("\nDigite um valor para o segundo n�mero: ");
			scanf("%f%*c",&num2);
			soma = num1 + num2;
			printf("\nA soma de %5.2f e %5.2f � %5.2f",num1,num2,soma);
			break;
		case 2:
			printf("\nDigite um valor: ");
			scanf("%f%*c",&num1);
			raiz = sqrt(num1);
			printf("\nA raiz quadrada de %5.2f � %5.2f",num1,raiz);
			break;
	 default:
			printf("\nOp��o inv�lida !");
	 }
 //P�ra o programa a espera de um ENTER
 getchar();
 return 0;
}
