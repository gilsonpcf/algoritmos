import java.util.*;
public class Ex15
{ public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
	  int vet1[], vet2[], mat[][], mat_result[][], i, j, maior=0, menor=0, mult, soma, qtde;
  
	  vet1 = new int[5];
	  vet2 = new int[10];
	  mat = new int[4][3];
	  mat_result = new int[4][3];
	  
	  	
	  System.out.println("Lendo o 1o vetor ");
	  for (i=0;i<5;i++)
	      { System.out.print("\nDigite o " + (i+1) + "o elemento ");
		    vet1[i] = entrada.nextInt();
	      }
	  System.out.println("\n\nLendo o 2o vetor ");
	  for (i=0;i<10;i++)
	      { System.out.print("\nDigite o " + (i+1) + "o elemento ");
	        vet2[i] = entrada.nextInt();
	      }
		    
      maior = vet1[0];
	  for (i=0;i<5;i++)
	      { if (vet1[i] > maior)
               maior = vet1[i];
          }     
      
      menor = vet2[0];
	  for (i=0;i<10;i++)
	      { if (vet2[i] < menor)
               menor = vet2[i];
          }     
     	    
	  mult = maior * menor;
	  System.out.println("\nMaior elemento do vetor 1: " + maior);
	  System.out.println("\nMenor elemento do vetor 2: " + menor);
	  System.out.println("\nMultiplicaçao do maior pelo menor: " + mult);
	  System.out.println("\nLendo os elementos da matriz ");
	  for (i=0;i<4;i++)
	    { for (j=0;j<3;j++)
	      	{ System.out.print("\nDigite o elemento " + (i+1) + "-" + (j+1) + " ");
		      mat[i][j] = entrada.nextInt();
			}
		}
	  System.out.println("\n\nMostrando nova matriz ");
	  for (i=0;i<4;i++)
	    { for (j=0;j<3;j++)
			{ mat_result[i][j] = mat[i][j] + mult;
			  System.out.println("\nElemento " + (i+1) + "-" + (j+1) + " " + mat_result[i][j]);
			}
	    }

     for (i=0;i<4;i++)
       { soma = 0;
         for (j=0;j<3;j++)
           { if (mat_result[i][j]%2 == 0)
                soma = soma + mat_result[i][j];
           }
          System.out.println("Soma dos elementos pares da linha " + i + " da matriz resultante = " + soma);
       }
       
     for (j=0;j<3;j++)
       { qtde = 0;
         for (i=0;i<4;i++)
           { if (mat_result[i][j] > 1 && mat_result[i][j] < 5)
                qtde = qtde + 1;
           }
          System.out.println("Total de números entre 1 e 5 na coluna "+ j + " da matriz resultante = " + qtde);
       }    
   }
}
