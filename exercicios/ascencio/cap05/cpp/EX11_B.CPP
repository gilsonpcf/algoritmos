#include <stdio.h>
int main()
{ int i, num, qtde;
  printf("\nDigite um n�mero: ");
  scanf("%d%*c",&num);
  qtde = 0;
  i = 1;
  do
		 {
			if (num%i == 0)
				qtde = qtde + 1;
			i = i + 1;
		 }
	while (i <= num);
	if (qtde > 2)
		 printf("\nN�mero n�o primo");
	else
		 printf("\nN�mero primo");
	getchar();
	return 0;
}
