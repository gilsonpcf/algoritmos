import java.util.Scanner;
public class EX11
{
    public static void main(String args[])
    { char sexo[], olhos[], cabelos[];
      int idade[], x, i, q;
      float m;
      sexo = new char[5];
      olhos = new char[5];
      cabelos = new char[5];        
      idade = new int[5];
      leitura(sexo, olhos, cabelos, idade);
      m = media_idade(olhos, cabelos, idade);
      System.out.println("\nMedia de idade das pessoas com olhos castanhos e cabelos pretos = " + m);
      i = maior_idade(idade);
      System.out.println("\nMaior idade entre os habitantes = " + i);
      q = quantidade_individuos(sexo, olhos, cabelos, idade);
      System.out.println("\nQuantidade de mulheres louras com olhos azuis e idade entre 18 e 35 = " + q);
    }

    public static void leitura(char sexo[], char olhos[], char cabelos[], int idade[])
    { Scanner entrada = new Scanner(System.in);
      int x;
	  for (x=0;x<5;x++)
	  { System.out.println("\nDados da " + (x+1) + "a pessoa\n\n");
	    do {
	         System.out.print("Digite o sexo (M ou F) ");
	         sexo[x] = entrada.next().charAt(0);
		     sexo[x] = Character.toUpperCase(sexo[x]);
		   } while ((sexo[x] != 'F') && (sexo[x] != 'M'));
	    do {
		     System.out.print("Digite a cor dos olhos (C-castanhos ou A-azuis) ");
		     olhos[x] = entrada.next().charAt(0);
		     olhos[x] = Character.toUpperCase(olhos[x]);
		   } while ((olhos[x] != 'C') && (olhos[x] != 'A'));
	    do {
		     System.out.print("Digite a cor dos cabelos (C-castanhos, L-louros ou P-pretos) ");
		     cabelos[x] = entrada.next().charAt(0);
		     cabelos[x] = Character.toUpperCase(cabelos[x]);
		   } while ((cabelos[x] != 'C') && (cabelos[x] != 'L') && (cabelos[x] != 'P'));
	    System.out.print("Digite a idade ");
	    idade[x] = entrada.nextInt();
	  }
    } 

	public static float media_idade (char olhos[], char cabelos[], int idade[])
	{ int i, cont;
	  float soma, media;
	  soma=0;
	  cont=0;
	  for (i=0;i<5;i++)
	      { if ((olhos[i] == 'C') && (cabelos[i] == 'P'))
		   { soma = soma + idade[i];
		     cont++;
		   }
	      }
	  if (cont == 0)
	     media = 0;
	  else
	     media = soma/cont;
	  return media;
	}

	public static int maior_idade (int idade[])
	{ int i, maior=0;
	  for (i=0;i<5;i++)
	      if (i==0)
		 maior = idade[i];
	      else
		 if (idade[i] > maior)
		    maior = idade[i];
	  return maior;
	}

	public static int quantidade_individuos(char sexo[], char olhos[], char cabelos[], int idade[])
	{ int i, qtd;
	  qtd=0;
	  for (i=0;i<5;i++)
	      if ((sexo[i] == 'F') &&
		  ((idade[i] >= 18) && (idade[i] <=35)) &&
		   (olhos[i] == 'A') && (cabelos[i] == 'L'))
		   qtd++;
	  return qtd;
	}
}
