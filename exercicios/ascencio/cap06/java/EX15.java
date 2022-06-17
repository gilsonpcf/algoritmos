import java.util.Scanner;

public class EX15
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     int vet1[] = new int[10];
     int vet2[] = new int [5];
     int i, j;
     boolean achou=false; 
     
     for (i=0;i<10;i++)
     { System.out.println("Digite o " + (i+1) + "o número do vetor 1");
       vet1[i] = entrada.nextInt(); 
     }
     
     for (i=0;i<5;i++)
     { System.out.println("Digite o " + (i+1) + "o número do vetor 2");
       vet2[i] = entrada.nextInt(); 
     }

     for (i=0;i<10;i++)
     { achou = false;
       System.out.println("Numero " + vet1[i]);
       for (j=0;j<5;j++)
       { if (vet1[i] % vet2[j] == 0)
            { System.out.println("Divisível por " + vet2[j] + " na posição " + j);
              achou = true;
            }
       }
     }         
     if (achou == false)
        System.out.println("Não possui divisores no 2º vetor");
   }
}                       