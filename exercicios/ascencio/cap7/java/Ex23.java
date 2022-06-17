import java.util.Scanner;
public class Ex23
{ public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  float vendas[][], tot_ven, tot_sem, tot_geral;
	  int i, j;
	  
	  vendas = new float[4][5];
  
	  for (i=0;i<4;i++)
    	{ for (j=0;j<5;j++)
			{ System.out.print("\nDigite o valor da venda do vendedor " + (j+1) + " na semana " + (i+1) + " ");
			  vendas[i][j] = entrada.nextFloat();
			}
	    }

	  for (i=0;i<5;i++)
    	{ tot_ven = 0;
	      for (j=0;j<4;j++)
			{  tot_ven = tot_ven + vendas[j][i];
			}
     	  System.out.println("\nO total de vendas do vendedor " + (i+1) + " foi de " + tot_ven);
	    }

	  for (i=0;i<4;i++)
	    { tot_sem = 0;
    	  for (j=0;j<5;j++)
			{  tot_sem = tot_sem + vendas[i][j];
			}
	  	  System.out.println("\nO total de vendas da semana " + (i+1) + " foi de " + tot_sem);
    	}

	  tot_geral = 0;
	  for (i=0;i<4;i++)
    	{ for (j=0;j<5;j++)
			{  tot_geral = tot_geral + vendas[i][j];
			}
	    }
	  System.out.println("\nO total geral de vendas = " + tot_geral);
   } 
}

