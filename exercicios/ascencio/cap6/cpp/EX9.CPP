#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{ int voo[12], lugares[12];
	char origem[12][30], destino[12][30], local [30];
	int i, j, op, op2, num_voo;

	for (i=0;i<12;i++)
	{   printf("Digite o numero do %d.o voo: ", i+1);
		scanf("%d%*c", &voo[i]);
		printf("Digite a origem do %d.o voo: ", i+1);
		scanf("%s%*c", origem[i]);
		for (j=0; j< strlen(origem[i]); j++)
		{ origem[i][j] = toupper(origem[i][j]);
        }
		printf("Digite o destino do %d.o voo: ", i+1);
		scanf("%s%*c", destino[i]);
		for (j=0; j< strlen(destino[i]); j++)
		{ destino[i][j] = toupper(destino[i][j]);
        }
		printf("Digite a quantidade de lugares do %d.o voo: ", i+1);
		scanf("%d%*c", &lugares[i]);
	}
	do
	{   printf("\n1- Consultar");
		printf("\n2- Reservar");
		printf("\n3- Finalizar");
		printf("\nDigite sua opcao: ");
		scanf("%d%*c", &op);
		if (op == 1)
			{   printf("\n1- Consulta por voo");
				printf("\n2- Consulta por origem");
				printf("\n3- Consulta por destino");
				printf("\nDigite sua opcão: ");
				scanf("%d%*c", &op2);
				if (op2 == 1)
					{   printf("\nDigite o numero de voo: ");
						scanf("%d%*c", &num_voo);
						i = 0;
						while (i < 12 && voo[i] != num_voo)
						{
							 i++;
						}
						if (i == 12)
							{ printf("\nVoo inexistente !");
							  getchar();
							}
						else
							{   printf("\nNumero do voo: %d", voo[i]);
								printf("\nLocal de origem: %s", origem[i]);
								printf("\nLocal de destino: %s", destino[i]);
								printf("\nLugares disponiveis: %d", lugares[i]);
								getchar();
							}
					 }
				 if (op2 == 2)
					 {   printf("\nDigite o local de origem: ");
						 scanf("%s%*c", local);
						 for (i=0; i<strlen(local); i++)
						     { local[i] = toupper(local[i]);
                             }
						 for (i=0;i<12;i++)
							 { if (strcmp(local, origem[i]) == 0)
									 {   printf("\nNumero do voo: %d", voo[i]);
										 printf("\nLocal de origem: %s", origem[i]);
										 printf("\nLocal de destino: %s", destino[i]);
										 printf("\nLugares disponiveis: %d", lugares[i]);
									 }
							 }
						 getchar();
					 }
				 if (op2 == 3)
						{   printf("\nDigite o local de destino: ");
							scanf("%s%*c", local);
							for (i=0; i<strlen(local); i++)
						     { local[i] = toupper(local[i]);
                             }
							for (i=0;i<12;i++)
								{ if (strcmp(local, destino[i]) == 0)
										 {   printf("\nNumero do voo: %d", voo[i]);
											 printf("\nLocal de origem: %s", origem[i]);
											 printf("\nLocal de destino: %s", destino[i]);
											 printf("\nLugares disponiveis: %d", lugares[i]);
										 }
								}
							getchar();
						}
			}
		if (op == 2)
		{   printf("\nDigite o numero do voo desejado: ");
			scanf("%d%*c", &num_voo);
			i = 0;
			while (i < 12 && voo[i] != num_voo)
				{
					i++;
				}
			if (i == 12)
				{ printf("\nNumero de voo nao encontrado !");
				  getchar();
				}
			else
				{   if (lugares[i] == 0)
						 printf("\nVoo lotado !");
					else
						 { lugares[i] = lugares[i] - 1;
						   printf("\nReserva confirmada !");
						 }
					getchar();
				}
		 }
	} while (op != 3);
	return 0;
}
