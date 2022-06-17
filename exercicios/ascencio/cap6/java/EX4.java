import java.util.Scanner;
public class EX4
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     int num[] = new int[8];
     int pos[] = new int[8];
     int neg[] = new int[8];     
     int cont, cont_n, cont_p, i;
     cont_n = 0;
     cont_p = 0;
     for (i=0;i<8;i++)
       { System.out.println("Digite o " + (i+1) + "o número: ");
         num[i] = entrada.nextInt();
         if (num[i] >= 0)
           { pos[cont_p] = num[i];
             cont_p++;
           }
         else
           { neg[cont_n] = num[i];
             cont_n++;
           }  
       }    
     if (cont_n == 0)
        System.out.println("Vetor de negativos vazio");
     else
        { System.out.println("Números negativos ");
          for (i=0;i<cont_n;i++)
             System.out.println(neg[i]);
        }     
     if (cont_p == 0)
        System.out.println("Vetor de positivos vazio");
     else
        { System.out.println("Números positivos ");
          for (i=0;i<cont_p;i++)
             System.out.println(pos[i]);
        }     
  }
}  