import java.util.*;
import java.text.*;

public class EX2_A
{
	public static void main (String args[])
	{
		float nota1, nota2, nota3, media, nota_exame;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);
		DecimalFormat casas;
		//Instancia o objeto da classe DecimalFormat
       	casas = new DecimalFormat ("0.00"); 
		//Mostra mensagem solicitando a primeira nota
		System.out.print("Digite a primeira nota: ");
		//Recebe o valor da primeira nota
		nota1 = entrada.nextFloat();		
		//Mostra mensagem solicitando a segunda nota
		System.out.print("Digite a segunda nota: ");
		//Recebe o valor da segunda nota
		nota2 = entrada.nextFloat();		
		//Mostra mensagem solicitando a terceira nota
		System.out.print("Digite a terceira nota: ");
		//Recebe o valor da terceira nota
		nota3 = entrada.nextFloat();		
		//Calcula a média aritmética
		media = (nota1 + nota2 + nota3) / 3;
		//Mostra a média obtida
		System.out.println("Media aritmética: " + casas.format(media));
		//Mostra situação equivalente à média obtida
		if (media >= 0 && media < 3)
   		System.out.println("Reprovado");
		if (media >= 3 && media < 7)
   		{
     		System.out.println("Exame ");
     		nota_exame = 12 - media;
     		System.out.println("Deve tirar nota "+ casas.format(nota_exame) + " para ser aprovado");
   		}
		if (media >= 7 && media <= 10)
   		System.out.println("Aprovado");
	}
}