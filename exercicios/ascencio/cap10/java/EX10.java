import java.util.Scanner;
public class EX10
{ public static void main(String args[])
  	{ Scanner entrada = new Scanner(System.in);
	  Filial filial[];
	  filial = new Filial[4];
	  Funcionário func[];
	  func = new Funcionário[20];
	  int i, j, livre_filial, livre_func, cont, fili, op, achou, numero;
	  float total_geral, total_filial, sal;
  	  String cargo, nome;
  	  for (i=0;i<4;i++)
	    { filial[i] = new Filial();
	    }
	    
	  for (i=0;i<20;i++)
	    { func[i] = new Funcionário();
	    }
  
	  livre_func = 0;
	  livre_filial = 0;
	  total_geral = 0;

	do
		{ System.out.print("\nMenu de Opcoes");
		  System.out.print("\n1 - Cadastrar filial");
		  System.out.print("\n2 - Cadastrar funcionario");
		  System.out.print("\n3 - Consultar filiais");
		  System.out.print("\n4 - Sair");
		  System.out.print("\nDigite a opcao desejada ");
		  op = entrada.nextInt();
			if (op == 1)
				 { System.out.println("\nCadastro de filiais");
					 if (livre_filial == 4)
							System.out.print("\nCadastro de filiais lotado");
					 else
						{   System.out.print("\nDigite o numero da filial ");
							numero = entrada.nextInt();
							achou = 0;
							for (i=0;i< livre_filial;i++)
								{ if (filial[i].numero_filial == numero)
									achou = 1;
								}
							if (achou == 1)
								 System.out.print("\nJa existe filial cadastrada com este numero ");
							else
								{ entrada = new Scanner(System.in);
								  System.out.print("Digite o nome da filial ");
								  filial[livre_filial].nome_filial = entrada.nextLine();
								  filial[livre_filial].numero_filial = numero;
								  System.out.print("\nFilial cadastrada com sucesso! ");
								  livre_filial++;
								 }
						}
				}

			if (op == 2)
				 { System.out.println("\nCadastro de funcionarios");
					 if (livre_func == 20)
						System.out.println("\nCadastro de funcionarios lotado ");
					 else
						{   System.out.print("\nDigite o numero do funcionario a ser cadastrado ");
							numero = entrada.nextInt();
							achou = 0;
							for (i=0;i<livre_func;i++)
								{ if (func[i].cod_func == numero)
									 achou = 1;
								}
							if (achou == 1)
								 System.out.print("\nJa existe funcionario cadastrado com este codigo");
							else
								 {   System.out.print("Digite o numero da filial deste funcionario ");
									 fili = entrada.nextInt();
									 achou = 0;
									 for (i=0;i<livre_filial;i++)
											 { if (filial[i].numero_filial == fili)
												  achou = 1;
											 }
									 if (achou == 0)
										 System.out.print("\nEsta filial nao esta cadastrada");
									 else
										{ cont = 0;
											for (i=0;i<livre_func;i++)
													{ if (func[i].numero_filial == fili)
															 cont++;
													}
											if (cont == 5)
												System.out.println("\nEsta filial ja esta com todos os funcionarios cadastrados ");
											else
												 { entrada = new Scanner(System.in);
												   do
													 { System.out.print("Digite o cargo do funcionario (Gerente ou Vendedor) ");
													   cargo = entrada.nextLine();
													   if ((!cargo.equalsIgnoreCase("Gerente")) && (!cargo.equalsIgnoreCase("Vendedor")))
														  System.out.println("Cargo invalido! Digite Gerente ou Vendedor ");
													 } while ((!cargo.equalsIgnoreCase("Gerente")) && (!cargo.equalsIgnoreCase("Vendedor")));

													 if (cargo.equalsIgnoreCase("Gerente"))
														{ cont = 0;
														  for (i=0;i<livre_func;i++)
														 	{ if ((func[i].numero_filial == fili) && (func[i].cargo.equalsIgnoreCase(cargo)))
																 cont++;
															}
														  if (cont == 1)
															 System.out.println("\nEsta filial ja possui gerente");
														  else
															 cont = 0;
														}
													 if (cargo.equalsIgnoreCase("Vendedor"))
														{ cont = 0;
														  for (i=0;i<livre_func;i++)
															{ if ((func[i].numero_filial == fili) && (func[i].cargo.equalsIgnoreCase(cargo)))
																 cont++;
															}
														  if (cont == 4)
														 	 System.out.println("\nEsta filial ja possui 4 vendedores cadastrados");
														  else
															 cont = 0;
														}
													if (cont == 0)
														{ System.out.print("Digite o salario ");
														  func[livre_func].salario = entrada.nextFloat();
														  entrada = new Scanner(System.in);
														  System.out.print("Digite o nome do funcionario ");
														  func[livre_func].nome_func = entrada.nextLine();
														  func[livre_func].numero_filial = fili;
														  func[livre_func].cod_func = numero;
														  func[livre_func].cargo = cargo;
														  System.out.println("\nFuncionario cadastrado com sucesso!");
														  livre_func++;
														}
												 }
											}
								 }
						}
				 }

			if (op == 3)
				 { if (livre_filial == 0)
					  System.out.println("\nCadastro de filiais vazio");
					 else
						if (livre_func == 0)
							System.out.print("\nCadastro de funcionarios vazio");
						else
						 { total_geral = 0;
							 for (i=0;i<livre_filial;i++)
								 { System.out.print("\nFilial numero: " + filial[i].numero_filial + " nome: " + filial[i].nome_filial);
									 total_filial = 0;
									 for (j=0;j<livre_func;j++)
											 { if (func[j].numero_filial == filial[i].numero_filial)
														{ System.out.print("\n\nFuncionario: " + func[j].nome_func);
														  System.out.print("\nCargo: " + func[j].cargo + "  Salario: " + func[j].salario);
														  total_filial = total_filial + func[j].salario;
														}
											 }
									 System.out.print("\n\nTotal de salario da filial = " + total_filial +"\n");
									 total_geral = total_geral + total_filial;
								 }
								 System.out.print("\n\nTotal dos salarios de todas as filiais = " + total_geral);
							 }
				 }
		} while (op!=4);
}
	private static class Filial
	{ public int numero_filial;
	  public String nome_filial;
	}
	private static class Funcionário
	{ public int numero_filial;
	  public int cod_func;
	  public float salario;
	  public String cargo;
	  public String nome_func;
	}
}