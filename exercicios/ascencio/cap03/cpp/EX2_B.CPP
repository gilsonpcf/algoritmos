#include <stdio.h>
int main()
{ float nota1, nota2, nota3, soma, media;
  //Mostra mensagem antes da leitura das tr�s notas
  printf("Digite as tr�s notas\n");
  // Recebe as tr�s notas
  scanf("%f%*c",&nota1);
  scanf("%f%*c",&nota2);
  scanf("%f%*c",&nota3);
  // Soma as notas digitadas
  soma = nota1 + nota2 + nota3;
  // Calcula a m�dia
  media = soma/3;
  // Mostra o resultado da m�dia 
  // Com no m�nimo 4 caracteres e destes 2 caracteres para as casas decimais
  printf("M�dia = %4.2f\n",media);
  // P�ra o programa a espera de um ENTER
  getchar();
  return 0;
}
