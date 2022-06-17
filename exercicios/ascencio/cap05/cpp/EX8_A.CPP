#include <stdio.h>
int main()
{   int i, num_termos, num1, num2, num3;
  	printf("\nDigite o número de termos da sequência: ");
	scanf("%d%*c",&num_termos);
    num1 = 2;
	num2 = 7;
	num3 = 3;
	i = 1;
	if (i <= num_termos)
		 { 
             printf("\n%d",num1);
			 i = i + 1;
			 if (i <= num_termos)
				{
					printf("\n%d",num2);
					i = i + 1;
					if (i <= num_termos)
					{
						printf("\n%d",num3);
						i = i + 1;
				    }
				}
		 }
	while (i <= num_termos)
		{ 
            num1 = num1 * 2;
			printf("\n%d",num1);
			i = i + 1;
			if (i <= num_termos)
				{
					num2 = num2 * 3;
					printf("\n%d",num2);
					i = i + 1;
					if (i <= num_termos)
					{
						num3 = num3 * 4;
						printf("\n%d",num3);
						i = i + 1;
					}
				}
		 }
  getchar();
  return 0;
}
