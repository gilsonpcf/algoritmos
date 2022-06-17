#include <stdio.h>
int main()
{ int m, n, soma, i;
  do
  {
  printf("\nDigite um valor para m \n");
  scanf("%d%*c",&m);
  printf("Digite um valor para n \n");
  scanf("%d%*c",&n);
  if (m < n)
    { soma = 0;
      for (i=m;i<=n;i++)
		soma = soma + i;
      printf("Soma dos inteiros entre %d e %d = %d",m,n,soma);
    }
}  
  while ( m < n);  
  return 0;	
}
