import java.util.Scanner;

public class EX24
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     int a[] = new int[10], repetidos[] = new int[10], vezes[] = new int[10];
     int i, j, qtde, cont, cont_r;
     for (i=0; i<10; i++)
     {
     	System.out.println("Digite o " + (i+1) + "o numero do vetor");
     	a[i] = entrada.nextInt();
     }

     cont_r = 0;
     for (i=0; i<10; i++)
     { qtde = 1;
       for (j=0; j<i; j++)
       { if (i != j)
            { if (a[i] == a[j])
                 qtde = qtde + 1;
            }
        }    
         if (qtde > 1)
            { cont = 0;
              while (cont < cont_r && a[i] != repetidos[cont]) 
              {
                cont = cont + 1;
              }
              if (cont == cont_r)
                 { repetidos[cont_r] = a[i];
                   vezes[cont_r] = qtde;
                   cont_r = cont_r + 1;

                 }
              else
              vezes[cont] = vezes[cont]+1;   
            }
     }               
     for (i=0; i<cont_r; i++)
     { System.out.println("O numero " + repetidos[i] + " apareceu " + vezes[i] + " vezes");
     }
  }
}                       