import java.util.Scanner;
public class Ex7
{ public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int mat[][], i, j, k, achou, maior, menor, num, linha1, linha2, coluna1, coluna2, cont;
  	  
  	  mat = new int[5][7];
 
  
	  System.out.println("\nDigitando os numeros da matriz 5 X 7 ");
	  
	  for (i=0;i<5;i++)
	    { for (j=0;j<7;j++)
			{ System.out.print("Digite o elemento da linha " + i + " e da coluna " + j + " ");
			  mat[i][j] = entrada.nextInt();
			}
		}
	  cont = 0;
	  for (i=0;i<5;i++)
		{ menor = mat[i][0];
  		  linha1 = i;
  		  coluna1 = 0;
  	  	  for (j=0;j<7;j++)
			{ if (mat[i][j] < menor)
     			{ menor = mat[i][j];
       			  linha1 = i;
       		  	  coluna1 = j;
	     		}
			}
      	  maior = mat[0][coluna1];
	  	  linha2 = 0;
  		  for (j=0;j<5;j++)
			{ if (mat[j][coluna1] > maior)
			    { maior = mat[j][coluna1];
    	   		  linha2 = j;
     			}
			}
	      if (linha1 == linha2)
			 { System.out.println("\nPonto de sela = " + maior + " na posiçao " + linha1 + "-" + coluna1);
			   cont++;
			 }
    	}
	  if (cont == 0)
	     System.out.println("\nNao existe ponto de sela nesta matriz ");
  } 	 
}