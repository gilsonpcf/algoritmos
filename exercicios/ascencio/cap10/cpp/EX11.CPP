#include <stdio.h>

int main()
{ struct
   { int cod_a, serie;
     char nome[40];
   } alunos[10];
  struct
   {int cod_d, carga_hor;
    char descr[20];
   } disciplinas[6];
  struct
   { int cod_a, cod_d, faltas;
     float nota;
   } matriculas[30];
  int cont_a, cont_d, cont_m, cont, alu_aux, dis_aux, achou, i, j, k, op;
  float perc;
  cont_a=0;
  cont_d=0;
  cont_m=0;
  do
    {   printf( "\n1-Cadastrar disciplinas");
        printf( "\n2-Cadastrar alunos");
		printf( "\n3-Realizar matriculas");
		printf( "\n4-Lan‡ar notas e faltas");
		printf( "\n5-Consultar alunos reprovados");
		printf( "\n6-Mostrar disciplinas cursadas por aluno");
		printf( "\n7-Finalizar");
		printf( "\nDigite sua opcao: ");
		scanf("%d%*c", &op);
		switch (op)
		{ case 1:
			if (cont_d < 6)
			 { printf("\nDigite o codigo da disciplina: ");
			   scanf("%d%*c", &dis_aux);
			   i=0;
			   while ((i<cont_d) && (dis_aux!=disciplinas[i].cod_d))
					 i++;
			   if (i<cont_d)
			 		{ printf( "\nDisciplina ja cadastrada! ");
					  getchar();
					}
			   else
					{   disciplinas[cont_d].cod_d=dis_aux;
						printf( "Digite a descricao da disciplina: ");
						scanf("%s%*c", disciplinas[cont_d].descr);
						printf( "Digite a carga horaria da disciplina: ");
						scanf("%d%*c", &disciplinas[cont_d].carga_hor);
						cont_d++;
					}
			 }
		    else
				 { printf( "\nJa foram cadastradas as 6 disciplinas! ");
					 getchar();
				 }
			break;
          case 2:
			 if (cont_a < 10)
				 {   printf( "\nDigite o codigo do aluno: ");
					 scanf("%d%*c", &alu_aux);
					 i=0;
					 while ((i<cont_a) && (alu_aux!=alunos[i].cod_a))
							i++;
					 if (i<cont_a)
							{ printf( "\nAluno ja cadastrado! ");
							  getchar();
							}
					 else
							{   alunos[cont_a].cod_a=alu_aux;
								printf( "Digite o nome do aluno: ");
								scanf("%s%*c", &alunos[cont_a].nome);
								do
									{ printf( "Digite a serie do aluno (de 5a a 9a): ");
										scanf("%d%*c", &alunos[cont_a].serie);
									} while ((alunos[cont_a].serie < 5) || (alunos[cont_a].serie > 9));
								cont_a++;
							}
				 }
			else
				 {   printf( "\nJa foram cadastradas os 10 alunos! ");
					 getchar();
				 }
			break;
		  case 3:
			 if (cont_m < 30)
				 {   printf( "\nDigite o codigo do aluno que deseja se matricular ");
					 scanf("%d%*c", &alu_aux);
					 i=0;
					 while ((i<cont_a) && (alunos[i].cod_a != alu_aux))
							i++;
					 if (i==cont_a)
							{ printf( "\nAluno nao cadastrado! ");
							  getchar();
							}
					 else
							{ cont=0;
								for (i=0;i<cont_m;i++)
									{ if (matriculas[i].cod_a == alu_aux)
											 cont++;
									}
								if (cont>=3)
									 { printf( "\nEste aluno ja esta matriculado em 3 disciplinas ");
										 getchar();
									 }
								else
									 { printf( "\nDigite o codigo da disciplina em que o aluno deseja se matricular: ");
										 scanf("%d%*c", &dis_aux);
										 j=0;
										 while ((j<cont_d) && (disciplinas[j].cod_d != dis_aux))
											 { j++;
											 }
										 if (j==cont_d)
												{   printf( "\nDisciplina nao cadastrada! ");
													getchar();
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
														 {   printf( "\nO aluno ja esta matriculado nesta disciplina. ");
															 getchar();
														 }
													else
														 {   matriculas[cont_m].cod_a = alu_aux;
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
				 {   printf( "\nNao existe espaco para mais matriculas!");
					 getchar();
				 }
			break;
		  case 4:
			printf( "\nDigite o codigo do aluno: ");
			scanf("%d%*c", &alu_aux);
			i=0;
			while ((i<cont_a) && (alunos[i].cod_a!=alu_aux))
				i++;
			if (i==cont_a)
				 { printf( "\nNao existe aluno com este codigo! ");
				   getchar();
				 }
			else
				 {   printf( "\nDigite o codigo da disciplina: ");
					 scanf("%d%*c", &dis_aux);
					 i=0;
					 while ((i<cont_d) && (disciplinas[i].cod_d!=dis_aux))
						 i++;
					 if (i==cont_d)
							{ printf( "\nNao Existe disciplina com este codigo! ");
							  getchar();
							}
					 else
							{ i=0;
								while ((i<cont_m) && ((matriculas[i].cod_a!=alu_aux) || (matriculas[i].cod_d!=dis_aux)))
									i++;
								if (i==cont_m)
									 { printf( "Matricula invalida! ");
									   getchar();
									 }
								else
									 {   printf( "\nDigite o total de faltas: ");
										 scanf("%d%*c", &matriculas[i].faltas);
										 printf( "\nDigite a nota final: ");
										 scanf("%f%*c", &matriculas[i].nota);
									 }
						}
				 }
			break;
		  case 5:
			for (i=0;i<cont_m;i++)
				{   j=0;
					while ((j<cont_d) && (matriculas[i].cod_d!=disciplinas[j].cod_d))
						j++;
					perc=disciplinas[j].carga_hor * 25 / 100;
					if ((matriculas[i].faltas>perc) || (matriculas[i].nota < 7))
						 { k=0;
						   while ((k<cont_a) && (matriculas[i].cod_a!=alunos[k].cod_a))
								k++;
						   printf( "\nAluno %s reprovado em %s", alunos[k].nome, disciplinas[j].descr);
						   printf( "\nTotal de faltas: %d Nota final: %6.2f", matriculas[i].faltas, matriculas[i].nota);
						   getchar();
						}
				}
			break;
		  case 6:
			printf( "\nDigite o codigo do aluno que deseja consultar: ");
			scanf("%d%*c", &alu_aux);
			i=0;
			while ((i<cont_a) && (alunos[i].cod_a!=alu_aux))
				i++;
			if (i==cont_a)
				 { printf( "\nEste aluno nao esta cadastrado!");
				   getchar();
				 }
			else
				 { printf( "Boletim escolar do aluno %s \n", alunos[i].nome);
					 for (i=0;i<cont_m;i++)
							 { if (matriculas[i].cod_a==alu_aux)
								  { j=0;
									while ((j<cont_d) && (disciplinas[j].cod_d!=matriculas[i].cod_d))
									    j++;
									printf( "Disciplina: %s", disciplinas[j].descr);
									printf( " Total de faltas: %d Nota final: %6.2f", matriculas[i].faltas, matriculas[i].nota);
									perc=disciplinas[j].carga_hor * 25 / 100;
									if ((matriculas[i].faltas > perc) || (matriculas[i].nota < 7))
										 printf( " ==> Resultado: Reprovado \n");
									else
										 printf( " ==> Resultado: Aprovado \n");
									getchar();
								}
							}
				 }
		} //fim switch
	} while (op!=7);
 return 0;
} //fim main
