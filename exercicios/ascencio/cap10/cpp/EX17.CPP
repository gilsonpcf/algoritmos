    #include <stdio.h>
    
    int main()
    {
    	struct
    		 { int cod, dvd_loc, tot_dvd_loc;
    		   char nome[40], sexo, data_nas[11], RG[20], CPF[15], endereco[50], cidade[25], estado[3];
      		 } clientes[10];
    	int cont_c, i, j, cod_aux, qtd, op;
    	cont_c=0;
    	do
    	{   printf("\n1-Cadastrar cliente ");
    		printf("\n2-Mostrar clientes ");
    		printf("\n3-Remover cliente ");
    		printf("\n4-Devolucao de DVDs ");
    		printf("\n5-Efetuar locacao ");
    		printf("\n6-Mostrar clientes DVDs locados");
    		printf("\n7-Finalizar ");
    		printf("\nDigite sua opcao: ");
    		scanf("%d%*c", &op);
    		switch (op)
    		{ case 1: if (cont_c < 10)
    				  { printf("\nDigite codigo do cliente: ");
    					scanf("%d%*c", &cod_aux);
    					i=0;
    					while ((i < cont_c) && (clientes[i].cod != cod_aux))
    					 i++;
    					if (i < cont_c)
    					{ printf("\nCliente ja cadastrado! ");
    					  getchar();
    					}
    					else
    					{   clientes[cont_c].cod = cod_aux;
    						printf("Digite o nome do cliente: ");
    						scanf("%s%*c", clientes[cont_c].nome);
    						printf("Digite o sexo do cliente: ");
    						scanf("%c%*c", &clientes[cont_c].sexo);
    						printf("Digite a data de nascimento do cliente: ");
    						scanf("%s%*c", clientes[cont_c].data_nas);
    						printf("Digite o RG do cliente: ");
    						scanf("%s%*c", clientes[cont_c].RG);
    						printf( "Digite o CPF do cliente: ");
    						scanf("%s%*c", clientes[cont_c].CPF);
    						printf("Digite o endere‡o do cliente: ");
    						scanf("%s%*c", clientes[cont_c].endereco);
    						printf( "Digite a cidade do cliente: ");
    						scanf("%s%*c", clientes[cont_c].cidade);
    						printf("Digite o estado do cliente: ");
    						scanf("%s%*c", clientes[cont_c].estado);
    						clientes[cont_c].dvd_loc = 0;
    						clientes[cont_c].tot_dvd_loc = 0;
    						cont_c++;
    						printf("\nCliente cadastrado com sucesso");
    					}
    				}
    				else
    				 { printf("\n10 clientes ja foram cadastrados! ");
    				   getchar();
    				 }
    				break;
    				
    			case 2: for (i=0;i<cont_c;i++)
    					{ 	printf("\nCodigo: %d", clientes[i].cod);
    						printf("\nNome: %s", clientes[i].nome);
    						printf("\nSexo: %c", clientes[i].sexo);
    						printf("\nData de nascimento: %s", clientes[i].data_nas);
    						printf("\nRG: %s", clientes[i].RG);
    						printf("\nCPF: %s", clientes[i].CPF);
    						printf("\nEndere‡o: %s", clientes[i].endereco);
    						printf("\nCidade: %s", clientes[i].cidade);
    						printf("\nEstado: %s", clientes[i].estado);
    						printf("\nTotal de DVDs locados atualmente: %d", clientes[i].dvd_loc);
    						printf("\nTotal geral de DVDs locados : %d", clientes[i].tot_dvd_loc);
    						printf("\n\t\t\tTecle enter ...");
    						getchar();
    					 }
    					break;
    			case 3: printf("\nDigite o codigo do cliente a ser removido: ");
    					scanf("%d%*c", &cod_aux);
    					i=0;
    					while ((i < cont_c) && (clientes[i].cod != cod_aux))
    						 i++;
    					if (i < cont_c)
    						{ if (clientes[i].dvd_loc > 0)
    							{ printf("\nCliente nao pode ser excluido porque possui DVDs locados! ");
   								  getchar();
    							}
    						  else
    						  { for (j=i+1;j<cont_c;j++)
    							 { clientes[j-1]=clientes[j];
    							 }
    						    cont_c--;
    						    printf("\nCliente removido com sucesso");
    						    getchar();
    						  }
    						}
    					else
    					 { printf("\nCliente nao cadastrado! ");
    					   getchar();
    					 }
    					break;
    			case 4: printf("\nDigite o codigo do cliente: ");
    					scanf("%d%*c", &cod_aux);
    					i=0;
    					while ((i < cont_c) && (clientes[i].cod != cod_aux))
    						 i++;
    					if (i < cont_c)
    						{ if (clientes[i].dvd_loc == 0)
    							{ printf("\nEste cliente nao possui DVDs locados");
    							  getchar();
    							}
    						  else
    							 { do
    							   { printf("\nQuantos DVDs serao devolvidos? ");
    								 scanf("%d%*c", &qtd);
    								 if (qtd > clientes[i].dvd_loc)
    									{ printf("\nEste cliente possui apenas %d locados", clientes[i].dvd_loc);
    									  getchar();
    									}
    								} while (qtd > clientes[i].dvd_loc);
    								clientes[i].dvd_loc = clientes[i].dvd_loc - qtd;
    								printf("\nDevolucao realizada com sucesso");
    								getchar();
    							 }
    							}
    					else
    					 { printf("\nCliente nao cadastrado! ");
    					   getchar();
    					 }
    					break;
    			case 5: printf("\nDigite o c¢digo do cliente: ");
    					scanf("%d%*c", &cod_aux);
    					i=0;
    					while ((i < cont_c) && (clientes[i].cod != cod_aux))
    						 i++;
    					if (i < cont_c)
    					 { if (clientes[i].dvd_loc > 0)
    						{ printf("\nEste cliente nao pode fazer novas loca‡oes pois possui DVDs em seu poder");
    						getchar();
    						}
    					  else
    					   { printf("\nDigite n£mero de DVDs que serao locados: ");
    					     scanf("%d%*c", &qtd);
    					     clientes[i].dvd_loc = qtd;
    					     clientes[i].tot_dvd_loc = clientes[i].tot_dvd_loc + qtd;
    					     printf( "\nLocacao realizada com sucesso");
    					     getchar();
    					   }
  					    }
    				   else
    				    { printf("\nCliente nao cadastrado! ");
    					  getchar();
    					 }
    					break;
    			case 6: for (i=0;i<cont_c;i++)
    						{ if (clientes[i].dvd_loc > 0)
    							{ printf("\nCodigo: %d", clientes[i].cod);
    							  printf("\nNome: %s", clientes[i].nome);
    							  printf("\nSexo: %c", clientes[i].sexo);
    						      printf("\nData de nascimento: %s", clientes[i].data_nas);
    							  printf("\nRG: %s", clientes[i].RG);
    							  printf("\nCPF: %s", clientes[i].CPF);
    							  printf("\nEndereco: %s", clientes[i].endereco);
    							  printf("\nCidade: %s", clientes[i].cidade);
    							  printf("\nEstado: %s", clientes[i].estado);
    							  printf("\nTotal de DVDs locados atualmente: %d", clientes[i].dvd_loc);
    							  printf("\nTotal geral de DVDs locados : %d", clientes[i].tot_dvd_loc);
    							  printf("\n\t\t\tTecle enter ...");
    							  getchar();
    							}
    						 }
    		 } //fim switch
    	} while (op!=7);
      return 0;
    } //fim main
    
