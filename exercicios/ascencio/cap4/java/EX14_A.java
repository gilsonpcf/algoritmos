import java.util.*;

public class EX14_A
{
	public static void main (String args[])
	{
		float sal, novo_sal, boni=0, aux=0;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);  
		//Mostra mensagem solicitando o valor do salário
  		System.out.println("Digite o valor do salário: ");
  		//Recebe o valor do salário
  		sal = entrada.nextFloat();		
		// Calcula a bonificação
  		if (sal <= 500)
     	boni= sal * 5/100;
  		if (sal > 500 && sal < 1200)
     	boni=sal * 12/100;
  		if (sal >= 1200)
     	boni=0;
     	// Calcula o auxílio escola
  		if (sal <= 600)
     	aux=150;
  		if (sal > 600)
     	aux=100;
  		//Calcula o novo salário
  		novo_sal = sal + boni + aux;
  		//Mostra o valor do novo salário
  		System.out.println("Novo salário = " + novo_sal);
 	}
}