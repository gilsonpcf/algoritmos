import java.util.*;
public class EX22_B
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		int idade, tot_f, tot_m, soma1, cont_m1, cont_m2, cont_m3, cont_m4, cont_f1, menor_idade;
  		float media_idade, calc;
  		char sexo, exp;
  		tot_f = 0;
  		tot_m = 0;
  		soma1 = 0;
  		cont_m1 = 0;
  		cont_m2 = 0;
  		cont_f1 = 0;
  		menor_idade = 0;
  		do
  		{
  		System.out.println("Digite a idade do candidato ");
  		idade = dado.nextInt();
		if (idade != 0)
		{ 
			System.out.println("Digite o sexo do candidato (M ou F) ");
			sexo = dado.next().charAt(0);
			System.out.println("Este candidato possui experiência no servi‡o (S ou N) ? ") ;
			exp = dado.next().charAt(0);
			if (sexo == 'F' && exp == 'S')
				{ if (tot_f == 0)
						menor_idade = idade;
					else if (idade < menor_idade)
								menor_idade = idade;
				}
			if (sexo == 'M')
				tot_m = tot_m + 1;
			if (sexo == 'F')
				tot_f = tot_f + 1;
			if (sexo == 'F' && idade < 35 && exp == 'S')
			 cont_f1 = cont_f1 + 1;
			if (sexo == 'M' && idade > 45)
			 cont_m1 = cont_m1 + 1;
			if (sexo == 'M' && exp == 'S')
				{ soma1 = soma1 + idade;
					cont_m2 = cont_m2 + 1;
				}
		}
  		}
  		while (idade!=0);	
	System.out.println("Total de mulheres = " +tot_f);
	System.out.println("Total de homens = " +tot_m);
	if (cont_m2 == 0)
	 System.out.println("Nenhum homem com experiência");
	else
	 {
		 calc = soma1 / cont_m2;
		 System.out.println("Média das idades dos homens com experiência no serviço = "+calc);
	 }
	if (tot_m == 0)
	 System.out.println("Nenhum homem");
	else
	 {
		 calc = cont_m1 * 100 / tot_m;
		 System.out.println("Percentual de homens com mais de 45 anos = "+calc);
	 }
	System.out.println("Total de mulheres com menos de 35 anos e com experiência no serviço = "+cont_f1);
	System.out.println("Menor idade entre as mulheres com experiência no serviço = " +menor_idade);
  	}
}