#include <stdio.h>
void multiplicacao(int n)
{ int i,j;
  for (i=1;i<=n;i++)
    { 
      for (j=1;j<=i;j++)
		{ 
		   printf("%d \t",i*j);
		}
   	  printf("\n");
	}
}
int main()
{ int num;
	do
	 { 
          printf("\nDigite um número entre 1 e 9: ");
		  scanf("%d%*c",&num);
	 } 
    while ((num <1) || (num>9));
	multiplicacao(num);
	getchar();
	return 0;
}
