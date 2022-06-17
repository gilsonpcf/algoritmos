#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main()
{ struct clientes
	 { int cod_cliente;
	   char ende[30], fone[20];
	 } cliente[3];
  struct produtos
	 { int cod_produto, qtde_est;
	   float preco_unit;
	   char desc[20], unid[5];
	 } produto[6];
  struct notas
	 { int numero_nf, cod_cliente;
	   float total;
	 } nota[5];
  struct item
	 { int numero_nf, cod_prod, qtde;
	   float preco_vend;
	 } itens_nota[10];

	int i, j, k, h, cont, achou, op1, op2, posi;
	int cliente_livre, produto_livre, nota_livre, item_livre, cod_produto, codigo, pre, qtde, num_nota;
	float valor, valor_inicial, valor_final;
	char endere[30], telefone[20], desc[20], unidade[5], resp;

	for (i=0;i<3;i++)
		{ cliente[i].cod_cliente = 0;
	      strcpy(cliente[i].ende,"\0");
	      strcpy(cliente[i].fone,"\0");
		}

	for (i=0;i<6;i++)
			{ produto[i].cod_produto = 0;
			  produto[i].preco_unit = 0;
			  produto[i].qtde_est = 0;
			  strcpy(produto[i].desc,"\0");
			  strcpy(produto[i].unid,"\0");
			}
	for (i=0;i<5;i++)
			{ nota[i].numero_nf = 0;
			  nota[i]. cod_cliente = 0;
			  nota[i].total = 0;
			}
	for (i=0;i<10;i++)
			{ itens_nota[i].numero_nf = 0;
			  itens_nota[i].cod_prod = 0;
			  itens_nota[i].qtde = 0;
			  itens_nota[i].preco_vend = 0;
			}
	cliente_livre = 0;
	produto_livre = 0;
	nota_livre = 0;
	item_livre = 0;
	do
		{
	      printf("\nMenu de Opcoes");
		  printf("\n1 - Cadastros");
		  printf("\n2 - Movimentacoes");
		  printf("\n3 - Consultas");
		  printf("\n4 - Sair");
		  printf("\nDigite sua opcao ");
		  scanf("%d%*c", &op1);
		  if ((op1 < 1) || (op1 > 4))
			 printf("\nOpcao invalida. Digite novamente. ");
		  if (op1 == 1)
			 { do
				{ printf("Sub-menu de Opcoes");
				  printf("\n1 - Incluir clientes");
				  printf("\n2 - Alterar clientes");
				  printf("\n3 - Excluir clientes");
				  printf("\n4 - Incluir produtos");
				  printf("\n5 - Alterar produtos");
				  printf("\n6 - Excluir produtos");
				  printf("\n7 - Sair ");
				  printf("\nDigite sua opcao ");
				  scanf("%d%*c", &op2);
				  if ((op2 < 1) || (op2 > 7))
					printf("\nOpcao invalida. Digite novamente");
				  if (op2 == 1)
					{ printf("\nInclusao de Clientes");
					  if (cliente_livre == 3)
					    { printf("\nCadastro de clientes lotado");
						  getchar();
						}
					  else
						 { printf("\nDigite o codigo do cliente a ser incluido ");
						   scanf("%d%*c", &codigo);
						   achou = 0;
						   for (i=0;i<3;i++)
							{ if (cliente[i].cod_cliente == codigo)
								achou = 1;
							}
						   if (achou == 1)
							 { printf("\nJa existe cliente cadastrado com este codigo");
							   getchar();
							 }
						   else
						     { printf("Digite o endereco do cliente ");
						       scanf("%s%*c", endere);
						       printf("Digite o telefone do cliente ");
						       scanf("%s%*c", telefone);
						       cliente[cliente_livre].cod_cliente = codigo;
					           strcpy(cliente[cliente_livre].ende,endere);
				               strcpy(cliente[cliente_livre].fone,telefone);
						       printf("\nCliente cadastrado com sucesso!");
						       cliente_livre++;
					          }
				         }
			         } //fim if op2=1

                  if (op2 == 2)
		             { printf("\nAlteracao de Clientes");
			           if (cliente_livre == 0)
				          { printf("\nCadastro de clientes vazio");
			                getchar();
			              }
		               else
			              { printf("\nDigite o codigo do cliente a ser alterado ");
			                scanf("%d%*c", &codigo);
				            achou = 0;
				            for (i=0;i<cliente_livre;i++)
				                { if (cliente[i].cod_cliente == codigo)
				                     { achou = 1;
                                       posi = i;
					                 }
				                }
				            if (achou == 0)
				               { printf("\nNao existe cliente cadastrado com este codigo");
				                 getchar();
				               }
			                else
				              { printf("Digite o novo endereco do cliente ");
				                scanf("%s%*c", &endere);
				                printf("Digite o novo telefone do cliente ");
				                scanf("%s%*c", &telefone);
			                    strcpy(cliente[posi].ende,endere);
				                strcpy(cliente[posi].fone,telefone);
				                printf("\nCliente alterado com sucesso!");
	                         }
	                     }
                     }//fim if op2=2

                  if (op2 == 3)
					 { printf("\nExclusao de Clientes");
					   if (cliente_livre == 0)
						{ printf("\nCadastro de clientes vazio");
						  getchar();
						}
					   else
					    { printf("\nDigite o codigo do cliente a ser excluido ");
					      scanf("%d%*c", &codigo);
						  achou = 0;
						  for (i=0;i<cliente_livre;i++)
						  { if (cliente[i].cod_cliente == codigo)
							   { achou = 1;
							     posi = i;
							   }
						  }
						  if (achou == 0)
						     { printf("\nNao existe cliente cadastrado com este codigo");
						       getchar();
						     }
						  else
						     { achou = 0;
						       for (j=0;j<nota_livre;j++)
							       { if (nota[j].cod_cliente == codigo)
								        achou = 1;
							       }
						       if (achou == 1)
						          { printf("\nCliente nao pode ser excluido, possui notas");
							        getchar();
						          }
						       else
						         { for (j=posi;j<cliente_livre-1;j++)
							          { cliente[j].cod_cliente = cliente[j+1].cod_cliente;
							            strcpy(cliente[j].ende,cliente[j+1].ende);
							            strcpy(cliente[j].fone,cliente[j+1].fone);
							          }
					               cliente[cliente_livre-1].cod_cliente = 0;
							       strcpy(cliente[cliente_livre-1].ende,"\0");
							       strcpy(cliente[cliente_livre-1].fone,"\0");
							       printf("\nCliente excluido com sucesso!");
						           cliente_livre--;
						         }
					         }
                        }
				     }//fim if op2=3

                  if (op2 == 4)
					 { printf("\nInclusao de Produtos");
					   if (produto_livre == 6)
						 { printf("\nCadastro de produtos lotado");
					       getchar();
						 }
					   else
					     { printf("\nDigite o codigo do produto a ser incluido ");
					       scanf("%d%*c", &codigo);
					       achou = 0;
						   for (i=0;i<5;i++)
						     { if (produto[i].cod_produto == codigo)
							       achou = 1;
						     }
						   if (achou == 1)
							  { printf("\nJa existe produto cadastrado com este codigo");
							    getchar();
							  }
						   else
						     { printf("Digite a descricao do produto ");
						       scanf("%s%*c", &desc);
						       printf("Digite a unidade do produto ");
						       scanf("%s%*c", unidade);
						       printf("Digite o preco unitario do produto ");
						       scanf("%f%*c", &pre);
					           printf("Digite a quantidade de estoque do produto ");
						       scanf("%d%*c", &qtde);
						       produto[produto_livre].cod_produto = codigo;
						       strcpy(produto[produto_livre].desc,desc);
						       strcpy(produto[produto_livre].unid,unidade);
						       produto [produto_livre].preco_unit = pre;
						       produto[produto_livre].qtde_est = qtde;
						       printf("\nProduto cadastrado com sucesso!");
					           produto_livre++;
						     }
				         }
				     }//fim if op2=4

                  if (op2 == 5)
				     { printf("\nAlteracao de Produtos");
					   if (produto_livre == 0)
						{ printf("\nCadastro de produtos vazio");
						  getchar();
						}
					   else
						{ printf("\nDigite o c¢digo do produto a ser alterado ");
						  scanf("%d%*c", &codigo);
						  achou = 0;
						  for (i=0;i<produto_livre;i++)
						    { if (produto[i].cod_produto == codigo)
							     { achou = 1;
							       posi = i;
							     }
						    }
				          if (achou == 0)
						     { printf("\nNao existe produto cadastrado com este codigo");
					           getchar();
						     }
						  else
						    { printf("Digite a nova descricao do produto ");
						      gets(desc);
						      printf("Digite a nova unidade do produto ");
						      gets(unidade);
						      printf("Digite o novo preco unitario ");
						      scanf("%fs%*c", &pre);
						      printf("Digite a nova quantidade em estoque ");
						      scanf("%d%*c", &qtde);
						      strcpy(produto[posi].desc,desc);
						      strcpy(produto[posi].unid,unidade);
						      produto[posi].preco_unit = pre;
						      produto[posi].qtde_est = qtde;
						      printf("\nProduto alterado com sucesso!");
						    }
					    }
				     }//fim if op2=5

                 if (op2 == 6)
					 { printf("\nExclusao de Produtos");
					   if (produto_livre == 0)
						 { printf("\nCadastro de produtos vazio");
						   getchar();
						 }
					   else
					    { printf("\nDigite o codigo do produto a ser excluido ");
						  scanf("%d%*c", &codigo);
						  achou = 0;
						  for (i=0;i<produto_livre;i++)
							{ if (produto[i].cod_produto == codigo)
								{ achou = 1;
								  posi = i;
								}
							}
						  if (achou == 0)
							{ printf("\nNao existe produto cadastrado com este codigo");
							  getchar();
							}
						  else
							{ achou = 0;
							  for (j=0;j<item_livre;j++)
							     { if (itens_nota[j].cod_prod == codigo)
								      achou = 1;
							     }
						      if (achou == 1)
							     { printf("\nNao pode excluir produto, faz parte de alguma nota ");
								   getchar();
							     }
							  else
							     { for (j=posi;j<produto_livre-1;j++)
								     { produto[j].cod_produto = produto[j+1].cod_produto;
									   strcpy(produto[j].desc,produto[j+1].desc);
								       strcpy(produto[j].unid,produto[j+1].unid);
								       produto[j].preco_unit = produto[j+1].preco_unit;
								       produto[j].qtde_est = produto[j+1].qtde_est;
								     }
								   produto[produto_livre - 1].cod_produto = 0;
								   strcpy(produto[produto_livre - 1].desc,"\0");
								   strcpy(produto[produto_livre - 1].unid,"\0");
								   produto[produto_livre - 1].preco_unit = 0;
								   produto[produto_livre - 1].qtde_est = 0;
							       printf("\nProduto excluido com sucesso!");
								   produto_livre--;
								 }
							}
					     }
				     }//fim if op2=6
		         } while (op2 != 7);
	         } // fim if op1=1

	      if (op1 == 2)
		     { printf("\nCadastro de notas de saida ");
			   printf("\nDigite o numero da nota ");
		       scanf("%d%*c", &num_nota);
			   if (nota_livre == 5)
				{ printf("\nCadastro de notas lotado");
			      getchar();
			    }
			   else
				{ achou = 0;
				  for (i=0;i<5;i++)
				    { if (nota[i].numero_nf == num_nota)
					     achou = 1;
				    }
				  if (achou == 1)
					{ printf("\nJa existe nota fiscal cadastrada com este numero ");
					  getchar();
					}
				  else
				 	{ printf("Digite o codigo do cliente ");
					  scanf("%d%*c", &codigo);
					  achou = 0;
					  for (i=0;i<cliente_livre;i++)
					    { if (cliente[i].cod_cliente == codigo)
						     achou = 1;
					     }
					  if (achou == 0)
						{ printf("\nEste cliente nao esta cadastrado ");
						  getchar();
						}
					  else
						{ nota[nota_livre].numero_nf = num_nota;
						  nota[nota_livre].cod_cliente = codigo;
						  cont = 0;
						  resp = 'S';
						  while ((cont != 2) && (resp == 'S'))
						   { printf("Digite o codigo do produto ");
						     scanf("%d%*c", &cod_produto);
						     achou = 2;
						     for (k=0;k<produto_livre;k++)
						       { if (produto[k].cod_produto == cod_produto)
							        { achou = 0;
							          posi=k;
							          for (h=0;h<item_livre;h++)
							            { if ((itens_nota[h].numero_nf == num_nota) && (itens_nota[h].cod_prod == cod_produto))
					                        { printf("\nProduto ja existe nesta nota ");
								              achou = 1;
								            }
							            }
						            }
					           }
					         if (achou == 0)
					            { printf("Digite a quantidade ");
					              scanf("%d%*c", &qtde);
					              nota[nota_livre].total = nota[nota_livre].total + qtde * produto[posi].preco_unit;
					              itens_nota[item_livre].numero_nf = num_nota;
				                  itens_nota[item_livre].cod_prod = cod_produto;
					              itens_nota[item_livre].qtde = qtde;
					              itens_nota[item_livre].preco_vend = qtde * produto[posi].preco_unit;
					              item_livre++;
					              cont++;
					             }
					         else if (achou == 2)
			                        { printf("\nProduto nao cadastrado");
							          getchar();
							        }
					         if (cont < 2)
						        { printf("\nDeseja cadastrar outro produto nesta nota (S-sim ou N-nao)");
						          scanf("%c%*c", &resp);
					              resp = toupper(resp);
					            }
			               }//fim while
						  nota_livre++;
					    }
					}
				}
             }//fim if op1=2

	      if (op1 == 3)
		     { do
			     { 
				   printf("\nSub-menu de Opcoes");
			       printf("\n1 - Consultar todos os produtos com precos entre dois valores");
				   printf("\n2 - Consultar todas as notas de um cliente");
				   printf("\n3 - Consultar todas as notas com total superior a um determinado valor");
				   printf("\n4 - Sair ");
				   printf("\nDigite sua opcao ");
				   scanf("%d%*c", &op2);
				   if ((op2 < 1) || (op2 > 4))
					 { printf("\nOpcao invalida. Digite novamente ");
					   getchar();
					 }
				   if (op2 == 1)
					 { printf("\nConsultar todos os produtos com precos entre dois valores ");
				       printf("\nDigite o valor inicial ");
					   scanf("%f%*c", &valor_inicial);
					   printf("Digite o valor final ");
					   scanf("%f%*c", &valor_final);
					   if (produto_livre == 0)
						 printf("\nNenhum produto esta cadastrado");
					   else
						 { achou = 0;
							 for (i=0;i<produto_livre;i++)
								{ if ((produto[i].preco_unit >= valor_inicial) && (produto[i].preco_unit <= valor_final))
									{ achou = 1;
									  printf("\nCodigo %d Descricao %s Valor %10.2f", produto[i].cod_produto, produto[i].desc, produto[i].preco_unit);
									}
								}
							 if (achou == 0)
								printf("\nNenhum produto foi cadastrado com estes precos");
							getchar();
						 }
					}//fim if op2=1

				  if (op2 == 2)
					 { printf("\nConsultar todas as notas e itens da nota de um cliente");
					   printf("\nDigite o codigo do cliente ");
					   scanf("%d%*c", &codigo);
					   if (cliente_livre == 0)
					    { printf("Nao existe cliente cadastrado");
						  getchar();
					    }
					   else
					     { achou = 0;
					       for (i=0;i<cliente_livre;i++)
						     { if (cliente[i].cod_cliente == codigo)
							     { achou = 1;
							       posi = i;
							     }
						     }
					       if (achou == 0)
						     { printf("\nEste cliente nao esta cadastrado ");
					           getchar();
						     }
					       else
					          { if (nota_livre == 0)
						           { printf("\nNenhuma nota cadastrada ");
						             getchar();
						           }
					            else
						          { achou = 0;
						            for (i=0;i<nota_livre;i++)
							          { if (nota[i].cod_cliente == codigo)
								           { achou = 1;
								             printf("\nNo. nota %d Total %10.2f ", nota[i].numero_nf, nota[i].total);
								             for (j=0;j<item_livre;j++)
								              { if (itens_nota[j].numero_nf == nota[i].numero_nf)
								                   { printf("\nItem %d", itens_nota[j].cod_prod);
								                     printf(" Qtdade %d", itens_nota[j].qtde);
								                     printf(" Preco venda %10.2f", itens_nota[j].preco_vend);
								                   }
								                getchar();
							                  }
					                       }
					                  }
					                if (achou == 0)
					                   { printf("\nNenhuma nota cadastrada");
					                     getchar();
					                   }
                                  }
			                   }
		                 }
	                 }//fim if op2=2

				  if (op2 == 3)
					 {  printf("\nConsultar todas as notas e itens da nota com total superior a um valor");
						printf("\nDigite o valor ");
						scanf("%d%*c", &valor);
						if (nota_livre == 0)
							 { printf("\nNao existe nota cadastrada");
							   getchar();
							 }
						else
							 {  achou = 0;
								 for (i=0;i<nota_livre;i++)
										{ if (nota[i].total > valor)
												 {  achou = 1;
													 printf("\nNo. nota %d  Total %10.2f", nota[i].numero_nf, nota[i].total);
													 for (j=0;j<item_livre;j++)
															{ if (itens_nota[j].numero_nf == nota[i].numero_nf)
																	 {  printf("\nItem %d", itens_nota[j].cod_prod);
																		printf(" Qtdade %d", itens_nota[j].qtde);
																		printf(" Preco venda %10.2f", itens_nota[j].preco_vend);
																	 }
															}
													 getchar();
												 }
										}
								if (achou == 0)
									 { printf("\nNenhuma nota cadastrada");
									   getchar();
									 }
							}
					 }//fim if op2=3
			 } while (op2 != 4);
		}//fim if op1=3
	 } while (op1 != 4);
  return 0;
}

