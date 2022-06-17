import java.util.Scanner;
public class EX25
{ 
	public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
      int vetor[], i;
      
      vetor = new int[25];
      
      for (i=0;i<25;i++)
          { System.out.print("Digite o numero da posiçao " + i + ": ");
            vetor[i] = entrada.nextInt();
          }  
      
      substituicao(vetor);
      
      System.out.println("\nVetor alterado"); 
      for (i=0;i<25;i++)
          { System.out.print(vetor[i] + "  ");
          }        
    }
    public static void substituicao(int vet[])
    { int z;
      for (z=0;z<25;z++)
          { if (vet[z] < 0) vet[z] = 0;
          }
    }
}          	   	