#include <stdio.h>
#include <math.h>
int main()
{ float area, raio;
  // Mostra mensagem antes da leitura do raio
  printf("\nDigite o raio: ");
  // Recebe o raio
  scanf("%f%*c",&raio);
  // Calcula a �rea
  area = 3.1415 * pow(raio,2);
  // Mostra a �rea
  printf("\nA �rea �:  %4.3f",area);
  // P�ra o programa a espera de um ENTER
  getchar();
  return 0;
}

