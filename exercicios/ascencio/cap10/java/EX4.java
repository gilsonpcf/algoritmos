import java.util.Scanner;
public class EX4
{
	public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  Reserva reservas[];
	  reservas = new Reserva[60];
	
	  int avi[], lug[], i, pos_livre, op, numero, achou, posi=-1, cad_avi, cad_lug;
	  avi = new int[4];
	  lug = new int[4];
	  
	  String nome, n;
	  
	  for (i=0;i<60;i++)
	    { reservas[i] = new Reserva();
	      reservas[i].num_avi = 0;
	      reservas[i].nome = "";
	    }
	    
	  pos_livre = 0;
	  cad_avi = 0;
	  cad_lug = 0;

	  do
	    { System.out.print("\n\nMenu de Opcoes");
	      System.out.print("\n1 - Cadastrar os numeros dos avioes");
	      System.out.print("\n2 - Cadastrar os lugares disponiveis em cada aviao");
	      System.out.print("\n3 - Reservar passagem");
	      System.out.print("\n4 - Consultar pelo numero do aviao");
	      System.out.print("\n5 - Consultar pelo nome do passageiro");
	      System.out.print("\n6 - Finalizar");
	      System.out.print("\nDigite a opcao desejada ");
	      op = entrada.nextInt();
	      
	      if (op == 1)
			 { if (cad_avi == 0)
			      { for (i=0;i<4;i++)
					  { System.out.print("\nDigite o numero do " + (i+1) + "º aviao ");
					    avi[i] = entrada.nextInt();
					  }
					cad_avi = 1;
			      }
			   else
			      System.out.println("\nTodos os avioes ja foram cadastrados");
			 }
	      if (op == 2)
			 { if (cad_lug == 0)
			      { for (i=0;i<4;i++)
					  { System.out.print("\nDigite o numero de lugares disponiveis no " + (i+1) + "º aviao ");
					    lug[i] = entrada.nextInt();
					  }
					cad_lug = 1;
			      }
			   else
			      System.out.println("\nJa foram definidos os lugares de todos os avioes");
			 }
	      if (op == 3)
			 { System.out.print("\nDigite o numero do aviao onde deseja efetuar a reserva ");
			   numero = entrada.nextInt();
			   if (pos_livre == 60)
			      System.out.println("\nReservas em todos os avioes esgotadas");
			   else
			      { achou = 0;
					for (i=0;i<4;i++)
					  { if (avi[i] == numero)
					       { achou = 1;
							 posi = i;
					       }
					  }
					  
					if (achou == 0)
					   System.out.println("\nEste aviao nao existe");
					else
					   if (lug[posi] == 0)
					      System.out.println("\nAviao lotado");
					   else
					      { System.out.print("\nDigite o nome do passageiro ");
					        entrada = new Scanner(System.in);
							reservas[pos_livre].nome = entrada.nextLine();
							reservas[pos_livre].num_avi = numero;
							System.out.println("\nReserva efetuada com sucesso ");
							pos_livre++;
							lug[posi] = lug[posi] - 1;
					      }
				      }
			 }
			 
	      if (op == 4)
			 { System.out.print("\nDigite o numero do aviao do qual deseja consultar as reservas ");
			   numero = entrada.nextInt();
			   achou = 0;
			   for (i=0;i<4;i++)
			     { if (avi[i] == numero)
						achou = 1;
			     }
			   if (achou == 0)
			      System.out.print("\nNao existe este aviao");
			   else
			      { achou = 0;
					for (i=0;i<pos_livre;i++)
					  { if (reservas[i].num_avi == numero)
					       { System.out.print("\nNome passageiro: " + reservas[i].nome);
						 	 achou = 1;
					       }
					  }
					if (achou == 0)
					   System.out.println("\nNenhuma reserva foi cadastrada para este aviao");
				      }
		 	}

	      if (op == 5)
			 { entrada = new Scanner(System.in);
			   System.out.print("\nDigite o nome do passageiro do qual deseja consultar as reservas ");
			   nome = entrada.nextLine();
			   achou = 0;
			   for (i=0;i<pos_livre;i++)
			     { if (reservas[i].nome.equalsIgnoreCase(nome))
					  { System.out.print("\nNumero aviao: " + reservas[i].num_avi);
					    achou = 1;
					  }
			     }
			   if (achou == 0)
			      System.out.println("\nNenhuma reserva foi cadastrada para este nome");
			 }
	  } while (op != 6);
	}
	private static class Reserva
	{ public int num_avi;
	  public String nome;
	}
}    