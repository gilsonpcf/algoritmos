import java.util.Scanner;
public class EX6
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     int vet[] = new int[10];
     int i, j, aux;
     for (i=0;i<10;i++)
      { System.out.println("Digite o " + (i+1) + "o elemento do vetor: ");
        vet[i] = entrada.nextInt();
      }
     for (i=0;i<10;i++)
       { for (j=0;j<9;j++)
          { if (vet[j] < vet[j+1])
             { aux = vet[j];
               vet[j] = vet[j+1];
               vet[j+1] = aux;
             }
          }
       }        
     System.out.println("\nVetor ordenado de forma decrescente");
     for (i=0;i<10;i++)    
      { 
        System.out.println(vet[i]);
      }
  }
}  
