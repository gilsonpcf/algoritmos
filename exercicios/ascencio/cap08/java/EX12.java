import java.util.Scanner;
public class EX12
{
  public static void main(String args[])
  { int vet[], i;
    vet = new int[3]; 
    vet = perfeitos();
    for (i=0;i<3;i++)
        System.out.println("\nO " + (i+1) + "o numero perfeito = " + vet[i]);
   }

  public static int[] perfeitos()
  { int a, r, num, soma, cont, v[];
    v = new int[3];
    cont = 0;
    num = 1;
    while (cont < 3)
      { soma = 0;
        for (a=1;a<num;a++)
	    { r = num%a;
	      if (r==0)
	         soma = soma + a;
  	    }
       if (soma == num)
  	    { v[cont] = num;
	      cont++;
	    }
       num++;
      }
    return v;  
  }
}  