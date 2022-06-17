import java.util.Scanner;

public class EX13
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     int vet[] = new int[10], i; 
     boolean achou;

     for (i=0; i<10;i++)          
     { System.out.println("Digite o " + (i+1) + "o numero: ");
       vet[i] = entrada.nextInt();
     }
     achou = false;
     
     for (i=0; i<10;i++)          
     { if (vet[i] > 50)
          { System.out.println("Numero maior que 50: " + vet[i] + " encontrado na posicao " + i);
            achou = true;
          }
     }     
     if (achou == false)
       System.out.println("Não existem números superiores a 50 no vetor");
   }
}      