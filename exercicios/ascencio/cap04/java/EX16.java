import java.util.*;

public class EX16
{
	public static void main (String args[])
	{
		float pre, venda, novo_pre=0;
		Scanner entrada;
		//Instancia o objeto da classe Scanner
		entrada = new Scanner(System.in);  
 		// Mostra mensagem antes da leitura do pre�o atual
		System.out.print("Digite o pre�o atual: ");
		// Recebe o pre�o atual
  		pre = entrada.nextFloat();		
  		// Mostra mensagem antes da leitura do valor das vendas mensais
  		System.out.println("Digite a venda mensal: ");
  		venda = entrada.nextFloat();		
  		if (venda < 500 || pre < 30)
     	novo_pre = pre + pre * 10 / 100;
  		if ((venda >= 500 && venda < 1200) || (pre >= 30 && pre < 80))
     	novo_pre = pre + pre * 15 / 100;
  		if (venda >= 1200 || pre >= 80)
     	novo_pre = pre - pre * 20 / 100;
     	//Mostra o novo pre�o
  		System.out.println("Novo pre�o = " +novo_pre);
 	}
}