import java.util.*;
public class EX24_A
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		int op;
  		float sal, imp, aum, novo_sal;
  		imp = 0;
  		aum = 0;
  		do
  		{
  		System.out.println("1- Imposto ");
      	System.out.println("2- Novo Salário ");
		System.out.println("3- Classificação ");
		System.out.println("4- Finalizar o programa ");
		System.out.println("Digite a opção desejada ");
		op = dado.nextInt();
		if (op < 1 || op > 4)
		System.out.println("Opção inválida !");
		else
			{ if (op == 1)
				{ System.out.println("Digite o valor do salário ");
				  sal = dado.nextFloat();
				  if (sal < 500)
					imp = sal * 5 / 100;
				  if (sal >= 500 && sal <= 850)
					imp = sal * 10 / 100;
				  if (sal > 850)
					imp = sal * 15 / 100;
				  System.out.println("Valor do imposto a ser pago = " +imp);
				}
			  if (op == 2)
				{ System.out.println("Digite o valor do salário ");
				  sal = dado.nextFloat();
				  if (sal > 1500)
					aum = 25;
				  if (sal >= 750 && sal <= 1500)
					aum = 50;
				  if (sal >= 450 && sal < 750)
					aum = 75;
				  if (sal < 450)
					aum = 100;
				  novo_sal = sal + aum;
				  System.out.println("Valor do salário com aumento = "+novo_sal);
				}
			  if (op == 3)
				{ System.out.println("Digite o valor do salário ");
				  sal = dado.nextFloat();
				  if (sal <= 700)
					System.out.println("Mal Remunerado ");
				  else
					System.out.println("Bem Remunerado ");
				}
			}
		}
		while (op != 4);
  	}
}