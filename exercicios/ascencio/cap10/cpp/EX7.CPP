#include <stdio.h>
#include <ctype.h>

int main()
{ struct
     { int cod, num_aula;
       char sexo;
     } prof[10];
   float sal_bruto, desc, sal_liq, ma_masc, ma_fem, soma_masc, soma_fem;
   int qt_masc, qt_fem, i;
   for (i=0;i<10;i++)
     { prof[i].cod = 0;
       prof[i].num_aula = 0;
       prof[i].sexo = ' ';
     }
   soma_masc = 0;
   soma_fem = 0;
   qt_masc = 0;
   qt_fem = 0;
   printf("\nDigitando os dados dos 10 professores \n");
   for (i=0;i<10;i++)
     { printf("\n%d.o professor", i+1);
       printf("\nDigite o codigo ");
       scanf("%d%*c", &prof[i].cod);
       printf("Digite o numero de aulas ");
       scanf("%d%*c", &prof[i].num_aula);
       printf("Digite o sexo ");
       scanf("%c%*c", &prof[i].sexo);
       prof[i].sexo=toupper(prof[i].sexo);
       while ((prof[i].sexo != 'F') && (prof[i].sexo != 'M'))
				 { printf("\nSexo invalido. Digite F para feminino ou M para masculino ");
	               scanf("%c%*c", &prof[i].sexo);
				   prof[i].sexo=toupper(prof[i].sexo);
				 }
		 }
	 printf("\nMostrando a listagem com os salarios dos professores ");
	 for (i=0;i<10;i++)
		 { printf("\n%d.o professor", i+1);
			 printf("\nCodigo = %d", prof[i].cod);
			 sal_bruto = 40.50 * prof[i].num_aula;
			 printf("\nSalario bruto = %10.2f", sal_bruto);
			 if (prof[i].sexo == 'F')
					{ if (prof[i].num_aula <= 70)
							 desc = sal_bruto * 7/100;
						else
							 desc = sal_bruto * 5/100;
					}
			 else
					{ if (prof[i].num_aula <= 70)
							 desc = sal_bruto * 10/100;
						else
							 desc = sal_bruto * 8/100;
					}
			 printf("\nDesconto = %10.2f", desc);
			 sal_liq = sal_bruto - desc;
			 printf("\nSalario liquido = %10.2f", sal_liq);
			 if (prof[i].sexo == 'F')
					{ soma_fem = soma_fem + sal_bruto;
						qt_fem = qt_fem + 1;
					}
			 else
					{ soma_masc = soma_masc + sal_bruto;
						qt_masc = qt_masc + 1;
					}
			 printf("\n\t\tTecle enter ...");
			 getchar();
	}
	if (qt_fem > 0)
		 ma_fem = soma_fem / qt_fem;
	else
		 ma_fem = 0;
	if (qt_masc > 0)
		 ma_masc = soma_masc / qt_masc;
	else
		 ma_masc = 0;
	printf("\nMedia dos salarios brutos dos professores do sexo feminino = %10.2f", ma_fem);
	printf("\nMedia dos salarios brutos dos professores do sexo masculino = %10.2f", ma_masc);
	getchar();
	return 0;
}
