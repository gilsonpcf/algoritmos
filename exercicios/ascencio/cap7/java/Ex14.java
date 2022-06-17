import java.util.Scanner;
public class Ex14
{ public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  String cidade[], aux;
	  float distancia[][], consumo, qtde;
	  int i, j; 
  
	  cidade = new String[5];
	  distancia = new float[5][5];
	
	  for (i=0;i<5;i++)
	      { System.out.print("\nDigite o nome da cidade " + (i+1) + " ");
	        cidade[i] = entrada.nextLine();
		  }
	  for (i=0;i<5;i++)
	      { for (j=0;j<5;j++)
	   		  { if (i == j)
				     { distancia[i][j] = 0;
				     }
				  else
				     { System.out.print("\nDigite a distancia entre " + cidade[i] + " e " + cidade[j] + " ");
				       distancia[i][j] = entrada.nextFloat();
				     }
			  }
		    }
		for (i=0;i<5;i++)
		    { for (j=0;j<5;j++)
				{ if ((distancia[i][j] <= 250) && (distancia[i][j] > 0))
				     {  System.out.print("\nDistancia: " + distancia[i][j] + " entre " + cidade[i] + " e " + cidade[j]);
				     }
				}
		    }
		System.out.println("\nDigite o consumo de um ve¡culo (Km por litro)");
		consumo = entrada.nextFloat();
		for (i=0;i<5;i++)
		    { for (j=0;j<5;j++)
				{ if (i != j)
				     { qtde = distancia[i][j] / consumo;
				       System.out.print("\nConsumo entre " + cidade[i] + " e " + cidade[j] + " = " + qtde);
				     }
				}
		    }
		    
   }
}