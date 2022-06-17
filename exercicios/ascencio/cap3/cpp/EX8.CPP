#include <stdio.h>
int main()
{ float dep, taxa, rend, total;
  // Mostra mensagem antes da leitura do valor do dep¢sito
  printf("\nDigite o valor do depósito: ");
  // Recebe o valor do depósito
  scanf("%f%*c", &dep);
  // Mostra mensagem antes da leitura da taxa de juros
  printf("\nDigite a taxa de juros: ");
  // Recebe a taxa de juros
  scanf("%f%*c", &taxa);
  // Calcula o rendimento
  rend = dep * taxa/100;
  // Calcula o total
  total = dep + rend;
  // Mostra o rendimento
  printf("\nRendimento = %0.2f",rend);
  // Mostra o total
  printf("\nTotal = %0.2f",total);
  // Pára o programa a espera de um ENTER
  getchar();
  return 0;
}

