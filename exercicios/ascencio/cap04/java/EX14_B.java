import java.util.*;

public class EX14_B
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
  		else if (sal < 1200)
     			boni=sal * 12/100;
  			  else 
     			boni=0;
     	// Calcula o auxílio escola
  		if (sal <= 600)
     	  aux=150;
  		else 
     	  aux=100;
  		//Calcula o novo salário
  		novo_sal = sal + boni + aux;
  		//Mostra o valor do novo salário
  		System.out.println("Novo salário = " + novo_sal);
 	}
}