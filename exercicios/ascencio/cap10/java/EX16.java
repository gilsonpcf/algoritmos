import java.util.Scanner;
public class EX16
{ public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
    Candidato cand[][];
    cand = new Candidato[6][40];
	int cont[], i, j, k, insc_aux, idade_aux, pontos_aux, curso_aux;

	cont = new int[6];

	for (i=0;i<6;i++)
	  { cont[i] = 39;
	    for (j=0;j<40;j++)
	        { cand[i][j] = new Candidato();
	        }
	  }      

	System.out.print("\nDigite o codigo da inscricao: ");
	insc_aux = entrada.nextInt();
	while (insc_aux > 0)
		{ System.out.print("Digite a idade do candidato: ");
		  idade_aux = entrada.nextInt();
		  
		  do {  System.out.print("Digite a pontuacao alcancada pelo candidato: ");
				pontos_aux = entrada.nextInt();
			 } while ((pontos_aux < 0) || (pontos_aux > 5000));

		  do { System.out.print("Digite o codigo do curso desejado pelo candidato: ");
			   curso_aux = entrada.nextInt();
			 } while ((curso_aux < 1) || (curso_aux > 6));

		  i = curso_aux - 1;
		  if (cont[i]==39)
			{ cand[i][39] = new Candidato();
			  cand[i][39].num_insc = insc_aux;
			  cand[i][39].idade = idade_aux;
			  cand[i][39].pontos = pontos_aux;
			  cand[i][39].cod_curso = curso_aux;
			  cont[i]--;
			}
		  else
			{ j=39;
			  while ((cand[i][j].pontos > pontos_aux) && (j>cont[i]))
				 j--;
			  if (j>=cont[i])
				{ while ((cand[i][j].pontos == pontos_aux) && (cand[i][j].idade > idade_aux) && (j>cont[i]))
					 j--;
				  if (j>=cont[i])
					 { for (k=1;k<=j;k++)
						 { cand[i][k-1] = cand[i][k];
						 }
					   cand[i][j] = new Candidato();
					   cand[i][j].num_insc = insc_aux;
					   cand[i][j].idade = idade_aux;
					   cand[i][j].pontos = pontos_aux;
					   cand[i][j].cod_curso = curso_aux;
					   cont[i]--;
					}
				}
			}
		System.out.print("\nDigite o codigo da inscricao: ");
		insc_aux = entrada.nextInt();
	 }
	for (i=0;i<6;i++)
	 { System.out.print("\nLista de aprovados no curso " + (i+1) + "\n");
	   for (j=39;j>cont[i];j--)
		{ System.out.print("\nNumero de inscricao: " + cand[i][j].num_insc);
		  System.out.print("\nIdade: " + cand[i][j].idade);
		  System.out.print("\nPontos alcancados: " + cand[i][j].pontos);
		  System.out.print("\nCodigo curso: " + cand[i][j].cod_curso + "\n");
		}
	 }
}

	private static class Candidato
	{ public int num_insc;
	  public int idade;
	  public int pontos;
	  public int cod_curso;
	}
}  
