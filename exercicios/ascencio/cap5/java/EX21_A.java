import java.util.*;
public class EX21_A
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		float soma, maior, menor, soma_par, media, perc;
		int num, qtd, qtd_par, qtd_impar;
    	qtd = 0;
  		qtd_par = 0;
  		soma_par = 0;
  		qtd_impar = 0;
  		menor = 0;
  		soma = 0;
  		maior = 0;
  		System.out.println("Digite um valor ");
  		num = dado.nextInt();
		while (num != 30000)
    	{ if (qtd == 0)
				{ maior = num;
					menor = num;
				}
			else
				{ if (num > maior)
						maior = num;
					if (num < menor)
						menor = num;
				}
		 soma = soma + num;
		 qtd = qtd + 1;
		 if (num%2 == 0)
			{ soma_par = soma_par + num;
				qtd_par = qtd_par + 1;
			}
		 else
			qtd_impar = qtd_impar + 1;
		 System.out.println("Digite um valor ");
		 num = dado.nextInt();
	}
	System.out.println("Soma dos valores = "+ soma);
	System.out.println("Quantidade de valores digitados = " +qtd);
	if (qtd == 0)
	 System.out.println("Nenhum número digitado");
	else
		{
		 media = soma / qtd;
		 System.out.println("Média dos valores digitados = " +media);
		 System.out.println("Maior valor digitado = " +maior);
		 System.out.println("Menor valor digitado = " +menor);
		 if (qtd_par == 0)
			System.out.println("Nenhum par");
		 else
			{
				media = soma_par / qtd_par;
				System.out.println("Média dos números pares = "+media);
			}
		 perc = qtd_impar * 100 / qtd;
		 System.out.println("Percentual de números ímpares digitados = "+perc);
	 }
  	}
}