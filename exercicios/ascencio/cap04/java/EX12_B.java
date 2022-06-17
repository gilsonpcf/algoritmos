import java.util.*;

public class EX12_B
{
	public static void main (String args[])
	{
		float salario, aumento, novo_sal;
 		int cargo;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);  
		//Mostra mensagem solicitando o cargo (os valores podem ser 1,2,3,4 ou 5)
 		System.out.println("Digite o cargo do funcionário (1,2,3,4 ou 5)");
 		//Recebe o valor do cargo
		cargo = entrada.nextInt();		
 		//Mostra mensagem solicitando o valor do salário
 		System.out.println("Digite o valor do salário");
 		//Recebe valor do salário
		salario = entrada.nextFloat();		
  		//Dependendo do cargo informado, apresenta o nome do cargo, valor do aumento e novo salário
 		//Caso seja digitado um cargo inexistente, mostra-se a mensagem
 		//Cargo Inexistente
 		switch(cargo)
 		{
 		case 1:
    		{ 
    			System.out.println("O cargo é Escriturário");
      			aumento = salario * 50 / 100;
      			System.out.println("O valor do aumento é: " + aumento);
      			novo_sal = salario + aumento;
      			System.out.println("O novo salário é: " + novo_sal);
      			break;
      		}
 		case 2:
      		{ 
      			System.out.println("O cargo é Secretário");
				aumento = salario * 35 / 100;
				System.out.println("O valor do aumento é: " + aumento);
				novo_sal = salario + aumento;
				System.out.println("O novo salário é: " + novo_sal);
				break;
			 }
   		case 3:
			{ 
				System.out.println("O cargo é Caixa");
	  			aumento = salario * 20 / 100;
	  			System.out.println("O valor do aumento é: " + aumento);
	  			novo_sal = salario + aumento;
	  			System.out.println("O novo salário é: " + novo_sal);
	  			break;
	  		}
     	case 4:
	  		{ 
	  			System.out.println("O cargo é Gerente");
	    		aumento = salario * 10 / 100;
	    		System.out.println("O valor do aumento é: " + aumento);
	    		novo_sal = salario + aumento;
	    		System.out.println("O novo salário é: " + novo_sal);
	    		break;
	    	}
       	case 5:
	    	{	
	    		System.out.println("O cargo é Diretor");
	      		aumento = salario * 0 / 100;
	      		System.out.println("O valor do aumento é: " + aumento);
	      		novo_sal = salario + aumento;
	      		System.out.println("O novo salário é: " + novo_sal);
	      		break;
	      	}
	 	default: System.out.println("Cargo Inexistente !");
 		}	
   	}
}