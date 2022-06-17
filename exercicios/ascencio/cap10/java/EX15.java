import java.util.Scanner;
public class EX15
{ public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
  	Cliente clientes[];
  	clientes = new Cliente[5];
  	Pizza pizzas[];
  	pizzas = new Pizza[3];
  	Pedido pedidos[];
    pedidos = new Pedido[6];

	int cont_piz, cont_ped, cont_cli, i, j=0, k, op, ped_aux, piz_aux, total_mot[] = new int[5], maior=0, sit_aux;
  	float total_cli[] = new float[5];
  	String fone_aux;
  	
  	cont_piz = 0;
  	cont_ped = 0;
  	cont_cli = 0;
  	do
   	  { System.out.print("\n1-Cadastro de cliente");
	    System.out.print("\n2-Cadastro de pizza");
        System.out.print("\n3-Cadastro de pedido");
        System.out.print("\n4-Despachar pizza");
        System.out.print("\n5-Receber pizza");
  	    System.out.print("\n6-Mostrar total gasto por cliente");
	    System.out.print("\n7-Mostrar todas os pedidos com uma determinada situacao");
	    System.out.print("\n8-Mostrar motoqueiro que fez mais entregas");
	    System.out.print("\n9-Finalizar");
	    System.out.print("\nDigite sua opcao: ");
	    op = entrada.nextInt();
		switch(op)
		 { case 1: if (cont_cli < 5)
					  { entrada = new Scanner(System.in);
					    System.out.print("\nDigite o numero de telefone: ");
						fone_aux = entrada.nextLine();
						i=0;
						while ((i<cont_cli) && (!clientes[i].fone.equalsIgnoreCase(fone_aux)))
							i++;
						if (i<cont_cli)
							 System.out.print("\nCliente ja cadastrado!");
						else
						   { clientes[cont_cli] = new Cliente();
						     entrada = new Scanner(System.in);
						     clientes[cont_cli].fone = fone_aux;
							 System.out.print("Digite o nome do cliente: ");
							 clientes[cont_cli].nome_cli = entrada.nextLine();
							 System.out.print("Digite o endereco do cliente: ");
							 clientes[cont_cli].endereco = entrada.nextLine();
							 System.out.print("Digite o complemento do endereco: ");
							 clientes[cont_cli].comple = entrada.nextLine();
							 System.out.print("Digite o cep do cliente: ");
							 clientes[cont_cli].cep = entrada.nextLine();
							 cont_cli++;
						   }
					  }
			 	   else
					  System.out.print("\nJa foram cadastrados 5 clientes!");
	 			  break;
		   case 2: if (cont_piz < 3)
					  { System.out.print("\nDigite o codigo da pizza: ");
						piz_aux = entrada.nextInt();
						i=0;
						while ((i<cont_piz) && (pizzas[i].cod_piz!=piz_aux))
							i++;
						if (i<cont_piz)
							 System.out.print("\nPizza ja cadastrado!");
						else
						   { pizzas[cont_piz] = new Pizza();
						     entrada = new Scanner(System.in);
						     pizzas[cont_piz].cod_piz = piz_aux;
							 System.out.print("Digite o nome da pizza: ");
							 pizzas[cont_piz].nome_piz = entrada.nextLine();
							 System.out.print("Digite o preco da pizza: ");
							 pizzas[cont_piz].valor = entrada.nextFloat();
							 cont_piz++;
						   }
					  }
				   else
					  System.out.print("\nJa foram cadastradas 3 pizzas!");
			 break;
		   case 3: if (cont_ped < 6)
					  { System.out.print("\nDigite o numero do pedido: ");
						ped_aux = entrada.nextInt();
						i=0;
						while ((i<cont_ped) && (pedidos[i].num_ped!=ped_aux))
							i++;
						if (i<cont_ped)
						   System.out.print("\nPedido ja cadastrado!");
						else
						   { pedidos[cont_ped] = new Pedido();
						     entrada = new Scanner(System.in);
						     pedidos[cont_ped].num_ped = ped_aux;
							 System.out.print("Digite o telefone do cliente: ");
							 pedidos[cont_ped].fone = entrada.nextLine();
							 i=0;
							 while ((i<cont_cli) && (!clientes[i].fone.equalsIgnoreCase(pedidos[cont_ped].fone)))
								i++;
							 if (i==cont_cli)
								 System.out.print("\nCliente nao cadastrado!");
							 else
								{ System.out.print("Digite o codigo da pizza: ");
								  pedidos[cont_ped].cod_piz = entrada.nextInt();
								  i=0;
								  while ((i<cont_piz) && (pizzas[i].cod_piz!=pedidos[cont_ped].cod_piz))
										i++;
								  if (i==cont_piz)
									 System.out.print("\nPizza nao cadstrada!");
								  else
									 { pedidos[cont_ped].cod_mot = 0;
									   pedidos[cont_ped].situacao = 1;
									   cont_ped++;
									 }
								}
						   }
				  	  }
				 else
				    System.out.print("\nJa foram cadastradas 6 pedidos!");
				 break;
		   case 4: System.out.print("\nDigite o numero do pedido: ");
				   ped_aux = entrada.nextInt();
				   i=0;
				   while ((i<cont_ped) && (pedidos[i].num_ped!=ped_aux))
						 i++;
				   if (i==cont_ped)
					  System.out.print("\nPedido nao cadastrado!");
				   else
					  { if (pedidos[i].situacao != 1)
						   System.out.print("\nPedido ja foi despachado!");
						else
						   { do { System.out.print("\nDigite o codigo do motoqueiro: (entre 1 e 5) ");
								  pedidos[i].cod_mot = entrada.nextInt();
								} while ((pedidos[i].cod_mot < 1) || (pedidos[i].cod_mot > 5));
							 pedidos[i].situacao=2;
							}
					  }
				 break;
		    case 5: System.out.print("\nDigite o numero do pedido: ");
				    ped_aux = entrada.nextInt();
				    i=0;
				    while ((i<cont_ped) && (pedidos[i].num_ped!=ped_aux))
						 i++;
				    if (i==cont_ped)
					    System.out.print("\nPedido nao cadastrado!");
				    else
					  { if (pedidos[i].situacao == 1)
						   System.out.print("\nPedido ainda nao foi despachado!");
						else
						   { if (pedidos[i].situacao == 3)
							    System.out.print("\nPedido ja foi entregue!");
							 else
								pedidos[i].situacao=3;
						   }
					  }
				  break;
			 case 6: for (i=0;i<5;i++)
						 total_cli[i]=0;
					 for (i=0;i<cont_ped;i++)
					   { j=0;
						 while ((j<cont_cli) && (!clientes[j].fone.equalsIgnoreCase(pedidos[i].fone)))
							 j++;
						 k=0;
						 while ((k<cont_piz) && (pizzas[k].cod_piz!=pedidos[i].cod_piz))
							 k++;
						 total_cli[j]=total_cli[j]+pizzas[k].valor;
						}

					 for (i=0;i<cont_cli;i++)
					   { System.out.print("\n\nCliente: " + clientes[i].nome_cli);
						 System.out.print("\ntotal gasto ==> " + total_cli[i] + "\n");
					   }
					 break;
			 case 7: System.out.print("\nDigite o codigo da situacao (1-Em preparo, 2-A caminho, 3-Entregue) ");
					 sit_aux = entrada.nextInt();
					 if (cont_ped == 0)
						 System.out.print("\nNao existe pedido cadastrado");
					 else
						 { for (i=0;i<cont_ped;i++)
							{ if (pedidos[i].situacao == sit_aux)
								  { System.out.print("\nPedido: " + pedidos[i].num_ped);
									j=0;
									while ((j<cont_piz) && (pizzas[j].cod_piz!=pedidos[i].cod_piz))
									j++;
									System.out.print("\nPizza pedida: " + pizzas[j].nome_piz + "\n");
								  }
							}
						}
					 break;
			 case 8: for (i=0;i<5;i++)
						total_mot[i]=0;
					 for (i=0;i<cont_ped;i++)
					    if (pedidos[i].cod_mot != 0)
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
						System.out.print("\nNenhuma entrega foi realizada \n");
					 else
						{ System.out.print("\n\nO motoqueiro " + (j+1) + " fez mais entregas");
						  System.out.print("\nTotal geral de entregas: " + maior + "\n");
						}
		 } //fim switch()
	 } while (op!=9);
} //fim main

	private static class Cliente
	{ public String fone;
	  public String nome_cli;
	  public String endereco;
	  public String comple;
	  public String cep;
	}
	
	private static class Pizza
	{ public int cod_piz;
	  public String nome_piz;
	  public float valor;
	}
	
	private static class Pedido
	{ public int num_ped;
	  public int cod_piz;
	  public int cod_mot;
	  public int situacao;
	  public String fone;
	}
}
