    #include <stdio.h>
    #include <string.h>
    
    int main()
    { struct
        { char fone[20], nome_cli[30], endereco[40], comple[20], cep[11];
        } clientes[5];
      struct
        { int cod_piz;
          char nome_piz[20];
          float valor;
        } pizzas[3];
      struct
         { int num_ped, cod_piz, cod_mot, situacao;
           char fone[20];
         } pedidos[6];
      int cont_piz, cont_ped, cont_cli, i, j, k, op, ped_aux, piz_aux, total_mot[5], maior, sit_aux;
      float total_cli[5];
      char fone_aux[20];
      cont_piz = 0;
      cont_ped = 0;
      cont_cli = 0;
      do
       { 
         printf("\n1-Cadastro de cliente");
         printf("\n2-Cadastro de pizza");
         printf("\n3-Cadastro de pedido");
         printf("\n4-Despachar pizza");
         printf("\n5-Receber pizza");
    	 printf("\n6-Mostrar total gasto por cliente");
    	 printf("\n7-Mostrar todas os pedidos com uma determinada situacao");
    	 printf("\n8-Mostrar motoqueiro que fez mais entregas");
    	 printf("\n9-Finalizar");
    	 printf("\nDigite sua opcao: ");
    	 scanf("%d%*c", &op);
    	 switch(op)
    		 { case 1: if (cont_cli < 5)
    					{ printf("\nDigite o numero de telefone: ");
    					  scanf("%s%*c", fone_aux);
    					  i=0;
    					  while ((i<cont_cli) && (strcmp(clientes[i].fone,fone_aux)!=0))
    						  i++;
    					  if (i<cont_cli)
    					     { printf("\nCliente ja cadastrado!");
    					       getchar();
    					     }
    					  else
    					     { strcpy(clientes[cont_cli].fone,fone_aux);
    					       printf("Digite o nome do cliente: ");
    					       scanf("%s%*c", clientes[cont_cli].nome_cli);
    					       printf("Digite o endereco do cliente: ");
    					       scanf("%s%*c", clientes[cont_cli].endereco);
    					       printf("Digite o complemento do endereco: ");
    					       scanf("%sd%*c", clientes[cont_cli].comple);
    					       printf("Digite o cep do cliente: ");
    					       scanf("%s%*c", clientes[cont_cli].cep);
    					       cont_cli++;
    					     }
    				    }
    			       else
    				    { printf("\nJa foram cadastrados 5 clientes!");
    	                  getchar();
    				    }
    	           break;
    			 
               case 2: if (cont_piz < 3)
    					{ printf("\nDigite o codigo da pizza: ");
    					  scanf("%d%*c", &piz_aux);
    					  i=0;
    					  while ((i<cont_piz) && (pizzas[i].cod_piz!=piz_aux))
    						i++;
    					  if (i<cont_piz)
    					     { printf("\nPizza ja cadastrada!");
    					       getchar();
    					     }
    					  else
    					     { pizzas[cont_piz].cod_piz = piz_aux;
    					       printf("Digite o nome da pizza: ");
    					       scanf("%s%*c", pizzas[cont_piz].nome_piz);
    					       printf("Digite o preco da pizza: ");
    					       scanf("%f%*c", &pizzas[cont_piz].valor);
    					       cont_piz++;
    					     }
    				     }
    				   else
    					{ printf("\nJa foram cadastradas 3 pizzas!");
   						  getchar();
    					}
    				break;
    		   
               case 3: if (cont_ped < 6)
    					{ printf("\nDigite o numero do pedido: ");
    				      scanf("%d%*c", &ped_aux);
    					  i=0;
    					  while ((i<cont_ped) && (pedidos[i].num_ped!=ped_aux))
    						i++;
    					  if (i<cont_ped)
    						 { printf("\nPedido ja cadastrado!");
    						   getchar();
    						 }
    					  else
    					     { pedidos[cont_ped].num_ped = ped_aux;
    					       printf("Digite o telefone do cliente: ");
    					       scanf("%s%*c", pedidos[cont_ped].fone);
    					       i=0;
    					       while ((i<cont_cli) && (strcmp(clientes[i].fone,pedidos[cont_ped].fone)!=0))
    						       i++;
    				           if (i==cont_cli)
    						      { printf("\nCliente nao cadastrado!");
    					            getchar();
    						      }
    				           else
    					          { printf("Digite o codigo da pizza: ");
    					            scanf("%d%*c", &pedidos[cont_ped].cod_piz);
    					            i=0;
    					            while ((i<cont_piz) && (pizzas[i].cod_piz!=pedidos[cont_ped].cod_piz))
    					                  i++;
    					            if (i==cont_piz)
    					               { printf("\nPizza nao cadstrada!");
    					                 getchar();
    					               }
    					            else
    					               { pedidos[cont_ped].cod_mot = 0;
    					                 pedidos[cont_ped].situacao = 1;
    					                 cont_ped++;
    					               }
    				              }
    			             }
    					}
    				   else
    					{ printf("\nJa foram cadastradas 6 pedidos!");
    					  getchar();
    					}
    				 break;
    		
               case 4: printf("\nDigite o numero do pedido: ");
    	               scanf("%d%*c", &ped_aux);
    				   i=0;
    				   while ((i<cont_ped) && (pedidos[i].num_ped!=ped_aux))
    					 i++;
    				   if (i==cont_ped)
    					  { printf("\nPedido nao cadastrado!");
    				        getchar();
    					  }
    				   else
    					{ if (pedidos[i].situacao != 1)
    						 { printf("\nPedido ja foi despachado!");
    						   getchar();
    						 }
    					  else
    					    { do { printf("\nDigite o codigo do motoqueiro: (entre 1 e 5) ");
    							   scanf("%d%*c", &pedidos[i].cod_mot);
    						     } while ((pedidos[i].cod_mot < 1) || (pedidos[i].cod_mot > 5));
    					      pedidos[i].situacao=2;
    					    }
    				    }
    				   break;
    				
               case 5: printf("\nDigite o numero do pedido: ");
    				 scanf("%d%*c", &ped_aux);
    				 i=0;
    				 while ((i<cont_ped) && (pedidos[i].num_ped!=ped_aux))
    					 i++;
    				 if (i==cont_ped)
    					{ printf("\nPedido nao cadastrado!");
   						  getchar();
    					}
    				else
    					{ if (pedidos[i].situacao == 1)
    						 { printf("\nPedido ainda nao foi despachado!");
    						   getchar();
    						 }
    					else
    					 { if (pedidos[i].situacao == 3)
    						{ printf("\nPedido ja foi entregue!");
    					      getchar();
    						}
    					 else
    						pedidos[i].situacao=3;
    				 }
    				}
    				break;
			 case 6: for (i=0;i<5;i++)
						 total_cli[i]=0;
					 for (i=0;i<cont_ped;i++)
						 { j=0;
							 while ((j<cont_cli) && (strcmp(clientes[j].fone,pedidos[i].fone)!=0))
								 j++;
							 k=0;
							 while ((k<cont_piz) && (pizzas[k].cod_piz!=pedidos[i].cod_piz))
								 k++;
							 total_cli[j]=total_cli[j]+pizzas[k].valor;
						}
					 for (i=0;i<cont_cli;i++)
						 { printf("\n\nCliente: %s", clientes[i].nome_cli);
						   printf("\ntotal gasto ==> %10.2f", total_cli[i]);
						 }
					 getchar();
					 break;
				 case 7: printf("\ndigite o c¢digo da situacao (1-Em preparo, 2-A caminho, 3-Entregue) ");
						 scanf("%d%*c", &sit_aux);
						 if (cont_ped == 0)
							 printf("\nNao existe pedido cadastrado");
						 else
						 { for (i=0;i<cont_ped;i++)
								{ if (pedidos[i].situacao == sit_aux)
									{ printf("\n\nPedido: %d", pedidos[i].num_ped);
									  j=0;
									  while ((j<cont_piz) && (pizzas[j].cod_piz!=pedidos[i].cod_piz))
										j++;
									  printf("\nPizza pedida: %s", pizzas[j].nome_piz);
									}
								}
						}
						getchar();
						break;
				 case 8: for (i=0;i<5;i++)
								total_mot[i]=0;
						 for (i=0;i<cont_ped;i++)
							total_mot[pedidos[i].cod_mot-1] = total_mot[pedidos[i].cod_mot-1] + 1;
						 for (i=0;i<5;i++)
							{ if (i==0)
								 { maior=total_mot[i];
								   j=i;
								 }
							  else
								 { if (total_mot[i] > maior)
									 { maior = total_mot[i];
									   j=i;
									 }
								 }
							 }
							 if (maior == 0)
								 printf("\nNenhuma entrega foi realizada");
						     else
							   {  printf("\n\nO motoqueiro %d fez mais entregas", j+1);
							      printf("\nTotal geral de entregas: %10.2f ", maior);
							 }
						 getchar();
					 } //fim switch()
    	 } while (op!=9);
    	 return 0;
    } //fim main
    
    
