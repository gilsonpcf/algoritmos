import java.util.Scanner;

public class EX16
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     int vet1[] = new int[10];
     int vet2[] = new int [5];
     int vet_result1[] = new int[10];
     int vet_result2[] = new int[10];
     int i, j, poslivre1, poslivre2, soma; 
     for (i=0;i<10;i++)
     {
     	System.out.println("Digite o " + (i+1) + "o elemento do vetor 1");
     	vet1[i] = entrada.nextInt();
     	
     }
     for (i=0;i<5;i++)
     {
     	System.out.println("Digite o " + (i+1) + "o elemento do vetor 2");
     	vet2[i] = entrada.nextInt();
     	
     }

     poslivre1 = 0;
     poslivre2 = 0;

     for (i=0;i<10;i++)
     { soma = vet1[i];
       for (j=0;j<5;j++)
       {
       	 soma = soma + vet2[j];
       }
       if (soma%2 == 0)
          {
            vet_result1[poslivre1] = soma;
            poslivre1++;
          }  
       else
          {
            vet_result2[poslivre2] = soma;
            poslivre2++;
          }  
      }
     System.out.println("Primeiro vetor resultante");
     for (i=0;i<poslivre1;i++)
     { 
       System.out.println(vet_result1[i]);
     }  
     
     System.out.println("Segundo vetor resultante");     
     for (i=0;i<poslivre2;i++)
     { 
       System.out.println(vet_result2[i]);
     }  

   }
}                       