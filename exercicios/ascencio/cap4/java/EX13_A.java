import java.util.*;

public class EX13_A
{
	public static void main (String args[])
	{
		float sal, imp=0, aum=0, novo_sal;
		int op;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);  
		// Mostra o menu de op��es
  		System.out.println( "Menu de Op��es");			
  		System.out.println("1 - Imposto");			
  		System.out.println("2 - Novo Sal�rio");			
  		System.out.println("3 - Classifica��o");			
  		System.out.println("Digite a op��o desejada");		
  		// Recebe a op��o
  		op = entrada.nextInt();		
  		if (op == 1)
     	 { 
     		System.out.println("Digite o valor do sal�rio");
       		entrada = new Scanner(System.in);
			sal = entrada.nextFloat();		
       		if (sal < 500)
	  		imp = sal * 5/100;
       		if (sal >= 500 && sal <= 850)
	  		imp = sal * 10/100;
       		if (sal > 850)
	  		imp = sal * 15/100;
       		System.out.println("Valor do Imposto = " + imp);
     	}
  	  if (op == 2)
     	{ 
     		System.out.println("Digite o valor do sal�rio");
     		entrada = new Scanner(System.in);
			sal = entrada.nextFloat();			
            if (sal > 1500)
	  		aum = 25;
       		if (sal >= 750 && sal <= 1500)
	  		aum = 50;
       		if (sal >= 450 && sal < 750)
	  		aum = 75;
       		if (sal < 450)
	  		aum = 100;
       		novo_sal = sal + aum;
       		System.out.println("Valor do Novo Sal�rio = " + novo_sal);
   		}
  	 if (op == 3)
       { 
       		System.out.println("Digite o valor do sal�rio");
       		entrada = new Scanner(System.in);
			sal = entrada.nextFloat();		
       		if (sal <= 700)
	  		System.out.println("Mal Remunerado");
       		if (sal > 700)
	  		System.out.println("Bem Remunerado");
     	}
  	if (op < 1  || op > 3)
      System.out.println( "Op��o Inv�lida");
 	}
}