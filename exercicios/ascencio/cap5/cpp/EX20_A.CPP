#include <stdio.h>
int main()
{ int cont_f, cont_m;
  float cod, num_h, sal_b, sal_l, media_m, media_f;
  char sexo;
  printf("Digite o código do professor:  ");
  scanf("%f%*c",&cod);
  cont_m = 0;
  cont_f = 0;
  media_m = 0;
  media_f = 0;
  while (cod != 99999)
     { printf("Digite sexo do professor (M ou F): ");
       scanf("%c%*c",&sexo);
       printf("Digite o número de horas trabalhadas: ");
       scanf("%f%*c",&num_h);
			 sal_b = num_h * 30;
       if (sexo == 'M')
				{ 
                    sal_l = sal_b - (sal_b * 10 / 100);
					media_m = media_m + sal_l;
					cont_m = cont_m + 1;
				}
			 if (sexo == 'F')
				{ 
                    sal_l = sal_b - (sal_b * 5 / 100);
					media_f = media_f + sal_l;
					cont_f = cont_f + 1;
				}
			printf("\nCódigo do professor = %5.2f",cod);
			printf("\nSalário bruto = %5.2f",sal_b);
			printf("\nSalário líquido = %5.2f",sal_l);
			printf("\n\nDigite o código do professor: ");
  		    scanf("%f%*c",&cod);
   }
	if (cont_m == 0)
	 printf("\nNenhum professor do sexo masculino");
	 else
	 {
		 media_m = media_m / cont_m;
		 printf("\nMédia dos salários dos professores = %5.2f",media_m);
	 }
	if (cont_f == 0)
	 printf("\nNenhum professor do sexo feminino");
	else
	 {
		 media_f = media_f / cont_f;
		 printf("\n\nMédia dos salários das professoras = %5.2f",media_f);
	 }
	getchar();
	return 0;
}
