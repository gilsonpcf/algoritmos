import java.util.*;
public class EX9_A 
{
  public static void main (String args[])
  	{
  		Scanner dado = new Scanner(System.in);
  		int cont, ta, te, tr;
  		float n1, n2, media, media_classe, total_classe;
  		total_classe = 0;
  		tr = 0;
  		te = 0;
  		ta = 0;
  		for (cont=1;cont<=6;cont++)
     	{ 
     		System.out.println("Digite as duas notas do "+cont+"º aluno ");
       		n1 = dado.nextFloat();
       		n2 = dado.nextFloat();
       		media = (n1 + n2) /2;
       		System.out.println("Média do "+cont+"º aluno = "+media);
       		if (media <= 3)
				{ tr = tr + 1;
			  	  System.out.println(" Reprovado");
				}
			 if (media > 3 && media < 7)
				{ te = te + 1;
				  System.out.println("  Exame");
				}
			 if (media >= 7)
				{ ta = ta + 1;
				  System.out.println( "  Aprovado");
				}
			total_classe = total_classe + media;
	 	}
	System.out.println("Total de reprovados = " +tr);
	System.out.println("Total de alunos em exame = " +te);
	System.out.println("Total de aprovados = "+ta);
	media_classe = total_classe/6;
	System.out.println("Média da classe = " +media_classe);
  	}
}