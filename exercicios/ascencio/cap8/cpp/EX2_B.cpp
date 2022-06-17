#include <stdio.h>
int somar(int num1, int num2);
int main()
{ int num1, num2, s;
  printf("\nDigite o 1º número: ");
  scanf("%d%*c",&num1);
  printf("\nDigite o 2º número: ");
  scanf("%d%*c",&num2);
  s = somar(num1,num2);
  printf("\nSoma = %d",s);
  getchar();
  return 0;
}
int somar(int num1, int num2)
{ int i, s;
  s = 0;
  for (i=num1+1;i<=num2-1;i++)
    { 
        s = s + i;
    }
  return s;
}
