import java.util.Scanner;
public class EX11
{ public static void main(String args[])
  { Scanner entrada = new Scanner(System.in);
  	Aluno alunos[] = new Aluno[10];
  	Disciplina disciplinas[] = new Disciplina[6];
  	Matrícula matriculas[] = new Matrícula[30];
  	int cont_a, cont_d, cont_m, cont, alu_aux, dis_aux, achou, i, j, k, op;
  	float perc;
  	cont_a=0;
  	cont_d=0;
  	cont_m=0;
  	do
    { System.out.print("\n\n1-Cadastrar disciplinas");
      System.out.print("\n2-Cadastrar alunos");
	  System.out.print("\n3-Realizar matr¡culas");
	  System.out.print("\n4-Lancar notas e faltas");
	  System.out.print("\n5-Consultar alunos reprovados");
	  System.out.print("\n6-Mostrar disciplinas cursadas por aluno");
	  System.out.print("\n7-Finalizar");
	  System.out.print("\nDigite sua opcao: ");
	  op = entrada.nextInt();
	  switch (op)
	  { case 1:
			if (cont_d < 6)
			 { System.out.print("\nDigite o c¢digo da disciplina: ");
			   dis_aux = entrada.nextInt();
				 i=0;
				 while ((i<cont_d) && (dis_aux!=disciplinas[i].cod_d))
					 i++;
				 if (i<cont_d)
					System.out.print("\nDisciplina ja cadastrada! ");
				 else
					{ disciplinas[cont_d] = new Disciplina();
					  disciplinas[cont_d].cod_d=dis_aux;
					  entrada = new Scanner(System.in);
					  System.out.print("Digite a descricao da disciplina: ");
					  disciplinas[cont_d].descr = entrada.nextLine();
					  System.out.print("Digite a carga horaria da disciplina: ");
					  disciplinas[cont_d].carga_hor = entrada.nextInt();
					  cont_d++;
					}
			 }
			else
				System.out.print("\nJa foram cadastradas as 6 disciplinas! ");
			break;
		case 2:
			 if (cont_a < 10)
				 { System.out.print("\nDigite o codigo do aluno: ");
				   alu_aux = entrada.nextInt();
				   i=0;
				   while ((i<cont_a) && (alu_aux!=alunos[i].cod_a))
				 		i++;
				   if (i<cont_a)
					  System.out.print("\nAluno ja cadastrado! ");
				   else
						{ alunos[cont_a] = new Aluno();
						  alunos[cont_a].cod_a=alu_aux;
				  		  System.out.print("Digite o nome do aluno: ");
				  		  entrada = new Scanner(System.in);
						  alunos[cont_a].nome = entrada.nextLine();
						  do
						 	{ System.out.print("Digite a swrie do aluno (de 5a a 9a): ");
						      alunos[cont_a].serie = entrada.nextInt();
							} while ((alunos[cont_a].serie < 5) || (alunos[cont_a].serie > 9));
						  cont_a++;
						}
				 }
			else
				System.out.print("\nJa foram cadastradas os 10 alunos! ");
			break;
		case 3:
			 if (cont_m < 30)
				 { System.out.print("\nDigite o codigo do aluno que deseja se matricular ");
				   alu_aux = entrada.nextInt();
				   i=0;
				   while ((i<cont_a) && (alunos[i].cod_a != alu_aux))
						i++;
				   if (i==cont_a)
					  System.out.print("\nAluno nao cadastrado! ");
					 else
						{   cont=0;
							for (i=0;i<cont_m;i++)
								{ if (matriculas[i].cod_a == alu_aux)
										 cont++;
								}
							if (cont>=3)
								System.out.print("\nEste aluno ja esta matriculado em 3 disciplinas ");
							else
								 { System.out.print("\nDigite o codigo da disciplina em que o aluno deseja se matricular: ");
								   dis_aux = entrada.nextInt();
								   j=0;
								   while ((j<cont_d) && (disciplinas[j].cod_d != dis_aux))
									   j++;
								   if (j==cont_d)
									  { System.out.print("\nDisciplina nao cadastrada! ");
										achou=1;
									  }
									else
										{ j=0;
										  achou=0;
										  while ((j<cont_m) && (achou==0))
										 	{ if ((matriculas[j].cod_a==alu_aux) && (matriculas[j].cod_d==dis_aux))
												 { achou=1;
												 }
											 j++;
											}
											if (achou == 1)
												System.out.print("\nO aluno ja esta matriculado nesta disciplina. ");
											else
											   { matriculas[cont_m] = new Matrícula();
											     matriculas[cont_m].cod_a = alu_aux;
												 matriculas[cont_m].cod_d=dis_aux;
												 matriculas[cont_m].faltas=0;
												 matriculas[cont_m].nota=0;
												 cont_m++;
											   }
										}
								 }
						}
				 }
			else
				 System.out.println("\nNao existe espaco para mais matriculas!");
			break;
		case 4:
			System.out.print("\nDigite o c¢digo do aluno: ");
			alu_aux = entrada.nextInt();
			i=0;
			while ((i<cont_a) && (alunos[i].cod_a!=alu_aux))
				i++;
			if (i==cont_a)
				System.out.print("\nNao existe aluno com este c¢digo! ");
			else
			   { System.out.print("\nDigite o c¢digo da disciplina: ");
				 dis_aux = entrada.nextInt();
				 i=0;
				 while ((i<cont_d) && (disciplinas[i].cod_d!=dis_aux))
					 i++;
				 if (i==cont_d)
					System.out.print("\nNao existe disciplina com este codigo! ");
				 else
					{ i=0;
					  while ((i<cont_m) && ((matriculas[i].cod_a!=alu_aux) || (matriculas[i].cod_d!=dis_aux)))
							i++;
					  if (i==cont_m)
						 System.out.print("Matricula invalida! ");
					  else
						 { System.out.print("\nDigite o total de faltas: ");
						   matriculas[i].faltas = entrada.nextInt();
						   System.out.print("\nDigite a nota final: ");
						   matriculas[i].nota = entrada.nextFloat();
						 }
					}
				}
			break;
		case 5:
			for (i=0;i<cont_m;i++)
			  { j=0;
				while ((j<cont_d) && (matriculas[i].cod_d!=disciplinas[j].cod_d))
					j++;
				perc=disciplinas[j].carga_hor * 25 / 100;
				if ((matriculas[i].faltas>perc) || (matriculas[i].nota < 7))
					 { k=0;
					   while ((k<cont_a) && (matriculas[i].cod_a!=alunos[k].cod_a))
							k++;
					   System.out.print("\nAluno " + alunos[k].nome + " reprovado em " + disciplinas[j].descr);
					   System.out.print("\nTotal de faltas: " + matriculas[i].faltas + " Nota final: " + matriculas[i].nota);
					 }
				}
			break;
		case 6:
			System.out.print("\nDigite o codigo do aluno que deseja consultar: ");
			alu_aux = entrada.nextInt();
			i=0;
			while ((i<cont_a) && (alunos[i].cod_a!=alu_aux))
				i++;
			if (i==cont_a)
				System.out.print("\nEste aluno nao esta cadastrado!");
			else
			   { System.out.print("Boletim escolar do aluno " + alunos[i].nome + "\n");
				 for (i=0;i<cont_m;i++)
					 { if (matriculas[i].cod_a==alu_aux)
						{ j=0;
							while ((j<cont_d) && (disciplinas[j].cod_d!=matriculas[i].cod_d))
								j++;
							System.out.print("Disciplina: " + disciplinas[j].descr);
							System.out.print(" Total de faltas: " + matriculas[i].faltas + " Nota final: " + matriculas[i].nota);
							perc=disciplinas[j].carga_hor * 25 / 100;
							if ((matriculas[i].faltas > perc) || (matriculas[i].nota < 7))
								 System.out.print(" ==> Resultado: Reprovado \n");
							else
								 System.out.print(" ==> Resultado: Aprovado \n");
						}
					}
				 }
		} //fim switch
	} while (op!=7);
} //fim main
	private static class Aluno
	{ public int cod_a;
	  public int serie;
	  public String nome;
	}
	private static class Disciplina
	{ public int cod_d;
	  public int carga_hor;
	  public String descr;
	}
	private static class Matrícula
	{ public int cod_a;
	  public int cod_d;
	  public int faltas;
	  public float nota;
	}
}