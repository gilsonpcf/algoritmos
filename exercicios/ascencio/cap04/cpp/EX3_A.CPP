#include <stdio.h>
int main()
{ float num1, num2;
  //Mostra mensagem solicitando o primeiro número
  printf("\nDigite o primeiro número: ");
  //Recebe o valor do primeiro número
  scanf("%f%*c",&num1);
  //Mostra mensagem solicitando o segundo número
  printf("\nDigite o segundo número: ");
  //Recebe o valor do segundo número
  scanf("%f%*c",&num2);
  //Determina e mostra o maior número
  if (num1 > num2)
	 printf("\nO maior número é: %5.2f",num1);
  if (num2 > num1)
	 printf("\nO maior número é: %5.2f",num2);
  if (num1 == num2)
	 printf("\nOs números são iguais");
  //Pára o programa a espera de um ENTER
  getchar();
  return 0;
}
