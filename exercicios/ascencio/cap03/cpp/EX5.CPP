#include <stdio.h>
int main()
{ float sal, perc, aumento, novosal;
  // Mostra mensagem antes da leitura do sal�rio
  printf("\nDigite o sal�rio do funcion�rio: ");
  // Recebe o sal�rio
  scanf("%f%*c",&sal);
  // Mostra mensagem antes da leitura do percentual de aumento
  printf("\nDigite o percentual de aumento: ");
  // Recebe o percentual de aumento
  scanf("%f%*c",&perc);
  // Calcula o aumento
  aumento = sal * perc/100;
  // Mostra o aumento
  printf("\nAumento = %4.2f",aumento);
  // Calcula o novo sal�rio
  novosal = sal + aumento;
 // Mostra o novo sal�rio
 printf("\nNovo sal�rio = %4.2f",novosal);
 // P�ra o programa a espera de um ENTER
 getchar();
 return 0;
}
