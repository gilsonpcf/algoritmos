#include <stdio.h>
int main()
{ float num1, num2, num3, num4;
  //Mostra mensagem solicitando tr�s n�meros em ordem crescente
  printf("\nDigite tr�s n�meros em ordem crescente: \n");
  //Recebe os tr�s n�meros
  scanf("%f%*c",&num1);
  scanf("%f%*c",&num2);
  scanf("%f%*c",&num3);
  //Mostra mensagem solicitando um quarto n�mero em ordem aleat�ria
  printf("\nDigite um n�mero (fora de ordem): ");
  //Recebe valor do quarto n�mero
  scanf("%f%*c",&num4);
  //Determina e mostra a ordem decrescente dos quatro n�meros digitados
  if (num4 > num3)
   printf("\nA ordem decrescente dos n�meros �: %3.0f - %3.0f - %3.0f - %3.0f",num4,num3,num2,num1);
  if (num4 > num2 && num4<num3)
   printf("\nA ordem decrescente dos n�meros �: %3.0f - %3.0f - %3.0f - %3.0f",num3,num4,num2,num1);
  if (num4 > num1 && num4 < num2)
   printf("\nA ordem decrescente dos n�meros �: %3.0f - %3.0f - %3.0f - %3.0f",num3,num2,num4,num1);
  if (num4 < num1)
   printf("\nA ordem decrescente dos n�meros �: %3.0f - %3.0f - %3.0f - %3.0f",num3,num2,num1,num4);
  //P�ra o programa a espera de um ENTER
  getchar();
  return 0;
}
