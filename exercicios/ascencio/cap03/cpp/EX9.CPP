#include <stdio.h>
int main()
{ float base, altura, area;
  // Mostra mensagem antes da leitura da base
  printf("\nDigite a base do triângulo\n");
  // Recebe a base
  scanf("%f%*c",&base);
  // Mostra mensagem antes da leitura da altura
  printf("\nDigite a altura do triângulo\n");
  // Recebe a altura
  scanf("%f%*c",&altura);
  // Calcula a área
  area = (base * altura)/2;
  // Mostra a área
  printf("\nA área do triângulo é  %4.2f",area);
  // Pára o programa a espera de um ENTER
  getchar();
  return 0;
}
