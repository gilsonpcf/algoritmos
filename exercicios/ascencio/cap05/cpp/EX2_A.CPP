#include <stdio.h>
int main()
{ int n, i, j;
  float e, fat;
  printf("Digite o valor de N: ");
  scanf("%d%*c",&n);
  e=1;
  for (i=1;i<=n;i++)
		{
			fat = 1;
			for (j=1;j<=i;j++)
				fat = fat * j;
			e = e + 1/fat;
		}
  printf("Valor de E = %5.2f",e);
  getchar();
  return 0;
}
