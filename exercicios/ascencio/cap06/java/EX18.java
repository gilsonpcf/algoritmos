import java.util.Scanner;

public class EX18
{ public static void main(String args[])
   { Scanner entrada = new Scanner(System.in);
     
     int dado[] = new int[20];
     int i, num1, num2, num3, num4, num5, num6;
     
 
     for (i=0;i<20;i++) 
     { System.out.println("Digite o resultado da " + (i+1) + "a jogada");
       dado[i] =  entrada.nextInt();
       while (dado[i] < 1 || dado[i] > 6)
       { System.out.println("Valor incorreto. Digite, novamente, o resultado da " + (i+1) + "a jogada");
         dado[i] =  entrada.nextInt();
       }
     }         

     for (i=0;i<20;i++) 
     {
       System.out.println("Resultado da " + (i+1) + "a jogada = " + dado[i]);
     }
   
     num1 = 0;
     num2 = 0;
     num3 = 0;
     num4 = 0;
     num5 = 0;
     num6 = 0;

     for (i=0;i<20;i++) 
     {
       if (dado[i] == 1) num1 = num1 + 1;
       if (dado[i] == 2) num2 = num2 + 1;
       if (dado[i] == 3) num3 = num3 + 1;
       if (dado[i] == 4) num4 = num4 + 1;
       if (dado[i] == 5) num5 = num5 + 1;
       if (dado[i] == 6) num6 = num6 + 1;
     }

     System.out.println("Quantidade de vezez que o número 1 foi sorteado " + num1);
     System.out.println("Quantidade de vezez que o número 2 foi sorteado " + num2);
     System.out.println("Quantidade de vezez que o número 3 foi sorteado " + num3);
     System.out.println("Quantidade de vezez que o número 4 foi sorteado " + num4);               
     System.out.println("Quantidade de vezez que o número 5 foi sorteado " + num5);
     System.out.println("Quantidade de vezez que o número 6 foi sorteado " + num6);
   }
}                       