#include <stdio.h>
int main()
{ int n, num, i, j, fat;
  printf("Digite a quantidade de n�meros que ser�o lidos: ");
  scanf("%d%*c",&n);
  i = 1;
  while (i <= n)
		{
            printf("\n\nDigite o %d � n�mero: ",i);
			scanf("%d%*c",&num);
			fat = 1;
			j = 1;
			while (j <= num)
			{
				fat = fat * j;
				j = j +1;
			}
			printf("\nFatorial de %d = %d",num,fat);
			i = i + 1;
		}
  getchar();
  return 0;
}

