#include <stdio.h>
int main ()
{ int n1, n2, n3, n4, soma;
  // Recebe os quatro n�meros
  scanf("%d%*c",&n1);
  scanf("%d%*c",&n2);
  scanf("%d%*c",&n3);
  scanf("%d%*c",&n4);
  // Soma os n�meros digitados
  soma = n1 + n2 + n3 + n4;
  // Mostra o resultado da soma
  // \n - coloca o cursor na linha de baixo
  printf("%d\n",soma);
  // P�ra o programa a espera de uma tecla
  getchar();
  return 0;
}
