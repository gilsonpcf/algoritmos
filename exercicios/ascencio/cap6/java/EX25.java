public class EX25
{ public static void main(String args[])
   { int primos[] = new int[10];
     int i, qtde, num, divisores;
     num = 101;
     qtde = 0;
     do
     { divisores = 0;
       for (i=1;i<=num;i++)
       { if (num%i == 0)
            divisores++;
       }
       if (divisores <= 2)
       { primos[qtde] = num;
         qtde++;
       }
       num++;  
     } while (qtde < 10);
     
     System.out.println("Numeros primos gerados");
     for (i=0;i<10;i++)
     {
       System.out.println(primos[i]);
     }
  }
}                       