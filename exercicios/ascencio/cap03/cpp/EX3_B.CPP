#include <stdio.h>
int main()
{ float nota1, nota2, nota3, peso1, peso2, peso3, soma1, soma2, soma3, total, media;
  //Mostra mensagem antes da leitura das notas
  printf("\nDigite as tr�s notas\n");
  // Recebe as tr�s notas
  scanf("%f %f %f%*c",&nota1,&nota2,&nota3);
  //Mostra mensagem antes da leitura dos pesos
  printf("\nDigite os tr�s pesos\n");
  // Recebe os tr�s pesos
  scanf("%f %f %f%*c",&peso1,&peso2,&peso3);
  soma1 = nota1 * peso1;
  soma2 = nota2 * peso2;
  soma3 = nota3 * peso3; 
  total = peso1 + peso2 + peso3;
  // Calcula a m�dia
  media = (soma1 + soma2 + soma3)/total;
  // Mostra o resultado da m�dia
  // Formatando a sa�da para mostrar no m�nimo 4 caracteres 
  // e destes, 2 caracteres para a parte decimal
  printf("%4.2f\n",media);
  // P�ra o programa a espera de uma tecla
  getchar();
  return 0;
}
