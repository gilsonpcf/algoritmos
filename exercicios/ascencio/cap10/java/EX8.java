import java.util.Scanner;
public class EX8
{ public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  Professor prof[];
	  prof = new Professor[14];
	  Título titulo[];
	  titulo = new Título[5];
	
	  int i, j, achou, cont, lin;
	  float total_geral=0;
	
	  for (i=0;i<14;i++)
	    { prof[i] = new Professor();
	      prof[i].reg = 0;
	      prof[i].cod_titulo = 0;
	      prof[i].total_semanal = 0;
	      prof[i].nome = "";
	    }
	    
	  for (j=0;j<5;j++)
	    { titulo[j] = new Título();
	      titulo[j].cod_titulo = 0;
	      titulo[j].valor = 0;
	      titulo[j].desc = "";
	    }
	
	  cont=0;
	  System.out.println("\nCadastrando os 5 titulos");
	  for (j=0;j<5;j++)
	    { do
	       { System.out.print("\nDigite o codigo do " + (j+1) + "º titulo ");
			 titulo[j].cod_titulo = entrada.nextInt();
			 achou = 0;
			 for (i=0;i<cont;i++)
			   { if (titulo[i].cod_titulo == titulo[j].cod_titulo)
				achou=1;
			   }
			 if (achou == 1)
			    System.out.println("\nCodigo ja cadastrado ");
		       } while (achou == 1);
		      System.out.print("\nDigite a descricao do " + (j+1) + "º titulo ");
		      entrada = new Scanner(System.in);
		      titulo[j].desc = entrada.nextLine();
		      System.out.print("\nDigite o valor da hora aula do " + (j+1) + "º titulo ");
		      titulo[j].valor = entrada.nextFloat();
		      cont++;
	    }
	  cont=0;
	  System.out.println("\nCadastrando os 14 professores");
	  for (i=0;i<14;i++)
	    { do
	       { System.out.print("\nDigite o registro do " + (i+1) + "º professor ");
			 prof[i].reg = entrada.nextInt();
			 achou = 0;
			 for (j=0;j<cont;j++)
			   { if (prof[j].reg == prof[i].reg)
					achou=1;
			   }
			 if (achou == 1)
			    System.out.print("\nCodigo ja cadastrado ");
		    } while (achou == 1);
		  System.out.print("\nDigite o titulo do " + (i+1) + "º professor ");
		  prof[i].cod_titulo = entrada.nextInt();
		  achou = 0;
		  while (achou == 0)
			{ for (j=0;j<5;j++)
			    { if (titulo[j].cod_titulo == prof[i].cod_titulo)
					 achou = 1;
			    }
			  if (achou == 0)
			     { System.out.print("\nTitulo nao cadastrado. Digite novo titulo ");
			       prof[i].cod_titulo = entrada.nextInt();
			     }
			}
		  System.out.print("\nDigite a carga horaria semanal do " + (i+1) + "º professor ");
		  prof[i].total_semanal = entrada.nextInt();
		  entrada = new Scanner(System.in);
		  System.out.print("\nDigite o nome do " + (i+1) + "º professor ");
		  prof[i].nome = entrada.nextLine();
		  cont++;
		}

	  System.out.println("\nMostrando a relacao de professores \n");
	  for (i=0;i<14;i++) 
	   {
	     System.out.print("\nRegistro: " + prof[i].reg);
	     System.out.print("\nNome: " + prof[i].nome);
	     for (j=0;j<5;j++)
	       { if (prof[i].cod_titulo == titulo[j].cod_titulo)
			    { System.out.print("\nTitulacao: " + titulo[j].desc);
			      System.out.print("\nValor hora/aula: " + titulo[j].valor);
			      total_geral = titulo[j].valor * prof[i].total_semanal;
			    }
		    }
		  System.out.print("\nCH semanal: " + prof[i].total_semanal);
		  System.out.print("\nTotal Semanal:  " + total_geral + "\n");
		}
	}

	private static class Professor
	{ public int reg;
	  public int cod_titulo;
	  public int total_semanal;
	  public String nome;
	}
	
	private static class Título
	{ public int cod_titulo;
	  public float valor;
	  public String desc;
	}
}
