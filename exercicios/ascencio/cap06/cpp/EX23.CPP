#include <stdio.h>
#include <ctype.h>

int main()
{   int corredor[24], janela[24], achou, i, num, op;
	char posicao;
	for (i=0;i<24;i++)
	{ corredor[i] = 0;
	  janela[i] = 0;
	}

	do
	{   printf("\n1- Vender passagem \n2- Mostrar mapa de ocupa‡ao do onibus \n3- Encerrar ");
		scanf("%d%*c", &op);
		if (op == 1)
			 { achou = 0;
			   for (i=0;i<24;i++)
			       { if (corredor[i] == 0 || janela[i] == 0)
						achou = 1;
			       }
			   if (achou == 0)
			      printf("\nOnibus lotado");
			   else
			 	 { do
					 { printf("\nDigite J se deseja poltrona na janela ou C se deseja poltrona no corredor ");
					   scanf("%c%*c", &posicao);
					   posicao = toupper(posicao);
					 } while (posicao != 'J' && posicao != 'C');
					do
					 { printf("\nDigite o numero da poltrona desejada (entre 1 e 24) ");
					   scanf("%d%*c", &num);
					 } while (num < 1 || num > 24);
					num = num - 1; //eh necessario diminuir 1 unidade porque os indices em C++ comecam em zero
					if (posicao == 'J' && janela[num] == 0)
					 { printf("\nVenda efetivada");
					   janela[num] = 1;
					 }
					else
					    if (posicao == 'C' && corredor[num] == 0)
						   { printf("\nVenda efetivada");
						     corredor[num] = 1;
						   }
					    else
						   printf("\nPoltrona ocupada");
				getchar();
			 }
          }
		if (op == 2)
			 { printf("  JANELA              CORREDOR\n");
			   for (i=0;i<24;i++)
			       { if (i+1 < 10)
						printf(" ");
				     if (janela[i] == 0)
						printf("%d- Livre            ", i+1);
				     else  printf("%d- Ocupada          ", i+1);
					 if (i+1 < 10)
						 printf(" ");
					 if (corredor[i] == 0)
					 	 printf("%d- Livre\n", i+1);
				     else printf("%d- Ocupada\n", i+1);
				 }
				getchar();
			 }
	} while (op != 3);
	return 0;
}
