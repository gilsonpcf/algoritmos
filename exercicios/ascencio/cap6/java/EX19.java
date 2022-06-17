import java.util.Scanner;

public class EX19
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     char vet1[] = new char[20];
     char vet2[] = new char[20];     
     char aux;
     int i, j;
     
     for (i=0;i<20;i++)
     {
     	System.out.println("Digite o " + (i+1) + "o caractere do vetor 1");
     	vet1[i] = entrada.next().charAt(0);
     }

     for (i=0;i<20;i++)
     {
     	System.out.println("Digite o " + (i+1) + "o caractere do vetor 2");
     	vet2[i] = entrada.next().charAt(0);
     }

     System.out.println("Conteúdo do vetor 1");
     for (i=0;i<20;i++)
     {
     	System.out.print(vet1[i] + "  ");
     	
     }

     System.out.println("\nConteúdo do vetor 2");
     for (i=0;i<20;i++)
     {
     	System.out.print(vet2[i] + "  ");
     	
     }

     j = 19;

     for (i=0;i<20;i++)
     {
       aux = vet1[i];
       vet1[i] = vet2[j];
       vet2[j] = aux;
       j--;
      }  

     System.out.println("\nConteúdo do vetor 1 alterado");
     for (i=0;i<20;i++)
     {
     	System.out.print(vet1[i] + "  ");
  	
     }

     System.out.println("\nConteúdo do vetor 2 alterado");
     for (i=0;i<20;i++)
     {
     	System.out.print(vet2[i] + "  ");
  	
     }
   }
}                       