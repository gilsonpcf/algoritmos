import java.util.Scanner;
public class EX13
{ public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
	Paciente pacientes[], pac_cres[], pac_decres[];
	pacientes = new Paciente[10];
	pac_cres = new Paciente[10];
	pac_decres = new Paciente[10];
	
	int cont, cont_p, i, j, op;
    String pac_aux, med_aux;
  
    cont_p = 0;
  	do
    { System.out.print("\n1-Cadastrar paciente ");
	  System.out.print("\n2-Mostrar pacientes em ordem de cadastramento ");
	  System.out.print("\n3-Mostrar pacientes em ordem crescente ");
	  System.out.print("\n4-Mostrar pacientes em ordem decrescente ");
	  System.out.print("\n5-Excluir paciente individualmente ");
	  System.out.print("\n6-Excluir pacientes por medico ");
	  System.out.print("\n7-Finalizar ");
	  System.out.print("\nDigite sua opcao: ");
	  op = entrada.nextInt();
      entrada = new Scanner(System.in);	  
	  switch (op)
	  { case 1: if (cont_p < 10)
				   { System.out.print("\nDigite o nome do paciente: ");
					 pac_aux = entrada.nextLine();
					 i=0;
					 while ((i<cont_p) && (!pacientes[i].nome.equalsIgnoreCase(pac_aux)))
						 i++;
					 if (i<cont_p)
						{ System.out.print("\nPaciente ja cadastrado! ");
						}
					 else
						{ pacientes[cont_p] = new Paciente();
						  pacientes[cont_p].nome = pac_aux;
						  System.out.print("\nDigite o nome do medico: ");
						  pacientes[cont_p].nome_med  = entrada.nextLine();
						  System.out.print("\nDigite a data de nascimento: ");
						  pacientes[cont_p].data_nasc =  entrada.nextLine();
						  System.out.print("\nDigite o sexo do paciente (M ou F): ");
						  pacientes[cont_p].sexo  = entrada.nextLine().charAt(0);
						  i=0;
						  while ((i < cont_p) && (pacientes[cont_p].nome.compareTo(pac_cres[i].nome)>0))
							i++;
						  if (i==cont_p)
							 { pac_cres[cont_p] = pacientes[cont_p];
							 }
						  else
							 { for (j=cont_p-1;j>=i;j--)
						  		   pac_cres[j+1] = pac_cres[j];
							   pac_cres[i] = pacientes[cont_p];
							 }
						  i=0;
						  while ((i < cont_p) && (pacientes[cont_p].nome.compareTo(pac_decres[i].nome)<0))
						   	i++;
						  if (i==cont_p)
						     { pac_decres[cont_p] = pacientes[cont_p];
							 }
						  else
						     { for (j=cont_p-1;j>=i;j--)
									pac_decres[j+1] = pac_decres[j];
							   pac_decres[i] = pacientes[cont_p];
							 }
						  cont_p++;
						}
					 }
				else
					 System.out.print("\nJa foram cadastrados 10 pacientes! ");
					break;
		case 2: for (i=0;i<cont_p;i++)
					{ System.out.print("\nDigite o nome do paciente: " + pacientes[i].nome);
					  System.out.print("\nDigite o nome do medico: " + pacientes[i].nome_med);
					  System.out.print("\nDigite a data de nascimento: " + pacientes[i].data_nasc);
					  System.out.print("\nDigite o sexo do paciente (M ou F): " + pacientes[i].sexo + "\n");
					}
				break;
		case 3: for (i=0;i<cont_p;i++)
					{ System.out.print("\nDigite o nome do paciente: " + pac_cres[i].nome);
					  System.out.print("\nDigite o nome do medico: " + pac_cres[i].nome_med);
					  System.out.print("\nDigite a data de nascimento: " + pac_cres[i].data_nasc);
					  System.out.print("\nDigite o sexo do paciente (M ou F): " + pac_cres[i].sexo + "\n");
					}
				break;
		case 4: for (i=0;i<cont_p;i++)
					{ System.out.print("\nDigite o nome do paciente: " + pac_decres[i].nome);
					  System.out.print("\nDigite o nome do m‚dico: " + pac_decres[i].nome_med);
					  System.out.print("\nDigite a data de nascimento: " + pac_decres[i].data_nasc);
					  System.out.print("\nDigite o sexo do paciente (M ou F): " + pac_decres[i].sexo + "\n");
					}
				break;
		case 5: System.out.print("\nDigite nome do paciente a ser excluido: ");
				pac_aux  = entrada.nextLine();
				i=0;
				while ((!pacientes[i].nome.equalsIgnoreCase(pac_aux)) && (i<cont_p))
					i++;
				if (i==cont_p)
					 { System.out.print("\nPaciente nao cadastrado!");
					 }
				else
					 { for (j=i;j<cont_p-1;j++)
						 { pacientes[j]=pacientes[j+1];
						 }
						 i=0;
						 while ((!pac_cres[i].nome.equalsIgnoreCase(pac_aux)) && (i<cont_p))
							 i++;
						 if (i==cont_p)
							{ System.out.print("\nPaciente nao cadastrado!");
							}
						 else
							{ for (j=i;j<cont_p-1;j++)
								{ pac_cres[j]=pac_cres[j+1];
								}
							}
						 i=0;
						 while ((!pac_decres[i].nome.equalsIgnoreCase(pac_aux)) && (i<cont_p))
							 i++;
						 if (i==cont_p)
							{ System.out.print("\nPaciente nao cadastrado!");
							}
						 else
							{ for (j=i;j<cont_p-1;j++)
								{ pac_decres[j]=pac_decres[j+1];
								}
							}
						 cont_p--;
					 }
				break;
		case 6: System.out.print("\nDigite o nome do medico: ");
				med_aux = entrada.nextLine();
				i=0;
				cont=cont_p;
				while (i<cont)
					{ if (pacientes[i].nome_med.equalsIgnoreCase(med_aux))
						 { for (j=i;j<cont-1;j++)
							 { pacientes[j]=pacientes[j+1];
							 }
						   cont--;
						 }
						else
						  i++;
					}
				i=0;
				cont=cont_p;
				while (i<cont)
					{ if (pac_cres[i].nome_med.equalsIgnoreCase(med_aux))
						 { for (j=i;j<cont-1;j++)
							 { pac_cres[j]=pac_cres[j+1];
							 }
						   cont--;
						 }
					   else
						i++;
					}
				i=0;
				cont=cont_p;
				while (i<cont)
					{ if (pac_decres[i].nome_med.equalsIgnoreCase(med_aux))
						 { for (j=i;j<cont-1;j++)
							 { pac_decres[j]=pac_decres[j+1];
							 }
						   cont--;
						 }
						else
							i++;
					}
				cont_p = cont;
			}//fim switch
	 } while (op!=7);
} //fim main
	private static class Paciente
	{ public String nome;
	  public String nome_med;
	  public String data_nasc;
	  public char sexo;
	} 
}