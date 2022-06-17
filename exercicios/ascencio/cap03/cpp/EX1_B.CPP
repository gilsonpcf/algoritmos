#include <stdio.h>
int main ()
{ int n1, n2, n3, n4, soma;
  // Mostra mensagem antes da leitura dos quatro números
  // \n - coloca o cursor na linha de baixo
  printf("\nDigite quatro números\n");
  // Recebe os quatro números
  scanf("%d%*c",&n1);
  scanf("%d%*c",&n2);
  scanf("%d%*c",&n3);
  scanf("%d%*c",&n4);
  // Soma os números digitados
  soma = n1 + n2 + n3 + n4;
  // Mostra mensagem e o resultado da soma
  printf("\nResultado da soma = %d\n",soma);
  // Pára o programa a espera de um ENTER
  getchar();
  return 0;
}
