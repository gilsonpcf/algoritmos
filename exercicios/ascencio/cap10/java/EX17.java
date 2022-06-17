import java.util.Scanner;
public class EX17
{ public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
	Cliente clientes[];
	clientes = new Cliente[10];

	int cont_c, i, j, cod_aux, qtd, op;
	cont_c=0;

	do
	  { System.out.print("\n1-Cadastrar cliente ");
		System.out.print("\n2-Mostrar clientes ");
		System.out.print("\n3-Remover cliente ");
		System.out.print("\n4-Devolucao de DVDs ");
		System.out.print("\n5-Efetuar locacao ");
		System.out.print("\n6-Mostrar clientes DVDs locados");
		System.out.print("\n7-Finalizar ");
		System.out.print("\nDigite sua opcao: ");
		op = entrada.nextInt();
		switch (op)
		{ case 1: if (cont_c < 10)
					  { System.out.print("\nDigite codigo do cliente: ");
						cod_aux = entrada.nextInt();
						i=0;
						while ((i < cont_c) && (clientes[i].cod != cod_aux))
						   i++;
						if (i < cont_c)
							System.out.print("\nCliente ja cadastrado! \n");
						else
						  { entrada = new Scanner(System.in);
						    clientes[cont_c] = new Cliente();
						    clientes[cont_c].cod = cod_aux;
							System.out.print("Digite o nome do cliente: ");
							clientes[cont_c].nome = entrada.nextLine();
							System.out.print("Digite o sexo do cliente: ");
							clientes[cont_c].sexo = entrada.nextLine();
							System.out.print("Digite a data de nascimento do cliente: ");
							clientes[cont_c].data_nas = entrada.nextLine();
							System.out.print("Digite o RG do cliente: ");
							clientes[cont_c].RG = entrada.nextLine();
							System.out.print("Digite o CPF do cliente: ");
							clientes[cont_c].CPF = entrada.nextLine();
							System.out.print("Digite o endereco do cliente: ");
							clientes[cont_c].endereco = entrada.nextLine();
							System.out.print("Digite a cidade do cliente: ");
							clientes[cont_c].cidade = entrada.nextLine();
							System.out.print("Digite o estado do cliente: ");
							clientes[cont_c].estado = entrada.nextLine();
							clientes[cont_c].dvd_loc = 0;
							clientes[cont_c].tot_dvd_loc = 0;
							cont_c++;
							System.out.print("\nCliente cadastrado com sucesso\n");
						  }
					  }
					else
					   System.out.print("\n10 clientes ja foram cadastrados! \n");
					break;
			case 2: for (i=0;i<cont_c;i++)
					  { System.out.print("\nCodigo: " + clientes[i].cod);
						System.out.print("\nNome: " + clientes[i].nome);
						System.out.print("\nSexo: " + clientes[i].sexo);
						System.out.print("\nData de nascimento: " + clientes[i].data_nas);
						System.out.print("\nRG: " + clientes[i].RG);
						System.out.print("\nCPF: " + clientes[i].CPF);
						System.out.print("\nEndereco: " + clientes[i].endereco);
						System.out.print("\nCidade: " + clientes[i].cidade);
						System.out.print("\nEstado: " + clientes[i].estado);
						System.out.print("\nTotal de DVDs locados atualmente: " + clientes[i].dvd_loc);
						System.out.print("\nTotal geral de DVDs locados : " + clientes[i].tot_dvd_loc + "\n");
				       }
					break;
			case 3: System.out.print("\nDigite o codigo do cliente a ser removido: ");
					cod_aux = entrada.nextInt();
					i=0;
					while ((i < cont_c) && (clientes[i].cod != cod_aux))
						 i++;
					if (i < cont_c)
						{ if (clientes[i].dvd_loc > 0)
							 System.out.print("\nCliente nao pode ser exclu¡do porque possui DVDs locados! \n");
							else
								{ for (j=i+1;j<cont_c;j++)
									 { clientes[j-1]=clientes[j];
									 }
								  cont_c--;
								  System.out.print("\nCliente removido com sucesso\n");
								}
						}
					 else
						 System.out.print("\nCliente nao cadastrado! \n");
					break;
			case 4: System.out.print("\nDigite o codigo do cliente: ");
					cod_aux = entrada.nextInt();
					i=0;
					while ((i < cont_c) && (clientes[i].cod != cod_aux))
						 i++;
					if (i < cont_c)
						{ if (clientes[i].dvd_loc == 0)
							  System.out.print("\nEste cliente nao possui DVDs locados\n");
							else
							   { do
								   { System.out.print("\nQuantos DVDs serao devolvidos? ");
									 qtd = entrada.nextInt();
									 if (qtd > clientes[i].dvd_loc)
										System.out.print("\nEste cliente possui apenas " + clientes[i].dvd_loc + " locados ");
									} while (qtd > clientes[i].dvd_loc);
								  clientes[i].dvd_loc = clientes[i].dvd_loc - qtd;
								  System.out.print("\nDevolucao realizada com sucesso\n");
							   }
						}
					else
					   System.out.print("\nCliente nao cadastrado! ");
					break;
			case 5: System.out.print("\nDigite o codigo do cliente: ");
					cod_aux = entrada.nextInt();
					i=0;
					while ((i < cont_c) && (clientes[i].cod != cod_aux))
						 i++;
					if (i < cont_c)
					   { if (clientes[i].dvd_loc > 0)
							 System.out.print("\nEste cliente nao pode fazer novas locacoes pois possui DVDs em seu poder\n");
						 else
						  { System.out.print("\nDigite numero de DVDs que serao locados: ");
							qtd = entrada.nextInt();
							clientes[i].dvd_loc = qtd;
							clientes[i].tot_dvd_loc = clientes[i].tot_dvd_loc + qtd;
							System.out.print("\nLocacao realizada com sucesso\n");
						  }
					    }
					 else
						 System.out.print("\nCliente nao cadastrado! \n");
				break;
			case 6: for (i=0;i<cont_c;i++)
					   { if (clientes[i].dvd_loc > 0)
						  { System.out.print("\nCodigo: " + clientes[i].cod);
							System.out.print("\nNome: " + clientes[i].nome);
							System.out.print("\nSexo: " + clientes[i].sexo);
							System.out.print("\nData de nascimento: " + clientes[i].data_nas);
							System.out.print("\nRG: " + clientes[i].RG);
							System.out.print("\nCPF: " + clientes[i].CPF);
							System.out.print("\nEndereco: " + clientes[i].endereco);
							System.out.print("\nCidade: " + clientes[i].cidade);
							System.out.print("\nEstado: " + clientes[i].estado);
							System.out.print("\nTotal de DVDs locados atualmente: " + clientes[i].dvd_loc);
							System.out.print("\nTotal geral de DVDs locados : " + clientes[i].tot_dvd_loc + "\n");
						  }
					   }
		 } //fim switch
	} while (op!=7);
} //fim main

	private static class Cliente
	{ public int cod;
	  public int dvd_loc;
	  public int tot_dvd_loc;
	  public String nome;
	  public String sexo;
	  public String data_nas;
	  public String RG;
	  public String CPF;
	  public String endereco;
	  public String cidade;
	  public String estado;
	}
}

