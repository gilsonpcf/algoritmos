#include <stdio.h>
int main()
{ int num, resto;
  //Mostra mensagem solicitando um n�mero
  printf("\nDigite um n�mero: ");
  //Recebe o n�mero
  scanf("%d%*c",&num);
  //Determina o resto da divis�o do n�mero por 2
  resto = num % 2;
  //Se resto igual a zero ent�o o n�mero � par.
  //Caso contr�rio, � �mpar.
  if (resto == 0)
	 printf( "\nO n�mero � par");
  if (resto != 0)
	 printf( "\nO n�mero � �mpar");
  //P�ra o programa a espera de um ENTER
  getchar();
  return 0;
}
