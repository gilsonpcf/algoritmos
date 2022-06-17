#include <stdio.h>
int main()
{ int num, resto;
  //Mostra mensagem solicitando um número
  printf("\nDigite um número: ");
  //Recebe o número
  scanf("%d%*c",&num);
  //Determina o resto da divisão do número por 2
  resto = num % 2;
  //Se resto igual a zero então o número é par.
  //Caso contrário, é ímpar.
  if (resto == 0)
	 printf( "\nO número é par");
  if (resto != 0)
	 printf( "\nO número é ímpar");
  //Pára o programa a espera de um ENTER
  getchar();
  return 0;
}
