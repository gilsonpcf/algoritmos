#include <stdio.h>
int main()
{ int i, num_cri, meses, tot_f, tot_m, tot_24;
  float porc_f, porc_m, porc_24;
  char sexo;
  printf("\nDigite o número de crianças nascidas no período\n");
  scanf("%d%*c",&num_cri);
  tot_m = 0;
  tot_f = 0;
  tot_24 = 0;
  for (i=1;i<=num_cri;i++)
     { printf("\nDigite o sexo da %dª criança: ",i);
       scanf("%c%*c",&sexo);
       printf("Digite o tempo de vida (em meses) da %dª criança: ",i);
       scanf("%d%*c",&meses);
       if (sexo == 'M')
		tot_m = tot_m + 1;
	   if (sexo == 'F')
		tot_f = tot_f + 1;
	   if (meses <= 24)
		tot_24 = tot_24 + 1;
		 }
	if (num_cri == 0)
	 printf("\nNenhuma criança digitada");
	else
		 {   porc_m = tot_m * 100 / num_cri;
			 porc_f = tot_f * 100 / num_cri;
			 porc_24 = tot_24 * 100 / num_cri;
			 printf("\nPercentual de crianças do sexo feminino mortas %5.2f%",porc_f);
			 printf("\nPercentual de crianças do sexo masculino mortas %5.2f%",porc_m);
			 printf("\nPercentual de crianças com 24 meses ou menos mortas no período %5.2f%",porc_24);
		 }
	getchar();
	return 0;
}

