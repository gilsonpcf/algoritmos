import java.util.*;
import java.text.*;

public class EX2_B
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
		//Calcula a m�dia aritm�tica
		media = (nota1 + nota2 + nota3) / 3;
		//Mostra a m�dia obtida
		System.out.println("Media aritm�tica: " + casas.format(media));
		//Mostra situa��o equivalente � m�dia obtida
		if (media < 3)
   		  System.out.println("Reprovado");
		else if (media < 7)
   				{
     				System.out.println("Exame ");
     				nota_exame = 12 - media;
     				System.out.println("Deve tirar nota "+ casas.format(nota_exame) + " para ser aprovado");
   				}
			 else System.out.println("Aprovado");
	}
}