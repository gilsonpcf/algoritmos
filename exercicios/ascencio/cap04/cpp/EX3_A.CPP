#include <stdio.h>
int main()
{ float num1, num2;
  //Mostra mensagem solicitando o primeiro n�mero
  printf("\nDigite o primeiro n�mero: ");
  //Recebe o valor do primeiro n�mero
  scanf("%f%*c",&num1);
  //Mostra mensagem solicitando o segundo n�mero
  printf("\nDigite o segundo n�mero: ");
  //Recebe o valor do segundo n�mero
  scanf("%f%*c",&num2);
  //Determina e mostra o maior n�mero
  if (num1 > num2)
	 printf("\nO maior n�mero �: %5.2f",num1);
  if (num2 > num1)
	 printf("\nO maior n�mero �: %5.2f",num2);
  if (num1 == num2)
	 printf("\nOs n�meros s�o iguais");
  //P�ra o programa a espera de um ENTER
  getchar();
  return 0;
}
