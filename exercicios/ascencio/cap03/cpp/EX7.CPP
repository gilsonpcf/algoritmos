#include <stdio.h>
int main()
{ float sal, salreceber, imp;
  // Mostra mensagem antes da leitura do sal�rio
  printf("\nDigite o sal�rio do funcion�rio: ");
  // Recebe o sal�rio
  scanf("%f%*c",&sal);   
  // Calcula o imposto
  imp = sal * 10/100;
  // Calcula o sal�rio a receber
  salreceber = sal + 50 - imp;
  // Mostra o sal�rio a receber
  printf("\nSal�rio a receber = %4.2f",salreceber);
  // P�ra o programa a espera de um ENTER
  getchar();
  return 0;
}
