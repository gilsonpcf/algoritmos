import java.util.*;
public class EX18_B
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		float num;
  		double quad, cubo, raiz;
  		do{
  			System.out.println("Digite um número ");
  			num = dado.nextFloat();
  		 	if(num > 0)
  		 	{
  		 	 	quad = Math.pow(num,2);
       	  		cubo = Math.pow (num,3);
       	  		raiz = Math.sqrt(num);
       	  		System.out.println("Valor      Quadrado      Cubo          Raiz");
       	  		System.out.println(num+"         "+quad+"          "+cubo+"          "+raiz);
       	  	}	
       	  }
       	 while (num > 0);
  	}
}