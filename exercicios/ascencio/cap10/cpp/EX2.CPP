#include <string.h>
#include <stdio.h>

int main()
{ struct 
     { int cod;
       char desc[20];
     } tipos[4];
  struct
     { int num, cod_serv, cod_cliente;
       float valor;
     } serv[30][3] ;
  int i, j, op, codigo_serv, achou, achou2, dia, codigo_cliente, num_serv, valida, k;
  float valor_inicial, valor_final, valor_serv;
  char desc_serv[20];
  for (i=0;i<4;i++)
    { tipos[i].cod = 0;
      strcpy(tipos[i].desc, "\0");
    }
  for (i=0;i<30;i++)
    { for (j=0;j<3;j++)
				{ serv[i][j].num = 0;
					serv[i][j].valor = 0;
					serv[i][j].cod_serv = 0;
					serv[i][j].cod_cliente = 0;
				}
		}
	do
		{   printf("\nMenu de Opcoes");
			printf("\n1 - Cadastrar tipos de servicos");
			printf("\n2 - Cadastrar servicos prestados");
			printf("\n3 - Mostrar os servicos prestados em um determinado dia");
			printf("\n4 - Mostrar os servicos prestados dentro de um intervalo de valor");
			printf("\n5 - Mostrar um relatorio geral, separado por dia");
			printf("\n6 - Sair");
			printf("\nDigite sua opcao ");
			scanf("%d%*c", &op);
			if ((op < 1) || (op > 6))
				 printf("\nOpcao Invalida");
			if (op == 1)
				 {   printf("\nDigite o codigo do servico a ser cadastrado ");
					 scanf("%d%*c", &codigo_serv);
					 achou = -1;
					 for (i=0;i<4;i++)
							 { if (tipos[i].cod == 0)
								  achou = i;
							 }
					 if (achou == -1)
							printf("\nCadastro de tipos de servicos lotado ");
					 else
							{ for (i=0;i<4;i++)
										{ if (tipos[i].cod == codigo_serv)
									          achou = -1;
										}
							 if (achou == -1)
									printf("\nJa existe tipo de servico cadastrado com este codigo");
							 else
									{ printf("Digite a descricao do tipo de servico a ser cadastrado ");
									  scanf("%s%*c", tipos[achou].desc);
									  tipos[achou].cod = codigo_serv;
									  printf("\nTipo de servico cadastrado com sucesso");
									}
						}
					getchar();
					}
		if (op == 2)
			 {   printf("\nDigite o dia em que deseja cadastrar o servi‡o prestado ");
				 scanf("%d%*c", &dia);
				 dia--;
				 achou = -1;
				 for (j=0;j<3;j++)
						 { if (serv[dia][j].num == 0)
							   achou = j;
						 }
				 if (achou == -1)
					printf("\nTodos os servicos prestados neste dia ja foram cadastrados");
				 else
						{   printf("Digite o c¢digo do servi‡o a ser prestado ");
							scanf("%d%*c", &codigo_serv);
							valida = 0;
							for (i=0;i<4;i++)
									{ if (tipos[i].cod == codigo_serv)
								        valida = 1;
									}
							if (valida == 0)
								 printf("\nCodigo de servico invalido");
							else
								 {   printf("Digite o numero do servico ");
									 scanf("%d%*c", &serv[dia][achou].num);
									 printf("Digite o valor do servico ");
									 scanf("%f%*c", &serv[dia][achou].valor);
									 printf("Digite o c¢digo do cliente ");
									 scanf("%d%*c", &serv[dia][achou].cod_cliente);
									 serv[dia][achou].cod_serv = codigo_serv;
									 printf("Servico prestado cadastrado com sucesso ");
								 }
					 }
				 getchar();
			 }
		 if (op == 3)
				{   printf("\nDigite o dia em que deseja consultar os servicos prestados ");
					scanf("%d%*c", &dia);
					dia--;
					achou = 0;
					for (j=0;j<3;j++)
							{ if (serv[dia][j].num != 0)
						         achou = 1;
							}
					if (achou == 0)
						printf("\nNenhum servico foi prestado neste dia ");
					else
						 { printf("\nServicos prestados no dia %d", dia+1);
							 for (j=0;j<3;j++)
									 { if (serv[dia][j].num != 0)
												{   printf("\n\nNumero servico: %d   Valor servico: %10.2f", serv[dia][j].num, serv[dia][j].valor);
													printf ("\nCodigo servico: %d ", serv[dia][j].cod_serv);
													for (i=0;i<4;i++)
															{ if (tipos[i].cod == serv[dia][j].cod_serv)
														          printf(" %s ", tipos[i].desc);
															}
													printf("\nCodigo cliente: %d ", serv[dia][j].cod_cliente);
												}
									 }
						}
				 getchar();
			 }
		if (op == 4)
			 { printf("\nDigite o valor inicial ");
			   scanf("%f%*c", &valor_inicial);
			   printf("Digite o valor final ");
			   scanf("%f%*c", &valor_final);
			   achou = 0;
			   for (i=0;i<30;i++)
				 { for (j=0;j<3;j++)
					 { if ((serv[i][j].valor >= valor_inicial) && (serv[i][j].valor <= valor_final))
						{ achou = 1;
			  			  printf("\n\nNumero servico: %d   Valor servico: %10.2f", serv[i][j].num, serv[i][j].valor);
						  printf("\nCodigo servico: %d", serv[i][j].cod_serv);
						  for (k=0;k<4;k++)
							{ if (tipos[k].cod == serv[i][j].cod_serv)
								 printf("  %s", tipos[k].desc);
							}
						  printf("\nCodigo cliente: %d", serv[i][j].cod_cliente);
						}
					  }
				  }
				if (achou == 0)
				    printf("\nNenhum servico prestado esta entre os valores citados ");
                getchar();
			 }
		 if (op == 5)
			{ achou = 0;
			  for (i=0;i<30;i++)
				{ achou2 = 0;
			      for (j=0;j<3;j++)
					{ if (serv[i][j].num != 0)
						 { achou = 1;
						   achou2 = 1;
						   printf("\n\nDia %d", i+1);
						   printf("\nNumero servico: %d   Valor servico: %10.2f", serv[i][j].num, serv[i][j].valor);
						   printf("\nCodigo servico: %d", serv[i][j].cod_serv);
						   for (k=0;k<4;k++)
						 	 { if (tipos[k].cod == serv[i][j].cod_serv)
							       printf("  %d", tipos[k].desc);
							 }
						   printf("\nCodigo cliente: %d", serv[i][j].cod_cliente);
						 }
					}
				  if (achou2 == 1)
					 { printf("\n\nTecle enter ...");
				       getchar();
					 }
				}
				if (achou == 0)
					 { printf("\nNenhum servico prestado foi cadastrado ");
					   getchar();
					 }
			 }
	} while (op!=6);
	return 0;
}

