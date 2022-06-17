#include <stdio.h>
int main()
{ float num1, num2, num3;
  //Mostra mensagem solicitando o primeiro número
  printf("\nDigite o primeiro número: ");
  //Recebe o valor do primeiro número
  scanf("%f%*c",&num1);
  //Mostra mensagem solicitando o segundo número
  printf("\nDigite o segundo número: ");
  //Recebe o valor do segundo número
  scanf("%f%*c",&num2);
  //Mostra mensagem solicitando o terceiro número
  printf("\nDigite o terceiro número: ");
  //Recebe o valor do terceiro número
  scanf("%f%*c",&num3);
  //Determina e mostra a ordem crescente dos números digitados
  if (num1 < num2 && num1 < num3)
  {
	 if (num2 < num3)
		printf("\nA ordem crescente dos números é: %5.2f - %5.2f - %5.2f",num1,num2,num3);
	 if (num3 < num2)
	    printf("\nA ordem crescente dos números é: %5.2f - %5.2f - %5.2f",num1,num3,num2);
  }
  if (num2 < num1 && num2 < num3)
  {
	if (num1 < num3)
       printf("\nA ordem crescente dos números é: %5.2f - %5.2f - %5.2f",num2,num1,num3);
	if (num3 < num1)
       printf("\nA ordem crescente dos números é: %5.2f - %5.2f - %5.2f",num2,num3,num1);
  }
  if (num3 < num1 && num3 < num2)
  {
	if (num1 < num2)
       printf("\nA ordem crescente dos números é: %5.2f - %5.2f - %5.2f",num3,num1,num2);
	if (num2 < num1)
       printf("\nA ordem crescente dos números é: %5.2f - %5.2f - %5.2f",num3,num2,num1);
  }
  //Pára o programa a espera de um ENTER
  getchar();
  return 0;
}
