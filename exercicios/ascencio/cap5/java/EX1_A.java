import java.util.*;
public class EX1_A 
{
  public static void main (String args[])
  	{
      int i, ano_atual;
	  double salario, novo_salario, percentual;
	  Scanner dado = new Scanner(System.in);
	  System.out.println("Digite o ano atual");
	  ano_atual = dado.nextInt();
	  salario = 1000;
	  percentual = 1.5/100;
	  novo_salario = salario + percentual * salario;
	  for(i=2007;i<=ano_atual;i++)
		 {
			 percentual = 2 * percentual;
			 novo_salario = novo_salario + percentual * novo_salario;
		 }
	 System.out.println("Novo salário = " +novo_salario); 		
    }
}