import java.util.Scanner;
public class EX3
{
  public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
    Cliente clientes[];
    Documento docs[];
    clientes = new Cliente[15];
    docs = new Documento[10];
    
    int posi=-1,op, i, j, k, cliente_livre, doc_livre, achou, codigo, numero;
    int diav, mesv, anov, diap, mesp, anop, dia_inicial, mes_inicial, ano_inicial;
    int dia_final, mes_final, ano_final;
    float valor, juros, total;
    String nome, fone, ende;
    
    for (i=0;i<15;i++)
    { clientes[i] = new Cliente();
      clientes[i].cod_cli = 0;
      clientes[i].nome = "";
      clientes[i].fone = "";
      clientes[i].ende = "";
    }
    cliente_livre = 0;
    for(i=0;i<10;i++)
    { docs[i] = new Documento();
      docs[i].num_doc = 0;
      docs[i].cod_cli = 0;
      docs[i].dv = 0;
      docs[i].mv = 0;
      docs[i].av = 0;
      docs[i].dp = 0;
      docs[i].mp = 0;
      docs[i].ap = 0;
      docs[i].valor = 0;
      docs[i].juros = 0;
    }
    doc_livre = 0;
    do
    { System.out.print("\nMenu de Opcoes");
      System.out.print("\n1 - Cadastrar clientes");
      System.out.print("\n2 - Cadastrar documentos");
      System.out.print("\n3 - Excluir clientes");
      System.out.print("\n4 - Excluir documentos individuais");
      System.out.print("\n5 - Excluir documentos por cliente");
      System.out.print("\n6 - Excluir documentos por periodo");
      System.out.print("\n7 - Alterar clientes");
      System.out.print("\n8 - Totalizar documentos");
      System.out.print("\n9 - Sair");
      System.out.print("\nDigite sua opcao ");
      op = entrada.nextInt();
      if ((op < 1) || (op > 9))
	     System.out.println("Opcao invalida");
      if (op == 1)
	  	 { if (cliente_livre == 15)
		      System.out.println("\nCadastro de clientes lotado");
		   else
		      { System.out.print("\nDigite o codigo do cliente a ser cadastrado ");
				codigo = entrada.nextInt();
				achou = 0;
				for (i=0;i<15;i++)
				  { if (clientes[i].cod_cli == codigo)
				       achou = 1;
				  }
				if (achou == 1)
				   System.out.println("\nJa existe cliente cadastrado com este codigo");
				else
				   { entrada = new Scanner(System.in);
				     clientes[cliente_livre].cod_cli = codigo;
				   	 System.out.print("\nDigite o nome do cliente ");
				     clientes[cliente_livre].nome = entrada.nextLine();
				     System.out.print("\nDigite o telefone do cliente ");
				     clientes[cliente_livre].fone = entrada.nextLine();
				     System.out.print("\nDigite o endereco do cliente ");
				     clientes[cliente_livre].ende = entrada.nextLine();
				     System.out.print("\nCliente cadastrado com sucesso");
				     cliente_livre++;
				   }
		      }
		 }

      if (op == 2)
		 { if (doc_livre == 10)
		      System.out.println("\nCadastro de documentos lotado ");
		   else
		      { System.out.print("\nDigite o numero do documento a ser cadastrado ");
			    numero = entrada.nextInt();
				achou = 0;
				for (i=0;i<10;i++)
				  { if (docs[i].num_doc == numero)
				       achou = 1;
				  }
				if (achou == 1)
				   System.out.println("\nJa existe um documento cadastrado com este c¢digo");
				else
				   { System.out.print("\nDigite o codigo do cliente dono do documento ");
				     codigo = entrada.nextInt();
				     achou = 0;
				     for (i=0;i<cliente_livre;i++)
				       { if (clientes[i].cod_cli == codigo)
					    	achou = 1;
				       }	 
				     if (achou == 0)
						System.out.println("\nNao existe cliente cadastrado com este codigo ");
				     else
						{ System.out.print("\nDigite a data do vencimento do documento ");
						  System.out.print("\ndia ==> ");
						  diav = entrada.nextInt();
						  System.out.print("mes ==> ");
						  mesv = entrada.nextInt();
						  System.out.print("ano ==> ");
						  anov = entrada.nextInt();
						  System.out.print("\nDigite a data do pagamento do documento ");
						  System.out.print("\ndia ==> ");
						  diap = entrada.nextInt();
						  System.out.print("mes ==> ");
						  mesp = entrada.nextInt();
						  System.out.print("ano ==> ");
						  anop = entrada.nextInt();
						  System.out.print("\nDigite o valor do documento ");
						  valor = entrada.nextFloat();
						  if (anop > anov)
						     juros = valor * 5 / 100;
						  else
						     if ((anop == anov) && (mesp > mesv))
								juros = valor * 5 / 100;
						     else
								if ((anop == anov) && (mesp == mesv) && (diap > diav))
								   juros = valor * 5 / 100;
								else
								   juros = 0;
						  docs[doc_livre].num_doc = numero;
						  docs[doc_livre].cod_cli = codigo;
						  docs[doc_livre].dv = diav;
						  docs[doc_livre].mv = mesv;
						  docs[doc_livre].av = anov;
						  docs[doc_livre].dp = diap;
						  docs[doc_livre].mp = mesp;
						  docs[doc_livre].ap = anop;
						  docs[doc_livre].valor = valor;
						  docs[doc_livre].juros = juros;
						  System.out.println("\nDocumento cadastrado com sucesso");
						  doc_livre++;
						}
				   }
		      }
		 }

      if (op == 3)
		 { System.out.println("\nDigite o codigo do cliente a ser excluido ");
		   codigo = entrada.nextInt();
		   achou = 0;
		   for (i=0;i<15;i++)
		     { if (clientes[i].cod_cli == codigo)
				  { achou = 1;
				    posi=i;
				  }
		     }
		   if (achou == 0)
		      System.out.println("\nNao existe cliente cadastrado com este codigo");
		   else
		      { achou = 0;
				for (i=0;i<10;i++)
				  { if (docs[i].cod_cli == codigo)
				       achou = 1;
				  }
			if (achou == 1)
			   System.out.println("\nEste cliente nao pode ser excluido, possui documento");
			else
			   { for (i=posi;i<cliente_livre;i++)
			       { clientes[i].cod_cli = clientes[i+1].cod_cli;
					 clientes[i].nome = clientes[i+1].nome;
					 clientes[i].fone = clientes[i+1].fone;
					 clientes[i].ende = clientes[i+1].ende;
					 cliente_livre = cliente_livre -1;
			       }
			     System.out.println("\nCliente excluido com sucesso");
			     cliente_livre--;
			   }
		      }
		 }

      if (op == 4)
		 { System.out.print("\nDigite o numero do documento a ser excluido ");
		   numero = entrada.nextInt();
		   achou = 0;
		   for (i=0;i<10;i++)
		     { if (docs[i].num_doc == numero)
				  { achou = 1;
				    posi = i;
				  }
		     }
		   if (achou == 0)
		      System.out.print("\nNao existe documento cadastrado com esse numero ");
		   else
		      { for (i=posi;i<doc_livre;i++)
				  { docs[i].num_doc = docs[i+1].num_doc;
				    docs[i].cod_cli = docs[i+1].cod_cli;
				    docs[i].dv = docs[i+1].dv;
				    docs[i].mv = docs[i+1].mv;
				    docs[i].av = docs[i+1].av;
				    docs[i].dp = docs[i+1].dp;
				    docs[i].mp = docs[i+1].mp;
				    docs[i].ap = docs[i+1].ap;
				    docs[i].valor = docs[i+1].valor;
				    docs[i].juros = docs[i+1].juros;
				  }
				System.out.print("\nDocumento exclu¡do com sucesso");
				doc_livre--;
			  }
		 }

      if (op == 5)
		 { System.out.print("\nDigite o codigo do cliente do qual deseja excluir os documentos ");
		   codigo = entrada.nextInt();
		   achou = 0;
		   for (i=0;i<15;i++)
		     { if (clientes[i].cod_cli == codigo)
			  		achou = 1;
		     }
		   if (achou == 0)
		      System.out.println("\nNao existe cliente cadastrado com este c¢digo");
		   else
		      { if (doc_livre == 0)
				   System.out.println("\nNao existe documento cadastrado");
				else
				   { k = 0;
				     achou = 0;
				     while (k < doc_livre)
				       { if (codigo == docs[k].cod_cli)
						    { for (i=k;i<doc_livre;i++)
								{ docs[i].num_doc = docs[i+1].num_doc;
								  docs[i].cod_cli = docs[i+1].cod_cli;
								  docs[i].dv = docs[i+1].dv;
								  docs[i].mv = docs[i+1].mv;
								  docs[i].av = docs[i+1].av;
								  docs[i].dp = docs[i+1].dp;
								  docs[i].mp = docs[i+1].mp;
								  docs[i].ap = docs[i+1].ap;
								  docs[i].valor = docs[i+1].valor;
								  docs[i].juros = docs[i+1].juros;
								  achou = 1;
								}
						      doc_livre--;
						    }
						 else k++;
				       }
				     if (achou == 0)
						System.out.println("\nNao existe documento cadastrado para este cliente");
				     else
						System.out.println("\nDocumentos excluidos com sucesso");
				   }
		      }
		 }

      if (op == 6)
		 { System.out.print("\nDigite a data inicial dos documentos que serao excluidos");
		   System.out.print("\ndia ==> ");
		   dia_inicial = entrada.nextInt();
		   System.out.print("mes ==> ");
		   mes_inicial = entrada.nextInt();
		   System.out.print("ano ==> ");
		   ano_inicial = entrada.nextInt();
		   System.out.print("\nDigite a data final dos documentos que serao excluidos");
		   System.out.print("\ndia ==> ");
		   dia_final = entrada.nextInt();
		   System.out.print("mes ==> ");
		   mes_final = entrada.nextInt();
		   System.out.print("ano ==> ");
		   ano_final = entrada.nextInt();
		   k = 0;
		   achou = 0;
		   while (k < doc_livre)
		     { if ((docs[k].av > ano_inicial) || ((docs[k].av == ano_inicial) && (docs[k].mv > mes_inicial)) ||
			      ((docs[k].av == ano_inicial) && (docs[k].mv == mes_inicial) && (docs[k].dv >= dia_inicial)))
					if ((docs[k].av < ano_final) || ((docs[k].av == ano_final) && (docs[k].mv < mes_final)) ||
			           ((docs[k].av == ano_final) && (docs[k].mv == mes_final) && (docs[k].dv <= dia_final)))
						  { for (i=k;i<doc_livre;i++)
						      { docs[i].num_doc = docs[i+1].num_doc;
								docs[i].cod_cli = docs[i+1].cod_cli;
								docs[i].dv = docs[i+1].dv;
								docs[i].mv = docs[i+1].mv;
								docs[i].av = docs[i+1].av;
								docs[i].dp = docs[i+1].dp;
								docs[i].mp = docs[i+1].mp;
								docs[i].ap = docs[i+1].ap;
								docs[i].valor = docs[i+1].valor;
								docs[i].juros = docs[i+1].juros;
						      }
						    doc_livre--;
						    achou = 1;
						  }
		      		 else k++;
		       else k++;		 
		     }
		   if (achou == 0)
		       System.out.println("\nNao existe documento neste periodo");
		   else
		       System.out.println("\nDocumentos exclu¡dos com sucesso");
		 }

      if (op == 7)
		 { System.out.print("\nDigite o c¢digo do cliente a ser alterado ");
		   codigo = entrada.nextInt();
		   achou = 0;
		   for (i=0;i<15;i++)
		     { if (clientes[i].cod_cli == codigo)
				  { achou = 1;
				    posi = i;
				  }
		     }
		   if (achou == 0)
		       System.out.println("\nNao existe cliente cadastrado com este codigo para ser alterado ");
		   else
		      { entrada = new Scanner(System.in);
		        System.out.print("\nDigite o novo nome do cliente ");
				clientes[posi].nome = entrada.nextLine();
				System.out.print("\nDigite o novo telefone do cliente ");
				clientes[posi].fone = entrada.nextLine();
				System.out.print("\nDigite o novo endereco do cliente ");
				clientes[posi].ende = entrada.nextLine();
				System.out.println("\nCliente alterado com sucesso");
		      }
		 }

      if (op == 8)
		 { System.out.print("\nDigite o codigo do cliente do qual deseja totalizar os documentos ");
		   codigo = entrada.nextInt();
		   achou = 0;
		   for (i=0;i<15;i++)
		     { if (clientes[i].cod_cli == codigo)
				  achou = 1;
		     }
		   if (achou == 0)
		      System.out.println("\nNao existe cliente cadastrado com este codigo ");
		   else
		      { total = 0;
				for (i=0;i<10;i++)
				  { if (docs[i].cod_cli == codigo)
				       { total = total + docs[i].valor + docs[i].juros;
				       }
				  }
				System.out.println("\nTotal dos documentos do cliente de c¢digo " + codigo + " = " + total);
		      }
		 }
    } while (op!=9);
}
	private static class Cliente
	{ public int cod_cli;
	  public String nome;
	  public String fone; 
	  public String ende;
	} 
	private static class Documento
	{ private int num_doc;
	  private int cod_cli;
	  private int dv;
	  private int mv;
	  private int av;
	  private int dp;
	  private int mp;
	  private int ap;
	  private float valor;
	  private float juros;
	}
}
