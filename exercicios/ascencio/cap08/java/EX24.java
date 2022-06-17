import java.util.Scanner;
public class EX24
{ 
	public static void main(String args[])
	{ Scanner entrada = new Scanner(System.in);
      int num1, num2, res;
      char op=' ';
      System.out.print("Digite o primeiro numero: ");
      num1 = entrada.nextInt();
      System.out.print("Digite o segundo numero: ");
      num2 = entrada.nextInt();      
      do
      { System.out.print("Digite o símbolo da operação desejada (+ ou *)");
        op = entrada.next().charAt(0);      
      } while (op != '+' && op != '*');
      res = calculo(num1, num2, op);
      System.out.print("Resultado = " + res);
	}      
    public static int calculo(int n1, int n2, char simbolo)
    { int result;
      if (simbolo == '+')
  	     result = n1 + n2;
      else result = n1 * n2;
      return result;
   }  
}	   	