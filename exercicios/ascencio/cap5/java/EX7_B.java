import java.util.*;
public class EX7_B 
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		int cont, num1, num2, res;
  		num1 = 0;
		num2 = 1;
		System.out.println(num1);
  		System.out.println(num2);
  		cont = 3;
  		do
   		 { res = num1 + num2;
     	   System.out.println(res);
       	   num1 = num2;
       	   num2 = res;
           cont = cont + 1;
    	} 
    	while (cont < 9);
  	}
}