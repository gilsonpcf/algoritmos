#include <stdio.h>
int main()
{ float num1, num2, num3, num4;
  //Mostra mensagem solicitando três n£meros em ordem crescente
  printf("\nDigite três números em ordem crescente: \n");
  //Recebe os três números
  scanf("%f%*c",&num1);
  scanf("%f%*c",&num2);
  scanf("%f%*c",&num3);
  //Mostra mensagem solicitando um quarto número em ordem aleatória
  printf("\nDigite um número (fora de ordem): ");
  //Recebe valor do quarto número
  scanf("%f%*c",&num4);
  //Determina e mostra a ordem decrescente dos quatro números digitados
  if (num4 > num3)
   printf("\nA ordem decrescente dos números é: %3.0f - %3.0f - %3.0f - %3.0f",num4,num3,num2,num1);
  if (num4 > num2 && num4<num3)
   printf("\nA ordem decrescente dos números é: %3.0f - %3.0f - %3.0f - %3.0f",num3,num4,num2,num1);
  if (num4 > num1 && num4 < num2)
   printf("\nA ordem decrescente dos números é: %3.0f - %3.0f - %3.0f - %3.0f",num3,num2,num4,num1);
  if (num4 < num1)
   printf("\nA ordem decrescente dos números é: %3.0f - %3.0f - %3.0f - %3.0f",num3,num2,num1,num4);
  //Pára o programa a espera de um ENTER
  getchar();
  return 0;
}
