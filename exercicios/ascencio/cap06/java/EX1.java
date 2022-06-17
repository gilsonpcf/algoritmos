import java.util.Scanner;
public class EX1
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     int num[] = new int[9];
     int i, j, cont;
     for (i=0;i<9;i++)
       { System.out.println("Digite o " + (i+1) + " numero: ");
         num[i] = entrada.nextInt();
       }  
     for (i=0;i<9;i++)
       { cont = 0;
         for (j=1;j<=num[i];j++)
           { if (num[i] % j == 0)
               cont++;
           }
         if (cont <= 2)
            { 
              System.out.println("Numero primo: " + num[i] + " na posição " + i);
            }
       }
   }
}             