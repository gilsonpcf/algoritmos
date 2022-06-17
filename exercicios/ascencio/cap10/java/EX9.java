import java.util.Scanner;
public class EX9
{ public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
	Cliente cliente[];
	cliente = new Cliente[3];
	Produto produto[];
	produto = new Produto[6];
	Nota nota[];
	nota = new Nota[5];
	Item itens_nota[];
	itens_nota = new Item[10];

	int i, j, k, h, cont, achou, op1, op2, posi=0;
	int cliente_livre, produto_livre, nota_livre, item_livre, cod_produto, codigo, pre, qtde, num_nota;
	float valor, valor_inicial, valor_final;
	String endere, telefone, desc, unidade;
	char resp;

	for (i=0;i<3;i++)
		{ cliente[i] = new Cliente();
		}

	for (i=0;i<6;i++)
		{ produto[i] = new Produto();
		}
	for (i=0;i<5;i++)
		{ nota[i] = new Nota();
		}
	for (i=0;i<10;i++)
		{ itens_nota[i] = new Item();
		}
	
	cliente_livre = 0;
	produto_livre = 0;
	nota_livre = 0;
	item_livre = 0;
	do
	  { System.out.print("\nMenu de Opcoes");
		System.out.print("\n1 - Cadastros");
		System.out.print("\n2 - Movimentacoes");
		System.out.print("\n3 - Consultas");
		System.out.print("\n4 - Sair");
		System.out.print("\nDigite sua opcao ");
		op1 = entrada.nextInt();
		if ((op1 < 1) || (op1 > 4))
			 System.out.println("\nOpcao invalida, digite novamente ");
		if (op1 == 1)
			{ do
				{ System.out.print("\nSub-menu de Opcoes");
				  System.out.print("\n1 - Incluir clientes");
				  System.out.print("\n2 - Alterar clientes");
				  System.out.print("\n3 - Excluir clientes");
				  System.out.print("\n4 - Incluir produtos");
				  System.out.print("\n5 - Alterar produtos");
				  System.out.print("\n6 - Excluir produtos");
				  System.out.print("\n7 - Sair ");
				  System.out.print("\nDigite sua opcao ");
				  op2 = entrada.nextInt();

				  if ((op2 < 1) || (op2 > 7))
				   	 System.out.println("\nOpcao invalida, digite novamente");

				  if (op2 == 1)
					{ System.out.println("\nInclusao de Clientes");
				 	  if (cliente_livre == 3)
						 { System.out.println("\nCadastro de clientes lotado");
						 }
					  else
						 { System.out.print("\nDigite o codigo do cliente a ser incluido ");
					 	   codigo = entrada.nextInt();
						   achou = 0;
						   for (i=0;i<3;i++)
								{ if (cliente[i].cod_cliente == codigo)
									 achou = 1;
								}
						   if (achou == 1)
							  { System.out.println("\nJa existe cliente cadastrado com este codigo");
							  }
						   else
							  { entrada = new Scanner(System.in);
							  	System.out.print("Digite o endereco do cliente ");
							    cliente[cliente_livre].ende = entrada.nextLine();
								System.out.print("Digite o telefone do cliente ");
								cliente[cliente_livre].fone = entrada.nextLine();
								cliente[cliente_livre].cod_cliente = codigo;
								System.out.println("\nCliente cadastrado com sucesso!");
								cliente_livre++;
							  }
						 }
					} //fim if op2=1

				  if (op2 == 2)
					 { System.out.println("\nAlteracao de Clientes");
					   if (cliente_livre == 0)
						  { System.out.println("\nCadastro de clientes vazio");
						  }
					  else
					     { System.out.print("\nDigite o codigo do cliente a ser alterado ");
						   codigo = entrada.nextInt();
						   achou = 0;
						   for (i=0;i<cliente_livre;i++)
							   { if (cliente[i].cod_cliente == codigo)
								    { achou = 1;
									  posi = i;
									}
								}
							if (achou == 0)
							   { System.out.println("\nNao existe cliente cadastrado com este codigo");
							   }
							else
							   { entrada = new Scanner(System.in);
							   	 System.out.print("Digite o novo endereco do cliente ");
								 cliente[posi].ende = entrada.nextLine();
								 System.out.print("Digite o novo telefone do cliente ");
								 cliente[posi].fone = entrada.nextLine();
								 System.out.print("\nCliente alterado com sucesso!");
							   }
						 }
					 }//fim if op2=2

				if (op2 == 3)
				   { System.out.println("\nExclusao de Clientes");
					 if (cliente_livre == 0)
						{ System.out.println("\nCadastro de clientes vazio");
						}
					 else									 
					 	{ System.out.print("\nDigite o codigo do cliente a ser excluido ");
						  codigo = entrada.nextInt();
						  achou = 0;
						  for (i=0;i<cliente_livre;i++)
							{ if (cliente[i].cod_cliente == codigo)
								 { achou = 1;
							  	   posi = i;
								 }
							}
						  if (achou == 0)
							 { System.out.println("\nNao existe cliente cadastrado com este codigo");
							 }
						  else
							 { achou = 0;
						 	   for (j=0;j<nota_livre;j++)
								  { if (nota[j].cod_cliente == codigo)
									   achou = 1;
								  }
							   if (achou == 1)
								  { System.out.println("\nCliente nao pode ser excluido, possui notas");
								  }
							   else
								 { for (j=posi;j<cliente_livre-1;j++)
								       { cliente[j].cod_cliente = cliente[j+1].cod_cliente;
										 cliente[j].ende = cliente[j+1].ende;
										 cliente[j].fone = cliente[j+1].fone;
									   }
									System.out.println("\nCliente excluido com sucesso!");
									cliente_livre--;
								  }
							  }
					    }
					}//fim if op2=3

				  if (op2 == 4)
					 { System.out.println("\nInclusao de Produtos");
					   if (produto_livre == 6)
						  System.out.println("\nCadastro de produtos lotado");
					   else
						 { System.out.print("\nDigite o codigo do produto a ser incluido ");
						   codigo = entrada.nextInt();
						   achou = 0;
						   for (i=0;i<5;i++)
							 { if (produto[i].cod_produto == codigo)
							 	  achou = 1;
							 }
						   if (achou == 1)
							  { System.out.println("\nJa existe produto cadastrado com este codigo");
							  }
						   else
							  { entrada = new Scanner(System.in);
							    System.out.print("\nDigite a descricao do produto ");
								produto[produto_livre].desc = entrada.nextLine();
								System.out.print("\nDigite a unidade do produto ");
								produto[produto_livre].unid = entrada.nextLine();
								System.out.print("\nDigite o preco unitario do produto ");
								produto [produto_livre].preco_unit = entrada.nextFloat();
								System.out.print("\nDigite a quantidade de estoque do produto ");
								produto[produto_livre].qtde_est = entrada.nextInt();
								produto[produto_livre].cod_produto = codigo;
								System.out.println("\nProduto cadastrado com sucesso!");
								produto_livre++;
							  }
						  }
					  }//fim if op2=4

					if (op2 == 5)
					   { System.out.println("\nAlteracao de Produtos");
						 if (produto_livre == 0)
							System.out.println("\nCadastro de produtos vazio");
						 else										
						 	{ System.out.print("\nDigite o codigo do produto a ser alterado ");
							  codigo = entrada.nextInt();
							  achou = 0;
							  for (i=0;i<produto_livre;i++)
								{ if (produto[i].cod_produto == codigo)
									{ achou = 1;
									  posi = i;
									}
								}
							  if (achou == 0)
								 { System.out.println("\nNao existe produto cadastrado com este codigo");
								 }
							  else
								 { entrada = new Scanner(System.in);
								   System.out.print("\nDigite a nova descricao do produto ");
								   produto[posi].desc = entrada.nextLine();
								   System.out.print("\nDigite a nova unidade do produto ");
								   produto[posi].unid = entrada.nextLine();
								   System.out.print("\nDigite o novo preco unitario ");
								   produto[posi].preco_unit = entrada.nextFloat();
								   System.out.print("\nDigite a nova quantidade em estoque ");
								   produto[posi].qtde_est = entrada.nextInt();
								   System.out.println("\nProduto alterado com sucesso!");
								 }
							}
					   }//fim if op2=5

					if (op2 == 6)
					   { System.out.println("\nExclusao de Produtos");
						 if (produto_livre == 0)
							 System.out.println("\nCadastro de produtos vazio");
						 else
							 { System.out.print("\nDigite o codigo do produto a ser excluido ");
							   codigo = entrada.nextInt();
							   achou = 0;
							   for (i=0;i<produto_livre;i++)
								   { if (produto[i].cod_produto == codigo)
										{ achou = 1;
									      posi = i;
										}
									}
								if (achou == 0)
									{ System.out.println("\nNao existe produto cadastrado com este codigo");
									}
								else
									{ achou = 0;
									  for (j=0;j<item_livre;j++)
										{ if (itens_nota[j].cod_prod == codigo)
											 achou = 1;
										}
									  if (achou == 1)
										{ System.out.println("\nNao pode excluir produto, esta em notas ");
										}
									  else
										{ for (j=posi;j<produto_livre-1;j++)
											{ produto[j].cod_produto = produto[j+1].cod_produto;
											  produto[j].desc = produto[j+1].desc;
											  produto[j].unid = produto[j+1].unid;
											  produto[j].preco_unit = produto[j+1].preco_unit;
											  produto[j].qtde_est = produto[j+1].qtde_est;
											}
										  System.out.println("\nProduto excluido com sucesso!");
										  produto_livre--;
										}
									}
								}
						 }//fim if op2=6
			} while (op2 != 7);
	 	} // fim if op1=1

	if (op1 == 2)
		{ System.out.println("\nCadastro de notas de saida ");
		  System.out.print("\nDigite o numero da nota ");
		  num_nota = entrada.nextInt();
		  if (nota_livre == 5)
			 System.out.println("\nCadastro de notas lotado");
		  else
			{ achou = 0;
			  for (i=0;i<5;i++)
				 { if (nota[i].numero_nf == num_nota)
					 achou = 1;
				 }
			  if (achou == 1)
				{ System.out.print("\nJa existe nota fiscal cadastrada com este numero ");
				}
			  else
				{ System.out.print("\nDigite o codigo do cliente ");
			   	  codigo  = entrada.nextInt();
				  achou = 0;
				  for (i=0;i<cliente_livre;i++)
					{ if (cliente[i].cod_cliente == codigo)
						 achou = 1;
					}
				  if (achou == 0)
					{ System.out.println("\nEste cliente nao esta cadastrado ");
					}
				  else
					{ nota[nota_livre].numero_nf = num_nota;
				  	  nota[nota_livre].cod_cliente = codigo;
					  cont = 0;
					  resp = 'S';
					  while ((cont != 2) && (resp == 'S'))
						 { System.out.print("\nDigite o codigo do produto ");
					       cod_produto  = entrada.nextInt();
					       achou = 2;
						   for (k=0;k<produto_livre;k++)
							 { if (produto[k].cod_produto == cod_produto)
								{ achou = 0;
						  		  posi=k;
								  for (h=0;h<item_livre;h++)
								    { if ((itens_nota[h].numero_nf == num_nota) && (itens_nota[h].cod_prod == cod_produto))
										{ System.out.println("\nProduto ja existe nesta nota ");
									  	  achou = 1;
										}
									}
								}
							 }
						   if (achou == 0)
							 { System.out.print("\nDigite a quantidade ");
							   qtde  = entrada.nextInt();
							   nota[nota_livre].total = nota[nota_livre].total + qtde * produto[posi].preco_unit;
							   itens_nota[item_livre].numero_nf = num_nota;
							   itens_nota[item_livre].cod_prod = cod_produto;
							   itens_nota[item_livre].qtde = qtde;
							   itens_nota[item_livre].preco_vend = qtde * produto[posi].preco_unit;
							   item_livre++;
							   cont++;
							 }
						   else if (achou == 2)
							 		{ System.out.println("\nProduto nao cadastrado");
							 		}
						   if (cont < 2)
						      { entrada = new Scanner(System.in);
						      	System.out.print("\nDeseja cadastrar outro produto nesta nota (S-sim ou N-nao)");
								resp  = entrada.nextLine().charAt(0);
								resp = Character.toUpperCase(resp);
							  }
						}//fim while
					nota_livre++;
				 }
			 }
		}
	 }//fim if op1=2

	if (op1 == 3)
		{ do
			 { System.out.print("\nSub-menu de Opcoes");
			   System.out.print("\n1 - Consultar todos os produtos com precos entre dois valores");
			   System.out.print("\n2 - Consultar todas as notas de um cliente");
			   System.out.print("\n3 - Consultar todas as notas com total superior a um determinado valor");
			   System.out.print("\n4 - Sair ");
			   System.out.print("\nDigite sua opcao ");
			   op2 = entrada.nextInt();
				 if ((op2 < 1) || (op2 > 4))
					 { System.out.println("\nOpcao invalida, digite novamente ");
					 }
				 if (op2 == 1)
					 { System.out.println("\nConsultar todos os produtos com precos entre dois valores ");
					   System.out.print("\nDigite o valor inicial ");
					   valor_inicial = entrada.nextFloat();
					   System.out.print("Digite o valor final ");
					   valor_final = entrada.nextFloat();
						if (produto_livre == 0)
							System.out.print("\nNenhum produto esta cadastrado");
						else
							 { achou = 0;
								 for (i=0;i<produto_livre;i++)
									{ if ((produto[i].preco_unit >= valor_inicial) && (produto[i].preco_unit <= valor_final))
											{ achou = 1;
												System.out.print("\nCodigo " + produto[i].cod_produto + " Descricao " + produto[i].desc + " Valor " + produto[i].preco_unit);
											}
									}
								 if (achou == 0)
									System.out.print("\nNenhum produto foi cadastrado com estes precos");
							 }
					 }//fim if op2=1

				if (op2 == 2)
					 { System.out.println("\nConsultar todas as notas e itens da nota de um cliente");
					   System.out.print("\nDigite o codigo do cliente ");
					   codigo = entrada.nextInt();
					   if (cliente_livre == 0)
						  System.out.println("Nao existe cliente cadastrado");
					   else
						 { achou = 0;
						   for (i=0;i<cliente_livre;i++)
								{ if (cliente[i].cod_cliente == codigo)
									{ achou = 1;
						   			  posi = i;
									}
								}
							if (achou == 0)
								{ System.out.println("\nEste cliente nao esta cadastrado ");
								}
							else									
								{ if (nota_livre == 0)
									 System.out.print("\nNenhuma nota cadastrada ");
								  else
								    { achou = 0;
									  for (i=0;i<nota_livre;i++)
										 { if (nota[i].cod_cliente == codigo)
											 { achou = 1;
											   System.out.print("\nNo. nota " + nota[i].numero_nf + " Total " + nota[i].total);
											   for (j=0;j<item_livre;j++)
													{ if (itens_nota[j].numero_nf == nota[i].numero_nf)
														 { System.out.print("\nItem " + itens_nota[j].cod_prod);
														   System.out.print(" Qtdade " + itens_nota[j].qtde);
														   System.out.print(" Preco venda " + itens_nota[j].preco_vend);
														 }
											   		 }
										     }
										 }
									  if (achou == 0)
										 { System.out.println("\nNenhuma nota cadastrada");
										 }
								   }
								}
							 }
					 }//fim if op2=2

				if (op2 == 3)
					 { System.out.println("\nConsultar todas as notas e itens da nota com total superior a um valor");
					   System.out.print("\nDigite o valor ");
					   valor = entrada.nextFloat();
						if (nota_livre == 0)
							 { System.out.println("\nNao existe nota cadastrada");
							 }
						else
							 { achou = 0;
								 for (i=0;i<nota_livre;i++)
										{ if (nota[i].total > valor)
												 { achou = 1;
												   System.out.print("\nNo. nota " + nota[i].numero_nf + " Total " + nota[i].total);
												   for (j=0;j<item_livre;j++)
															{ if (itens_nota[j].numero_nf == nota[i].numero_nf)
																	 { System.out.print("\nItem " + itens_nota[j].cod_prod);
																	   System.out.print(" Qtdade " + itens_nota[j].qtde);
																	   System.out.print(" Preco venda " + itens_nota[j].preco_vend);
																	 }
															}
												 }
										}
								if (achou == 0)
									 System.out.println("\nNenhuma nota cadastrada");
							}
					 }//fim if op2=3
			 } while (op2 != 4);
		}//fim if op1=3
	 } while (op1 != 4);
}
	private static class Cliente
	{ public int cod_cliente;
	  public String ende;
	  public String fone;
	}
	private static class Produto
	{ public int cod_produto;
	  public int qtde_est;
	  public float preco_unit;
	  public String desc;
	  public String unid;
	}
	private static class Nota
	{ public int numero_nf;
	  public int cod_cliente;
	  public float total;
	}
	private static class Item
	{ public int numero_nf;
	  public int cod_prod;
	  public int qtde;
	  public float preco_vend;
	}
}