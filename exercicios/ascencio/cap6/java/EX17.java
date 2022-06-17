import java.util.Scanner;

public class EX17
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     int num[] = new int[6];
     int i, soma, qtde;
     boolean achou;
     
     for (i=0;i<6;i++)
     { System.out.println("Digite o " + (i+1) + "o elemento");
       num[i] = entrada.nextInt();
     }

     soma = 0;
     achou = false;

     System.out.println("Os numeros pares sao:");
     for (i=0;i<6;i++)
     { if (num[i]%2 == 0)
          { achou = true;
            System.out.println(num[i] + " na posicao " + i);
            soma = soma + num[i];
          }
     }       
     if (achou == false)
        { System.out.println("Nenhum número par foi digitado");
        }
     else
        { System.out.println("Soma dos pares = " + soma);
        }
      
     qtde = 0;
     achou = false;

     for (i=0;i<6;i++)
     { if (num[i]%2 != 0)
          { achou = true;
            System.out.println(num[i] + " na posicao " + i);
            qtde = qtde + 1;
          }
     }       
    if (achou == false)
       { System.out.println("Nenhum número ímpar foi digitado");
       }
    else
       { System.out.println("Quantidade dos ímpares = " + qtde);
       }
   }
}                       