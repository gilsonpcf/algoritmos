#include <stdio.h>
int main()
{ int idade, tot_f, tot_m, soma1, cont_m1, cont_m2, cont_m3, cont_m4, cont_f1, menor_idade;
  float media_idade, calc;
  char sexo, exp;
  tot_f = 0;
  tot_m = 0;
  soma1 = 0;
  cont_m1 = 0;
  cont_m2 = 0;
  cont_f1 = 0;
  menor_idade = 0;
  printf("Digite a idade do candidato\n ");
  scanf("%d%*c",&idade);
	while (idade != 0)
		{ printf("\nDigite o sexo do candidato (M ou F): ");
			scanf("%c%*c",&sexo);
			printf("\nEste candidato possui experiência no serviço (S ou N)? ");
			scanf("%c%*c",&exp);
			if (sexo == 'F' && exp == 'S')
				{ if (tot_f == 0)
						menor_idade = idade;
					else if (idade < menor_idade)
								menor_idade = idade;
				}
			if (sexo == 'M')
				tot_m = tot_m + 1;
			if (sexo == 'F')
				tot_f = tot_f + 1;
			if (sexo == 'F' && idade < 35 && exp == 'S')
			 cont_f1 = cont_f1 + 1;
			if (sexo == 'M' && idade > 45)
			 cont_m1 = cont_m1 + 1;
			if (sexo == 'M' && exp == 'S')
				{ soma1 = soma1 + idade;
					cont_m2 = cont_m2 + 1;
				}
			printf("\nDigite a idade do candidato\n ");
			scanf("%d%*c",&idade);
		}
	printf("\nTotal de mulheres = %d",tot_f);
	printf("\nTotal de homens = %d",tot_m);
	if (cont_m2 == 0)
	 printf("\nNenhum homem com experiência");
	else
	 {
		 calc = soma1 / cont_m2;
 		 printf("\nMédia das idades dos homens com experiência no serviço = %5.2f",calc);
	 }
	if (tot_m == 0)
	 printf("\nNenhum homem");
	else
	 {
		 calc = cont_m1 * 100 / tot_m;
		 printf("\nPercentual de homens com mais de 45 anos = %5.2f%",calc);
	 }
	printf("\nTotal de mulheres com menos de 35 anos e com experiência no serviço = %d",cont_f1);
	printf("\nMenor idade entre as mulheres com experiência no serviço = %d",menor_idade);
	getchar();
	return 0;
}
