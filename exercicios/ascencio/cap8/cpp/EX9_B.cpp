#include <stdio.h>
void maior_menor();
int main()
{ 
	maior_menor();
    getchar();
    return 0;
}
void maior_menor()
	{ 
      int i, num, maior=0, menor=0;
	  for (i=1;i<=5;i++)
		{ 
          printf("Digite o %d� n�mero: ",i);
		  scanf("%d%*c",&num);
				if (i==1)
				 {   maior = num;
					 menor = num;
				 }
				else
				 { if (num > maior)
					  maior = num;
				   if (num < menor)
				 	  menor = num;
				 }
			}
		printf("\nO maior n�mero digitado foi: %d",maior);
		printf("\nO menor n�mero digitado foi: %d",menor);
}
