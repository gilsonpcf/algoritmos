import java.util.Scanner;
public class EX22
{ public static void main(String args[])
    { Scanner entrada = new Scanner(System.in);
      int vet1[], vet2[], vet3[], i, cont1, cont2;
      vet1 = new int[8];
      vet2 = new int[8];
      vet3 = new int[8];
      
      for (i=0;i<8;i++)
        { System.out.print("Digite um numero no vetor ");
          vet1[i] = entrada.nextInt(); 
        }       

      cont1 = pares(vet1, vet2);
      
      if (cont1 == 0)
         System.out.println("NENHUM PAR FOI DIGITADO");
      else
         { System.out.println("Vetor de pares\n");
           for (i=0;i<cont1;i++)
                System.out.print(vet2[i] + "  ");
         }
      
      cont2 = impares(vet1, vet3);
      
      if (cont2 == 0)
         System.out.println("NENHUM ÍMPAR FOI DIGITADO");
      else
         { System.out.println("Vetor de impares\n");
           for (i=0;i<cont2;i++)
                System.out.print(vet3[i] + "  ");
         }
      
    } 
  public static int pares(int v1[], int v2[])
  { int i, r, cont;
    cont = 0;
    for (i=0;i<8;i++)
        { r = v1[i] % 2;
          if (r == 0)
             { v2[cont] = v1[i];
               cont = cont + 1;
             }
        }       
    return cont;
  }   

  public static int impares(int v1[], int v2[])
  { int i, r, cont;
    cont = 0;
    for (i=0;i<8;i++)
        { r = v1[i] % 2;
          if (r == 1)
             { v2[cont] = v1[i];
               cont = cont + 1;
             }
        }       
    return cont;
  }   
}	