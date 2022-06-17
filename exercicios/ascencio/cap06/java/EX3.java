import java.util.Scanner;
public class EX3
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     int vet1[] = new int[10];
     int vet2[] = new int[10];
     int vet3[] = new int[20];
     int i, j;
     j = 0;
     for (i=0;i<10;i++)
      { System.out.println("Digite o " + (i+1) + "o numero do vetor 1: ");
        vet1[i] = entrada.nextInt();
        vet3[j] = vet1[i];
        j++;
        System.out.println("Digite o " + (i+1) + "o numero do vetor 2: ");
        vet2[i] = entrada.nextInt();        
        vet3[j] = vet2[i];
        j++;
      }
     System.out.println("\nVetor intercalado");
     for (i=0;i<20;i++)
      { 
        System.out.println(vet3[i]);
      }   
   }
}      