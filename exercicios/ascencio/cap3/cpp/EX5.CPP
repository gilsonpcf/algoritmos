#include <stdio.h>
int main()
{ float sal, perc, aumento, novosal;
  // Mostra mensagem antes da leitura do salário
  printf("\nDigite o salário do funcionário: ");
  // Recebe o salário
  scanf("%f%*c",&sal);
  // Mostra mensagem antes da leitura do percentual de aumento
  printf("\nDigite o percentual de aumento: ");
  // Recebe o percentual de aumento
  scanf("%f%*c",&perc);
  // Calcula o aumento
  aumento = sal * perc/100;
  // Mostra o aumento
  printf("\nAumento = %4.2f",aumento);
  // Calcula o novo salário
  novosal = sal + aumento;
 // Mostra o novo salário
 printf("\nNovo salário = %4.2f",novosal);
 // Pára o programa a espera de um ENTER
 getchar();
 return 0;
}
