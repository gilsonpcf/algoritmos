#include <stdio.h>
int main()
{ int i, num_cri, meses, tot_f, tot_m, tot_24;
  float porc_f, porc_m, porc_24;
  char sexo;
  printf("\nDigite o n�mero de crian�as nascidas no per�odo\n");
  scanf("%d%*c",&num_cri);
  tot_m = 0;
  tot_f = 0;
  tot_24 = 0;
  for (i=1;i<=num_cri;i++)
     { printf("\nDigite o sexo da %d� crian�a: ",i);
       scanf("%c%*c",&sexo);
       printf("Digite o tempo de vida (em meses) da %d� crian�a: ",i);
       scanf("%d%*c",&meses);
       if (sexo == 'M')
		tot_m = tot_m + 1;
	   if (sexo == 'F')
		tot_f = tot_f + 1;
	   if (meses <= 24)
		tot_24 = tot_24 + 1;
		 }
	if (num_cri == 0)
	 printf("\nNenhuma crian�a digitada");
	else
		 {   porc_m = tot_m * 100 / num_cri;
			 porc_f = tot_f * 100 / num_cri;
			 porc_24 = tot_24 * 100 / num_cri;
			 printf("\nPercentual de crian�as do sexo feminino mortas %5.2f%",porc_f);
			 printf("\nPercentual de crian�as do sexo masculino mortas %5.2f%",porc_m);
			 printf("\nPercentual de crian�as com 24 meses ou menos mortas no per�odo %5.2f%",porc_24);
		 }
	getchar();
	return 0;
}

