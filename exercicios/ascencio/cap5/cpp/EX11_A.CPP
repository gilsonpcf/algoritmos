#include <stdio.h>
int main()
{ int i, num, qtde;
  printf("\nDigite um número ");
  scanf("%d%*c",&num);
  qtde = 0;
  for (i=1;i<=num;i++)
		 {
			if (num%i == 0)
				qtde = qtde + 1;
		 }
	if (qtde > 2)
		 printf("\nNúmero não primo");
    else
         printf("\nNúmero primo");
  getchar();
  return 0;
}
