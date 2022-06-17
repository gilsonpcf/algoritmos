#include <stdio.h>
#include <math.h>
int main()
{ float area, raio;
  // Mostra mensagem antes da leitura do raio
  printf("\nDigite o raio: ");
  // Recebe o raio
  scanf("%f%*c",&raio);
  // Calcula a área
  area = 3.1415 * pow(raio,2);
  // Mostra a área
  printf("\nA área é:  %4.3f",area);
  // Pára o programa a espera de um ENTER
  getchar();
  return 0;
}

