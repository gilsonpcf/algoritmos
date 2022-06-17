#include <stdio.h>
int main()
{ int n, i, j;
  float e, fat;
  printf("Digite o valor de N: ");
  scanf("%d%*c",&n);
  e = 1;
  i = 1;
  do
    { j = 1;
      fat = 1;
      do
			 {
					fat = fat * j;
					j = j + 1;
			 }
	  while (j<=i);
	  i = i + 1;
	  e = e + 1/fat;
	}
  while (i <= n);
  printf("Valor de E = %5.2f",e);
  getchar();
  return 0;
}
