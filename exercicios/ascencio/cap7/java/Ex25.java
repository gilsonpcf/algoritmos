import java.util.Scanner;
public class Ex25
{ public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int mes1[][], mes2[][], bim[][], i, j, tot_prod, tot_loja, maior=0;
	  
	  mes1 = new int[5][3];
	  mes2 = new int[5][3];
	  bim = new int[5][3];

	  for (i=0;i<5;i++)
	    { for (j=0;j<3;j++)
			{ System.out.print("\nDigite a venda do produto " + (i+1) + " na loja " + (j+1) + " referente ao mˆs 1 ");
			  mes1[i][j] = entrada.nextInt();
			}
	    }

	  for (i=0;i<5;i++)
	    { for (j=0;j<3;j++)
			{ System.out.print("\nDigite a venda do produto " + (i+1) + " na loja " + (j+1) + " referente ao mˆs 2 ");
			  mes2[i][j] = entrada.nextInt();
			}
	    }

	  for (i=0;i<5;i++)
	    { for (j=0;j<3;j++)
			{ bim[i][j] = mes1[i][j] + mes2[i][j];
			  System.out.println("\nVenda bimestral do produto " + (i+1) + " na loja " + (j+1) + " foi " + bim[i][j]);
			  if ((i==0) && (j==0))
			      maior = bim[i][j];
			  else
			     { if ((bim[i][j] > maior))
					  maior = bim[i][j];
			     }
			}
	    }
	  System.out.println("\nA maior venda do bimestre foi " + maior);

	  for (i=0;i<3;i++)
	    { tot_loja = 0;
	      for (j=0;j<5;j++)
			{ tot_loja = tot_loja + bim[j][i];
			}
	      System.out.println("\nO total vendido no bimestre pela loja " + (i+1) + " foi " + tot_loja);
		}

	  for (i=0;i<5;i++)
	    { tot_prod = 0;
	      for (j=0;j<3;j++)
			{ tot_prod = tot_prod + bim[i][j];
			}
	      System.out.println("\nO total vendido do produto " + (i+1) + " foi de " + tot_prod);
	    }
   } 		
}
