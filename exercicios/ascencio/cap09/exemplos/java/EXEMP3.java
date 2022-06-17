public class EXEMP3
{
 public static void main (String[] args)
 {
 	String texto1 = "Aula com computadores";
 	String texto2 = "computador";
 	String texto3 = "COMPUTADOR";
 	String texto4 = "escola";
 	String texto5 = "CARRO";
 	String texto6 = "Ele passou de carro perto da escola";
 	System.out.println("Conteúdo da String texto1 = "+texto1);
 	System.out.println("Conteúdo da String texto2 = "+texto2);
 	System.out.println("Conteúdo da String texto3 = "+texto3);
 	System.out.println("Conteúdo da String texto4 = "+texto4);
 	System.out.println("Conteúdo da String texto5 = "+texto5);
 	System.out.println("Conteúdo da String texto6 = "+texto6);
 	
 	System.out.println("\nCOMPARANDO COM O MÉTODO equals\n");
 	if (texto1.equals(texto2))
 	  System.out.println("textos 1 e 2  iguais");
 	else
 	  System.out.println("textos 1 e 2 diferentes");
 	
 	if (texto2.equals(texto3))
 	  System.out.println("textos 2 e 3 iguais");
 	else
 	  System.out.println("textos 2 e 3 diferentes");
 	
 	if (texto2.equals("computador"))
 	  System.out.println("textos 2 e computador iguais");
 	else
 	  System.out.println("textos 2 e computador diferentes");  
 	  
 	if (texto3.equals("computador"))
 	  System.out.println("textos 3 e computador iguais");
 	else
 	  System.out.println("textos 3 e computador diferentes");    
 	
 	System.out.println("\nCOMPARANDO COM O MÉTODO equalsIgnoreCase\n");
 	if (texto2.equalsIgnoreCase(texto3))
 	  System.out.println("textos 2 e 3 iguais");
 	else
 	  System.out.println("textos 2 e 3 diferentes");
 	  
 	if (texto3.equalsIgnoreCase("computador"))
 	  System.out.println("textos 3 e computador iguais");
 	else
 	  System.out.println("textos 3 e computador diferentes");      
 
 	System.out.println("\nCOMPARANDO COM O MÉTODO compareTo\n");	
 	if (texto4.compareTo(texto5) > 0)
	  System.out.println("texto 4 vem depois, alfabeticamente, do texto 5");
 	else if (texto4.compareTo(texto5) < 0) 
 	      System.out.println("texto 4 vem antes, alfabeticamente, do texto 5");
 	     else
 	      System.out.println("textos 4 e 5 iguais");
 	
 	if (texto2.compareTo(texto3) > 0)
 	  System.out.println("texto 2 vem depois, alfabeticamente, do texto 3");
 	else if (texto2.compareTo(texto3) < 0) 
 	      System.out.println("texto 2 vem antes, alfabeticamente, do texto 3");
 	     else
 	      System.out.println("textos 2 e 3 iguais");
	
	System.out.println("\nCOMPARANDO COM O MÉTODO regionMatches");	
	System.out.println("Comparando 5 caracteres");
	System.out.println("Diferenciando letras maiúsculas de minúsculas");
		
	if (texto6.regionMatches(false,14,texto5,0,5))
	 System.out.println("O texto 5 tem os primeiros cinco caracteres iguais aos cinco caracteres do texto6, a partir da posição 14");  
	else
	 System.out.println("O texto 5 NÃO tem os primeiros cinco caracteres iguais aos cinco caracteres do texto6, a partir da posição 14");  

	System.out.println("\nCOMPARANDO COM O MÉTODO regionMatches");	
	System.out.println("Comparando 5 caracteres");
	System.out.println("NÃO diferenciando letras maiúsculas de minúsculas");
		
	if (texto6.regionMatches(true,14,texto5,0,5))
	 System.out.println("O texto 5 tem os primeiros cinco caracteres iguais aos cinco caracteres do texto 6, a partir da posição 14");  
	else
	 System.out.println("O texto 5 NÃO tem os primeiros cinco caracteres iguais aos cinco caracteres do texto 6, a partir da posição 14");  
	  	
	System.out.println("\nCOMPARANDO COM O MÉTODO startsWith");	  
 	if (texto2.startsWith("COM"))
 	 System.out.println("A cadeia "+texto2+" começa com os caracteres COM");			
 	else
 	 System.out.println("A cadeia "+texto2+" NÃO começa com os caracteres COM");			 		
 	
 	System.out.println("\nCOMPARANDO COM O MÉTODO startsWith a partir de uma posição");	  
 	if (texto1.startsWith("com",5))
 	 System.out.println("A cadeia "+texto1+" tem os caracteres COM a partir da posição 5");			
 	else
 	 System.out.println("A cadeia "+texto1+" NÃO tem os caracteres COM a partir da posição 5");			
 	
 	System.out.println("\nCOMPARANDO COM O MÉTODO endsWith");	  
 	if (texto2.endsWith("DOR"))
 	 System.out.println("A cadeia "+texto2+" termina com os caracteres DOR");			
 	else
 	 System.out.println("A cadeia "+texto2+" NÃO termina com os caracteres DOR");			 		
 	
 	System.out.println("\nCOMPARANDO COM O MÉTODO endsWith");	  
 	if (texto2.endsWith("dor"))
 	 System.out.println("A cadeia "+texto2+" termina com os caracteres dor");			
 	else
 	 System.out.println("A cadeia "+texto2+" NÃO termina com os caracteres dor");			 		
 }
}
