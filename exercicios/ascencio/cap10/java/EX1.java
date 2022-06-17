import java.util.Scanner;
public class EX1
{
  public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     Conta conta[] = new Conta[15]; 
     int i, op, posi=0, achou, num_conta;
     float saldo_cliente, menor_saldo=0;
     String nome_cliente, n;
     for (i=0;i<15;i++)
     { conta[i] = new Conta();
       conta[i].num = 0;
       conta[i].nome = "";
       conta[i].saldo = 0;
     }
   
     do
     { System.out.print("\n\n\nMenu de Opcoes");
       System.out.print("\n1 - Cadastrar contas");
       System.out.print("\n2 - Visualizar todas as contas de um determinado cliente");
       System.out.print("\n3 - Excluir conta de menor saldo");
       System.out.print("\n4 - Sair");
       System.out.print("\nDigite sua opcao ");
       op = entrada.nextInt();
       if ((op < 1) || (op > 4))
	      System.out.println("\nOpcao Invalida");
       if (op == 1)
		  { achou = 0;
		    System.out.print("\nDigite o numero da conta a ser incluida ");
		    num_conta = entrada.nextInt();
		    for (i=0;i<15;i++)
		      { if (num_conta == conta[i].num)
			       achou = 1;
		      }
		     if (achou == 1)
			    System.out.println("\nJa existe conta cadastrada com este numero");
		     else
				{ posi = -1;
				  i = 0;
				  while (i < 15)
				    { if (conta[i].num == 0)
						 { posi = i;
						   i = 15;
						 }
				       i++;
				    }
				   if (posi == -1)
				      System.out.println("\nImpossivel cadastrar novas contas");
				   else
				      { entrada = new Scanner(System.in);
				        System.out.print("\nDigite o nome do cliente ");
						nome_cliente = entrada.nextLine();
						System.out.print("\nDigite o saldo do cliente ");
						saldo_cliente = entrada.nextFloat();
						conta[posi].num = num_conta;
						conta[posi].nome = nome_cliente;
						conta[posi].saldo = saldo_cliente;
						System.out.println("\nConta cadastrada com sucesso");
				       }
				 }
		 }

       if (op == 2)
		  { entrada = new Scanner(System.in);
		    System.out.print("\nDigite o nome do cliente a ser consultado ");
		    nome_cliente = entrada.nextLine();
		    achou = 0;
		    for (i=0;i<15;i++)
		      { if (conta[i].nome.equalsIgnoreCase(nome_cliente))
				   { System.out.print("Numero conta: " + conta[i].num + " Saldo: " + conta[i].saldo+"\n");
				     achou = 1;
				   }
		       }
		     if (achou == 0)
				System.out.print("\nNao existe conta cadastrada para este cliente");
		  }
		if (op == 3)
		   { i = 0;
		     achou = 0;
		     while (i < 15)
		       { if (conta[i].num != 0)
				    { if (i==0)
						 { menor_saldo = conta[i].saldo;
						   posi = i;
						 }
				      else
						 if (conta[i].saldo < menor_saldo)
						    { menor_saldo = conta[i].saldo;
						      posi = i;
						    }
				      achou = 1;
				    }
				  i++;
		       }
		      if (achou == 0)
			     System.out.println("\nNenhuma conta foi cadastrada");
		      else
				 { for (i=posi;i<14;i++)
				     { conta[i] = conta[i+1];
				     }
				   conta[i].num = 0;
				   conta[i].nome = "";
				   conta[i].saldo = 0;
				   System.out.print("\nConta excluida com sucesso");
				 }
		    }
    } while (op!=4);
  }

	private static class Conta
	{ public int num;
	  public String nome;
	  public float saldo;
	}
   
}   
