import java.util.Scanner;
public class EX2
{
	public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  Tipo tipos[];
	  Serviço serv[][];
	  tipos = new Tipo[4];
	  serv = new Serviço[30][3];
	   
	  int i, j, op, codigo_serv, achou=0, dia, codigo_cliente, num_serv, valida, k;
	  float valor_inicial, valor_final, valor_serv;
	  String desc_serv, desc;
	
	  for (i=0;i<4;i++)
	  { tipos[i] = new Tipo();
	    tipos[i].cod = 0;
	    tipos[i].desc = "";
	  }
	  for (i=0;i<30;i++)
	  { for (j=0;j<3;j++)
		    { serv[i][j] = new Serviço();
		      serv[i][j].num = 0;
			  serv[i][j].valor = 0;
			  serv[i][j].cod_serv = 0;
			  serv[i][j].cod_cliente = 0;
			}
	  }

	do
	  { System.out.print("\n\nMenu de Opcoes");
	    System.out.print("\n1 - Cadastrar tipos de servicos");
	    System.out.print("\n2 - Cadastrar servicos prestados");
	    System.out.print("\n3 - Mostrar os servicos prestados em um determinado dia");
	    System.out.print("\n4 - Mostrar os servicos prestados dentro de um intervalo de valor");
	    System.out.print("\n5 - Mostrar um relatorio geral, separado por dia");
	    System.out.print("\n6 - Sair");
	    System.out.print("\nDigite sua opcao ");
	    op = entrada.nextInt();
	    
	    if ((op < 1) || (op > 6))
	   		System.out.println("\nOpcao Invalida");

	    if (op == 1)
			{ System.out.print("\nDigite o c¢digo do servico a ser cadastrado ");
			  codigo_serv = entrada.nextInt();
			  achou = -1;
			  for (i=0;i<4;i++)
			    { if (tipos[i].cod == 0)
					  achou = i;
			    }
			  if (achou == -1)
			     System.out.println("\nCadastro de tipos de servicos lotado ");
			  else
			     { for (i=0;i<4;i++)
					  { if (tipos[i].cod == codigo_serv)
					       achou = -1;
					  }

					if (achou == -1)
					    System.out.println("\nJa existe tipo de servico cadastrado com este codigo");
					else
					   { entrada = new Scanner(System.in);
					     System.out.print("\nDigite a descricao do tipo de servico a ser cadastrado ");
					     tipos[achou].desc = entrada.nextLine();
					     tipos[achou].cod = codigo_serv;
					     System.out.print("\nTipo de servico cadastrado com sucesso");
					   }
			      }
	       }
	       
	    if (op == 2)
	       { System.out.print("\nDigite o dia em que deseja cadastrar o servicco prestado ");
			 dia = entrada.nextInt();
			 dia--;
			 achou = -1;
			 for (j=0;j<3;j++)
			   { if (serv[dia][j].num == 0)
					achou = j;
			   }
			 if (achou == -1)
			    System.out.print("\nTodos os servicos prestados no dia " + (dia+1) + " ja foram cadastrados");
			 else
			    { System.out.print("\nDigite o codigo do servico a ser prestado ");
			      codigo_serv = entrada.nextInt();
			      valida = 0;
			      for (i=0;i<4;i++)
					{ if (tipos[i].cod == codigo_serv)
					     valida = 1;
					}
			      if (valida == 0)
					 System.out.println("\nCodigo de servico invalido");
			      else
					 { System.out.print("\nDigite o numero do servico ");
					   num_serv = entrada.nextInt();
					   System.out.print("\nDigite o valor do servico ");
					   valor_serv = entrada.nextFloat();
					   System.out.print("\nDigite o codigo do cliente ");
					   codigo_cliente = entrada.nextInt();
					   serv[dia][achou].num = num_serv;
					   serv[dia][achou].valor = valor_serv;
					   serv[dia][achou].cod_serv = codigo_serv;
					   serv[dia][achou].cod_cliente = codigo_cliente;
					   System.out.print("\nServico prestado cadastrado com sucesso ");
					 }
			     }
	     }

     if (op == 3)
		{ System.out.print("\nDigite o dia em que deseja consultar os servicos prestados ");
		  dia = entrada.nextInt();
		  dia--;
		  achou = 0;
		  for (j=0;j<3;j++)
		    { if (serv[dia][j].num != 0)
			     achou = 1;
		    }
		  if (achou == 0)
		     System.out.print("\nNenhum servico foi prestado neste dia ");
		  else
		     { System.out.print("\nServicos prestados no dia " + (dia+1));
		       for (j=0;j<3;j++)
				 { if (serv[dia][j].num != 0)
				      { System.out.print("\n\nNumero servico: " + serv[dia][j].num + "  Valor servico: " + serv[dia][j].valor);
					    System.out.print(" Codigo servico: " + serv[dia][j].cod_serv);
						for (i=0;i<4;i++)
						  { if (tipos[i].cod == serv[dia][j].cod_serv)
						       System.out.print(" - " + tipos[i].desc);
						  }
						System.out.print(" Codigo cliente: " + serv[dia][j].cod_cliente);
					   }
				   }
		      }
	      }
	      
	    if (op == 4)
	       { System.out.print("\nDigite o valor inicial ");
			 valor_inicial = entrada.nextFloat();
			 System.out.print("\nDigite o valor final ");
			 valor_final = entrada.nextFloat();
			 achou = 0;
			 for (i=0;i<30;i++)
			   { for (j=0;j<3;j++)
			       { if ((serv[i][j].valor >= valor_inicial) && (serv[i][j].valor <= valor_final))
				    { achou = 1;
				      System.out.print("\n\nNumero servico: " + serv[i][j].num + "  Valor servico: " + serv[i][j].valor);
				      System.out.print("\nCodigo servico: " + serv[i][j].cod_serv);
				      for (k=0;k<4;k++)
						{ if (tipos[k].cod == serv[i][j].cod_serv)
						     System.out.print(" - " + tipos[k].desc);
						}
				      System.out.print(" Codigo cliente: " + serv[i][j].cod_cliente);
				    }
			       }
			    }
			  if (achou == 0)
			     System.out.print("\nNenhum servico prestado esta entre os valores citados ");
	       }

	     if (op == 5)
			{ achou = 0;
			  for (i=0;i<30;i++)
			    { if (serv[i][2].num != 0)
			          System.out.print("\n\nDia " + (i+1));
			      for (j=0;j<3;j++)
					{ if (serv[i][j].num != 0)
					     { achou = 1;
					       System.out.print("\nNumero servico: " + serv[i][j].num + "  Valor servico: " + serv[i][j].valor);
					       System.out.print(" Codigo servico: " + serv[i][j].cod_serv);
					       for (k=0;k<4;k++)
							 { if (tipos[k].cod == serv[i][j].cod_serv)
							      System.out.print(" - " + tipos[k].desc);
							 }
					       System.out.print(" Codigo cliente: " + serv[i][j].cod_cliente);
					     }
					  }
			    }
			  if (achou == 0)
			     { System.out.println("\nNenhum servico prestado foi cadastrado ");
			     }
			}
	} while (op!=6);
   }
   
	private static class Tipo
	{ public int cod;
	  public String desc;
	}
	
	private static class Serviço
	{ public int num;
	  public int cod_serv;
	  public int cod_cliente;
	  public float valor;
	}  

} 

