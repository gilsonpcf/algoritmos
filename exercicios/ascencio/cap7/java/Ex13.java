import java.util.Scanner;
public class Ex13
{ public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
    String nome[], aux, valor;
    float preco[][], custo[], imp[][], preco_final;
    int i,j;
  
    nome = new String[5];
    preco = new float[5][4];
    custo = new float[5];
    imp = new float[5][4];
	
	  for (i=0;i<5;i++)
	    { System.out.print("\nDigite o nome do " + (i+1) + "o produto ");
	      nome[i] = entrada.nextLine();
	    }
	  for (i=0;i<5;i++)
	    { for (j=0;j<4;j++)
			{ System.out.print("\nDigite o preço do produto " + nome[i] + " na loja " + (j+1) + " ");
			  preco[i][j] = entrada.nextFloat();
			}
	    }
	  for (i=0;i<5;i++)
	    { System.out.print("\nDigite o custo de transporte do produto " + nome[i] + " ");
	      custo[i] = entrada.nextFloat();
	    }
	  for (i=0;i<5;i++)
	    { for (j=0;j<4;j++)
			{ if (preco[i][j] <= 50)
			     { imp[i][j] = preco[i][j] * 5 / 100;
			      }
			  else
			     { if ((preco[i] [j] > 50) && (preco[i] [j] <= 100))
					  { imp[i][j] = preco[i][j] * 10 / 100;
					  }
			       else
					  { imp[i][j] = preco[i][j] * 15 / 100;
					  }
			     }
			}
	    }
	  for (i=0;i<5;i++)
	    {
	      for (j=0;j<4;j++)
			{ preco_final = preco[i][j] + imp[i][j] + custo[i];
			  System.out.println("\nInformaçoes sobre o produto " + nome[i] + " na loja " + j);
			  System.out.println("\nValor do imposto " + imp[i][j]);
			  System.out.println("\nCusto de transporte " + custo[i]);
			  System.out.println("\nPreco " + preco[i][j]);
			  System.out.println("\nPreço final " + preco_final);
			}
	    }
   }
}