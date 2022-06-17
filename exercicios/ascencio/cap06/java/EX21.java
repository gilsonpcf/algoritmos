import java.util.Scanner;

public class EX21
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     int vet[] = new int[15];
     int p[] = new int[5];
     int i[] = new int[5];
     int cont, k, poslivre_p, poslivre_i;

     for (cont=0;cont<15;cont++)
     {
     	System.out.println("Digite o " + (cont+1) + "o numero");
     	vet[cont] = entrada.nextInt();
     }     

     poslivre_p = 0;
     poslivre_i = 0;
     
     for (cont=0;cont<15;cont++)
     {
       if (vet[cont]%2 == 0)
          {
            p[poslivre_p] = vet[cont];
            poslivre_p = poslivre_p + 1;
          }
       else
          {
            i[poslivre_i] = vet[cont];
            poslivre_i = poslivre_i + 1;
          }  
   
       if (poslivre_p == 5)
          {
            System.out.println("Vetor de pares cheio");
            for (k=0;k<poslivre_p;k++)
            {            
              System.out.println(p[k]);
            }
            poslivre_p = 0;
          }
       if (poslivre_i == 5)
          {
            System.out.println("Vetor de ímpares cheio");
            for (k=0;k<poslivre_i;k++)
            {               
              System.out.println(i[k]);
            }  
            poslivre_i = 0;
          } 
     }        
    if (poslivre_p != 0)
       {
         System.out.println("Vetor de pares restante");
         for (k=0;k<poslivre_p;k++)
         {               
           System.out.println(p[k]);
         }           
       }
       
    if (poslivre_i != 0)
       {
         System.out.println("Vetor de ímpares restante");
         for (k=0;k<poslivre_i;k++)
         {               
           System.out.println(i[k]);
         }           
       }
   }
}                       