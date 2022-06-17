#include <stdio.h>
// Como neste programa será utilizada a função sqrt
// faz-se necessária a biblioteca math.h
#include <math.h>
int main()
{ float num1,num2,soma, raiz;
  int op;
  //Mostra um menu de opções
  printf("MENU");
  printf("\n1- Somar dois números");
  printf("\n2- Raiz quadrada de um número");
  //Mostra mensagem solicitando a opção do usuário
  printf("\nDigite sua opção: ");
  //Recebe a opção do usuário
  scanf("%d%*c",&op);
  //Se a opção é igual a 1, soma dois números
  if (op == 1)
		{
			printf("\nDigite um valor para o primeiro número: ");
			scanf("%f%*c",&num1);
			printf("\nDigite um valor para o segundo número: ");
			scanf("%f%*c",&num2);
			soma = num1 + num2;
			printf("\nA soma de %5.2f e %5.2f é %5.2f",num1,num2,soma);
		}
  //Se a opção é igual a 2, extrai a raiz quadrada de um número
  if (op == 2)
		{
			printf("\nDigite um valor: ");
			scanf("%f%*c",&num1);
			raiz = sqrt(num1);
			printf("\nA raiz quadrada de %5.2f é %5.2f",num1,raiz);
	    }
  //Se for digitada uma opção inválida mostra mensagem de alerta
  if (op != 1 && op != 2)
		printf("\nOpção inválida !");
  //Pára o programa a espera de um ENTER
  getchar();
  return 0;
}
