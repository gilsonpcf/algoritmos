#include <stdio.h>
int main()
{ int cont_time, cont_jog, idade, qtde, total80;
  float peso, alt, media_altura, porc, media_idade;
  qtde = 0;
  total80 = 0;
  media_altura = 0;
  for (cont_time=1;cont_time<=5;cont_time++)
     { 
       media_idade = 0;
       for (cont_jog=1;cont_jog<=11;cont_jog++)
				{ 
                    printf("\nDigite a idade do %dº jogador: ",cont_jog);
					scanf("%d%*c",&idade);
					printf("Digite o peso do %dº jogador: ",cont_jog);
					scanf("%f%*c",&peso);
					printf("Digite a altura do %dº jogador: ",cont_jog);
					scanf("%f%*c",&alt);
					if (idade < 18)
						qtde = qtde + 1;
					media_idade = media_idade + idade;
					media_altura = media_altura + alt;
					if (peso > 80)
						total80 = total80 + 1;
				}
			media_idade = media_idade/11;
			printf("\nMédia das idade do %dº time = %5.2f\n",cont_time,media_idade);
		 }
	printf("\nQuantidade de jogadores com idade inferior a 18 anos = %d",qtde);
	media_altura = media_altura/55;
	printf("\nMédia das alturas de todos os jogadores = %5.2f",media_altura);
	porc = total80 *100/55;
	printf("\nPorcentagem de jogadores com peso superior a 80 quilos = %5.2f%",porc);
	getchar();
	return 0;
}
