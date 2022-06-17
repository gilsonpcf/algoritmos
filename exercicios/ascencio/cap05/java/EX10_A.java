import java.util.*;
public class EX10_A 
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		int cont_time, cont_jog, idade, qtde, total80;
  		float peso, alt, media_altura, porc, media_idade;
  		qtde = 0;
  		total80 = 0;
  		media_altura = 0;
  		for (cont_time=1;cont_time<=5;cont_time++)
     	{ 
     		media_idade = 0;
       		for (cont_jog=1;cont_jog<=11;cont_jog++)
				{
					System.out.println("Digite a idade do "+cont_jog+"º jogador ");
					idade = dado.nextInt();
					System.out.println("Digite o peso do "+cont_jog+"º jogador ");
					peso = dado.nextFloat();
					System.out.println("Digite a altura do "+cont_jog+"º jogador ");
					alt = dado.nextFloat();
					if (idade < 18)
						qtde = qtde + 1;
					media_idade = media_idade + idade;
					media_altura = media_altura + alt;
					if (peso > 80)
						total80 = total80 + 1;
				}
			media_idade = media_idade/11;
			System.out.println("Média das idade do "+cont_time+"º time = "+media_idade);
		 }
		System.out.println("Quantidade de jogadores com idade inferior a 18 anos = "+qtde);
		media_altura = media_altura/55;
		System.out.println("Média das alturas de todos os jogadores = "+media_altura);
		porc = total80 *100/55;
		System.out.println("Porcentagem de jogadores com peso superior a 80 quilos = "+porc);
  	}
}