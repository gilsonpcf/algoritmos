#include <stdio.h>
int main()
{ float sal, salreceber, grat, imp;
  // Mostra mensagem antes da leitura do sal�rio
  printf("\nDigite o sal�rio do funcion�rio: ");
  // Recebe o sal�rio
  scanf("%f%*c",&sal);
  // Calcula a gratifica��o
  grat = sal * 5/100;
  // Calcula o imposto
  imp = sal * 7/100;
  // Calcula o sal�rio a receber
  salreceber = sal + grat - imp;
  // Mostra o sal�rio a receber
  printf("\nSal�rio a receber = %4.2f",salreceber);
  // P�ra o programa a espera de um ENTER
  getchar();
  return 0;
}
