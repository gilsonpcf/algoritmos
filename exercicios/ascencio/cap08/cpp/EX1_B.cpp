#include <stdio.h>
int verifica(int num);
int main()
{ int num, x;
  printf("\nDigite um número: ");
  scanf("%d%*c",&num);
  x = verifica(num);
  if (x==1)
     printf("\nNúmero positivo");
  else
     printf("\nNúmero negativo");
  getchar();
  return 0;
}
int verifica(int num)
{ int res;
  if (num >= 0)
     res = 1;
  else
     res = 0;
  return res;
}
