#include <stdio.h>
int main()
{ float nota1, nota2, nota3, peso1, peso2, peso3, media;
  // Recebe as tr�s notas e seus pesos
  scanf("%f %f %f %f %f %f%*c",&nota1,&nota2,&nota3,&peso1,&peso2,&peso3);
  // Calcula a m�dia
  media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3)/(peso1 + peso2 + peso3);
  // Mostra o resultado da m�dia
  // Formatando a sa�da para mostrar no m�nimo 3 caracteres
  // e destes, 2 caracteres para a parte decimal
  printf("%3.2f\n",media);
  // P�ra o programa a espera de uma tecla
  getchar();
  return 0;
}
