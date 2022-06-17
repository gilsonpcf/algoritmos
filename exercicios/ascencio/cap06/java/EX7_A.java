import java.util.Scanner;
public class EX7_A
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     int vet[] = new int[8];
     int i, j, z, aux;
     i = 0;
     while (i<8)
     { System.out.println("Digite o " + (i+1) + "o elemento do vetor: ");
       aux = entrada.nextInt();
       j = 0;
       while (j < i && vet[j] < aux) 
       { j++;
       }
       z = i;
       while (z >= j + 1)
       { vet[z] = vet[z-1];
         z--;
       }
      vet[j] = aux;
      i++;
   }
   System.out.println("\nVetor ordenado");
   for (i=0;i<8;i++)   
   { 
     System.out.println(vet[i]);
   }
 }
} 