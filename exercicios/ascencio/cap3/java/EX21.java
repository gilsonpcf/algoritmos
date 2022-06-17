import java.util.*;

public class EX21
{
	public static void main (String args[])
	{
		double X, Y, Z;
		Scanner entrada;
		// Instancia o objeto da classe Scanner para receber as entradas
	    entrada = new Scanner(System.in);
		// Mostra mensagem antes da leitura do tamanho da escada
		System.out.print("Digite o tamanho da escada: ");
		// Recebe o valor de Z que é o tamanho da escada
		Z = entrada.nextDouble();
		// Mostra mensagem antes da leitura da altura desejada
		System.out.print("Digite a altura desejada: ");
		// Recebe o valor de X que é a altura desejada
		X = entrada.nextDouble();
		// Calcula o valor de Y que é a distância da escada da parede
		Y = Math.pow(Z,2) - Math.pow(X,2);
		// Extrai a raiz quadrada de Y
		Y = Math.sqrt(Y);
		// Mostra valor de Y que é a distância da escada da parede
		System.out.println("A distância necessária é: " + Y);
	}
}