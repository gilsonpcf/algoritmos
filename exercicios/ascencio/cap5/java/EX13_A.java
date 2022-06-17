import java.util.*;
public class EX13_A
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		int i, num_cri, meses, tot_f, tot_m, tot_24;
  		float porc_f, porc_m, porc_24;
  		char sexo;
  		System.out.println("Digite o número de crianças nascidas no período ");
  		num_cri = dado.nextInt();
  		tot_m = 0;
  		tot_f = 0;
  		tot_24 = 0;
  		for (i=1;i<=num_cri;i++)
     	{ 
     		System.out.println("Digite o sexo da "+i+"ª criança ");
       		sexo = dado.next().charAt(0);
       		System.out.println("Digite o tempo de vida (em meses) da "+i+"ª criança ");
       		meses = dado.nextInt();
       		if (sexo == 'M')
				tot_m = tot_m + 1;
			if (sexo == 'F')
				tot_f = tot_f + 1;
			if (meses <= 24)
				tot_24 = tot_24 + 1;
		 }
	if (num_cri == 0)
	 System.out.println("Nenhum criança digitada");
	else
		 { 
		 	porc_m = tot_m * 100 / num_cri;
			porc_f = tot_f * 100 / num_cri;
			porc_24 = tot_24 * 100 / num_cri;
			System.out.println("Percentual de crianças do sexo feminino mortas "+porc_f);
			System.out.println("Percentual de crianças do sexo masculino mortas "+porc_m);
			System.out.println("Percentual de crianças com 24 meses ou menos mortas no período "+porc_24);
		 }
  	}
}