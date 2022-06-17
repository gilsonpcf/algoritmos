import java.util.*;
public class EX7_A 
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		int cont, num1, num2, res;
  		num1 = 0;
  		num2 = 1;
  		System.out.println(num1);
  		System.out.println(num2);
  		for (cont=3;cont<=8;cont++)
     		{ 
     			res = num1 + num2;
       			System.out.println(res);
       			num1 = num2;
       			num2 = res;
     		}
  	}
}