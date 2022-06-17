#include <stdio.h>
int divisores(int a, int b, int c)
{ int i, s, r;
  s = 0;
  for (i=b;i<=c;i++)
    { 
      r = (i % a);
      if (r == 0)
	    s = s + i;
    }
  return s;
}
int main()
{ int a, b, c, result;
  do
    { 
      printf("\nDigite o valor de a: ");
      scanf("%d%*c",&a);
    } 
  while (a<=1);
  printf("\nDigite o valor de b: ");
  scanf("%d%*c",&b);
  printf("\nDigite o valor de c: ");
  scanf("%d%*c",&c);
  result = divisores(a, b, c);
  printf("\nSoma dos inteiros = %d",result);
  getchar();
  return 0;
}
