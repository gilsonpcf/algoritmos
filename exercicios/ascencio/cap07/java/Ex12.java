import java.util.Scanner;
public class Ex12
{ public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int mat[][], soma_linha[], soma_coluna[], soma_diagp, soma_diags, i, j, compara;
	  boolean q_magico;

      mat = new int[4][4];
 	  soma_linha = new int[4];
 	  soma_coluna = new int[4]	  ;

      System.out.println("\nDigitando os elementos da matriz 4 X 4 \n");
  	  for (i=0;i<4;i++)
	    { for (j=0;j<4;j++)
	   		{ System.out.print("\nDigite elemento " + i + "-" + j + " ");
			  mat[i][j] = entrada.nextInt();
			}	
		}


      for (i=0;i<4;i++)
        { soma_linha[i] = 0;
          for (j=0;j<4;j++)
            { soma_linha[i] = soma_linha[i] + mat[i][j];
            }
        }

      for (i=0;i<4;i++)
        { soma_coluna[i] = 0;
          for (j=0;j<4;j++)
            { soma_coluna[i] = soma_coluna[i] + mat[j][i];
            }
        }    

      soma_diagp = 0;
      for (i=0;i<4;i++)
        { soma_diagp = soma_diagp + mat[i][i];
        }

      soma_diags = 0;
      j = 3;
      for (i=0;i<4;i++)
        { soma_diags = soma_diags + mat[i][j];
          j = j - 1;
        }  
      
      q_magico = true;
      for (i=0;i<4;i++)
        { for (j=0;j<4;j++)
            { if (soma_linha[i] != soma_coluna[j])
                 q_magico = false;
            }
        }         

      for (i=0;i<4;i++)
        { if (soma_linha[i] != soma_diagp)
             q_magico = false;
        }     

      for (i=0;i<4;i++)
        { if (soma_linha[i] != soma_diags)
             q_magico = false;
        }     

      if (q_magico == true)
         System.out.println("Forma quadrado mágico");
      else
         System.out.println("Não forma quadrado mágico");
   }
}            