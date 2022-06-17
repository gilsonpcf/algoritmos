import java.util.Scanner;
public class EX20
{ public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
    Pessoa pessoa = new Pessoa();

	float media_id, media_sa1, media_id2, media_fi, maior_sa, soma_sa1, soma_id, soma_fi;
  	int menor_id, cont1, cont2;
  	soma_sa1 = 0;
	soma_id = 0;
	soma_fi = 0;
	cont1 = 0;
	cont2 = 0;
	menor_id = 0;
	maior_sa = 0;

	System.out.print("\nDigite a idade da pessoa: ");
	pessoa.idade = entrada.nextInt();
  	while (pessoa.idade > 0)
    { System.out.print("Digite o salario da pessoa: ");
      pessoa.salario = entrada.nextFloat();
      entrada = new Scanner(System.in);
      do
      { System.out.print("Digite o sexo da pessoa (M ou F): ");
        pessoa.sexo = entrada.nextLine().charAt(0);
        pessoa.sexo = Character.toUpperCase(pessoa.sexo);
      } while ((pessoa.sexo != 'F') && (pessoa.sexo != 'M'));

      System.out.print("Digite o numero de filhos da pessoa: ");
      pessoa.filhos = entrada.nextInt();
      soma_sa1 = soma_sa1 + pessoa.salario;
      cont1 = cont1 + 1;
      soma_fi = soma_fi + pessoa.filhos;

      if ((pessoa.sexo == 'F') && (pessoa.salario < 700))
		 { soma_id = soma_id + pessoa.idade;
		   cont2 = cont2 + 1;
		 }

	  if (cont1 == 1)
		 maior_sa = pessoa.salario;
	  else
		 if (pessoa.salario > maior_sa)
			maior_sa = pessoa.salario;
			if (cont1 == 1)
				menor_id = pessoa.idade;
			else
			 if (pessoa.idade < menor_id)
				menor_id = pessoa.idade;

	  System.out.print("\nDigite a idade da pessoa: ");
	  pessoa.idade = entrada.nextInt();
	}

	if (cont2 > 0)
	   media_id2 = soma_id / cont2;
	else
	   media_id2 = 0;

	System.out.print("\nA media de idade das mulheres com salario inferior a R$ 700,00 e: " + media_id2);
	if (cont1 > 0)
	 	{ media_sa1 = soma_sa1 / cont1;
		  media_fi = soma_fi / cont1;
	 	}
	else
	 	{ media_sa1 = 0;
		  media_fi = 0;
	    }
	System.out.print("\nA media de salarios da populacao e: " + media_sa1);
	System.out.print("\nA media de filhos da populacao e: " + media_fi);
	System.out.print("\nO maior salario da populacao e: " + maior_sa);
	System.out.print("\nA menor idade da populacao e: " + menor_id + "\n");
}

	private static class Pessoa
	{ public int idade;
	  public int filhos;
	  public float salario;
	  public char sexo;
	}
}

