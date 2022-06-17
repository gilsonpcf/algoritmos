import java.util.*;
public class EX20_A
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		int cont_f, cont_m;
  		float cod, num_h, sal_b, sal_l, media_m, media_f;
  		char sexo;
  		System.out.println("Digite o código do professor ");
  		cod = dado.nextFloat();
  		cont_m = 0;
  		cont_f = 0;
  		media_m = 0;
  		media_f = 0;
  		sal_l=0;
  		while (cod != 99999)
     	{ 
     		System.out.println("Digite sexo do professor (M ou F) ");
       		sexo = dado.next().charAt(0);
       		System.out.println("Digite o número de horas trabalhadas ");
       		num_h = dado.nextFloat();
			sal_b = num_h * 30;
       		if (sexo == 'M')
				{ 
					sal_l = sal_b - (sal_b * 10 / 100);
					media_m = media_m + sal_l;
					cont_m = cont_m + 1;
				}
			 if (sexo == 'F')
				{ 
					sal_l = sal_b - (sal_b * 5 / 100);
					media_f = media_f + sal_l;
					cont_f = cont_f + 1;
				}
			System.out.println("Código do professor = " +cod);
			System.out.println("Salário bruto = " +sal_b);
			System.out.println("Salário líquido = " +sal_l);
			System.out.println("Digite o c¢digo do professor ");
			cod = dado.nextFloat();
	 		}
	if (cont_m == 0)
	 System.out.println("Nenhum professor do sexo masculino");
	 else
	 {
		 media_m = media_m / cont_m;
		 System.out.println("Média dos salários dos professores " +media_m);
	 }
	if (cont_f == 0)
	 System.out.println("Nenhum professor do sexo feminino");
	else
	 {
		 media_f = media_f / cont_f;
		 System.out.println("Média dos salários das professoras " +media_f);
	 }
  	}
}