import java.util.Scanner;
public class EX7_B
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     int vet[] = new int[8];
     int i, j, z, aux;
     for (i=0;i<8;i++)
       { System.out.println("Digite o " + (i+1) + "o elemento do vetor: ");
         aux = entrada.nextInt();
         j = 0;
         while ((j<i) && vet[j] < aux)
          { 
            j++;
          }
         for (z=i;z>j;z--)
          { 
            vet[z] = vet[z-1];
          }
         vet[j] = aux;
       }
     System.out.println("\nVetor Ordenado \n");
     for (i=0;i<8;i++)
       { 
         System.out.println(vet[i]);
       }  
  }
}  