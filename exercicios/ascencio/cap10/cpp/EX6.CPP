#include <stdio.h>

int main()
{ struct 
     { char nome[40];
       float venda_nov, venda_dez, venda_jan;
     } func[15];
  int i, pontos, maior, pos_maior, mes;
  float valor_total;
  printf("\nCADASTRANDO OS FUNCIONARIOS");
  for (i=0;i<15;i++)
    { printf("\nDigite o nome do %d.o funcionario ", i+1);
      scanf("%s%*c", func[i].nome);
      printf("Digite o valor vendido no mes de novembro pelo %d.o funcionario ", i+1);
      scanf("%f%*c", &func[i].venda_nov);
      printf("Digite o valor vendido no mes de dezembro pelo %d.o funcionario ", i+1);
      scanf("%f%*c", &func[i].venda_dez);
      printf("Digite o valor vendido no mes de janeiro pelo %d.o funcionario ", i+1);
	  scanf("%f%*c", &func[i].venda_jan);
    }
	printf("\nMOSTRANDO AS PONTUACOES MENSAIS DE CADA FUNCIONARIO ");
	for (i=0;i<15;i++)
	{ printf("\nFuncionario: %s", func[i].nome);
	  pontos = (int)(func[i].venda_nov/100);
	  printf("\nPontos de novembro = %d", pontos);
	  pontos = (int)(func[i].venda_dez/100);
	  printf("\nPontos de dezembro = %d", pontos);
	  pontos = (int)(func[i].venda_jan/100);
	  printf("\nPontos de janeiro = %d", pontos);
	  pontos = (int)(func[i].venda_nov/100) + (int)(func[i].venda_dez/100) + (int)(func[i].venda_jan/100);
	  printf("\nTotal de pontos = %d", pontos);
	  printf("\n\t\tTecle enter ...");
	  getchar();
	}
	printf("\nMOSTRANDO A PONTUACAO TOTAL DO MES DE NOVEMBRO ");
	pontos = 0;
	for (i=0;i<15;i++)
		pontos = pontos + (int)(func[i].venda_nov/100);
	printf("%d", pontos);
	printf("\nMOSTRANDO A PONTUACAO TOTAL DO MES DE DEZEMBRO ");
	pontos = 0;
	for (i=0;i<15;i++)
		pontos = pontos + (int)(func[i].venda_dez/100);
	printf("%d", pontos);
	printf("\nMOSTRANDO A PONTUACAO TOTAL DO MES DE JANEIRO ");
	pontos = 0;
	for (i=0;i<15;i++)
		pontos = pontos + (int)(func[i].venda_jan/100);
	printf("%d", pontos);
	printf("\nMOSTRANDO A MAIOR PONTUACAO ");
	maior = 0;
	for (i=0;i<15;i++)
		{ if ((int)(func[i].venda_nov/100) > maior)
				 { maior = (int)(func[i].venda_nov/100);
				   pos_maior = i;
				   mes = 1;
				 }
			 if ((int)(func[i].venda_dez/100) > maior)
					{ maior = (int)(func[i].venda_dez/100);
					  pos_maior = i;
					  mes = 2;
					}
			 if ((int)(func[i].venda_jan/100) > maior)
					{ maior = (int)(func[i].venda_jan/100);
					  pos_maior = i;
					  mes = 3;
					}
		}
	printf("\nFuncionario: %s", func[pos_maior].nome);
	printf("\nMaior pontuacao: %d", maior);
	if (mes == 1)
		 printf(" - No mes de novembro");
	if (mes == 2)
		 printf(" - No mes de dezembro");
	if (mes == 3)
		 printf(" - No mes de janeiro");
	printf("\nMOSTRANDO O VALOR TOTAL VENDIDO ");
	valor_total = 0;
	for (i=0;i<15;i++)
		valor_total = valor_total + func[i].venda_nov + func[i].venda_dez + func[i].venda_jan;
	printf("\nTotal vendido = %10.2f", valor_total);
	getchar();
	return 0;
}
