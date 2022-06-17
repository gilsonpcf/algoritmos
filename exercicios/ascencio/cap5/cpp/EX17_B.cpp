#include <stdio.h>
int main()
{   float sal_carlos, sal_joao;
    int meses;
  	printf("\nDigite o salário do Carlos\n");
	scanf("%f%*c",&sal_carlos);
	sal_joao = sal_carlos / 3;
	meses = 0;
    do
		 { 
             sal_carlos = sal_carlos + (sal_carlos * 2 / 100);
			 sal_joao = sal_joao + (sal_joao * 5 / 100);
			 meses = meses + 1;
		 }
	while (sal_joao < sal_carlos);	 
	printf("Meses = %d",meses);
	getchar();
	return 0;
}
