#include <stdio.h>
int main()
{ int n, num, i, j, fat;
  printf("Digite a quantidade de números que serão lidos: ");
  scanf("%d%*c",&n);
	for (i=1;i<=n;i++)
		{ 
            printf("\n\nDigite o %d º número: ",i);
			scanf("%d%*c",&num);
			fat = 1;
			for (j=1;j<=num;j++)
				fat = fat * j;
			printf("\nFatorial de %d = %d",num,fat);
        }
  getchar();
  return 0;
}
