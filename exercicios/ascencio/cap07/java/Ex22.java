import java.util.Scanner;
public class Ex22
{ public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  float prod[][], tot_arm, maior_e=0, menor_e=0, custo_p, custo_a;
  	  int i, j, ind_a=0;
 	  
  	  prod = new float[5][3];
  	  
	  for (i=0;i<4;i++)
	    { for (j=0;j<3;j++)
			{ System.out.print("\nDigite o estoque do produto " + (j+1) + " no armazém " + (i+1) + " ");
			  prod[i][j] = entrada.nextFloat();
			}
	    }
	  for (i=0;i<3;i++)
	    {  System.out.print("\nDigite o custo do produto " +  (i+1) + " ");
		   prod[4][i] = entrada.nextFloat();
		}
	
	  for (i=0;i<4;i++)
	    { tot_arm = 0;
	      for (j=0;j<3;j++)
			{  tot_arm = tot_arm + prod[i][j];
			}
		  System.out.println("\nO total de itens no armazém " + (i+1) + " - " + tot_arm);
		  if (i == 0)
			  { menor_e = tot_arm;
			    ind_a = i;
			  }
          else
          {   if (tot_arm < menor_e)
		          { menor_e = tot_arm;
		            ind_a = i; 
		          }
          }        
	    }
	  
	  System.out.println("\nArmazém com menor estoque  " + (ind_a + 1)); 
	    
	  for (i=0;i<4;i++)
	    { if (i==0)
			 { maior_e = prod[i][1];
			   ind_a = i;
			 }
	      else
			 { if (prod[i][1] > maior_e)
			      { maior_e = prod[i][1];
					ind_a = i;
			      }
			 }
		}
	  System.out.print("\nO maior estoque do produto 2 está no armazém " + (ind_a+1));
	  for (i=0;i<3;i++)
	    { custo_p = 0;
	      for (j=0;j<4;j++)
			{  custo_p = custo_p + prod[j][i] * prod[4][i];
			}
		  System.out.print("\nO custo total do produto " + (i+1) + " - " + custo_p);
	    }
	  for (i=0;i<4;i++)
	    { custo_a = 0;
	      for (j=0;j<3;j++)
			{  custo_a = custo_a + prod[i][j] * prod[4][j];
			}
		  System.out.println("\nO custo total do armazém " + (i+1) + " - " + custo_a);
	   	}
   } 	    	
}

