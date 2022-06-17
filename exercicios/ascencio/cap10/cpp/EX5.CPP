#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main()
{ struct
     { float num_horas_trab, valor_hora;
       char nome[40], turno, cat;
     } func[18];
  int i, pos_livre, op;
  float sal_minimo, sal_inicial, aux_alim, sal_final;
  for (i=0;i<18;i++)
    { func[i].num_horas_trab = 0;
      func[i].valor_hora = 0;
      strcpy(func[i].nome, "\0");
      func[i].turno = ' ';
      func[i].cat = ' ';
    }
	pos_livre = 0;
	do
		{ 
			printf("\nMenu de Opcoes");
			printf("\n1 - Cadastrar funcionarios");
			printf("\n2 - Mostrar folha de pagamento");
			printf("\n3 - Sair");
			printf("\nDigite a opcao desejada ");
			scanf("%d%*c", &op);
			if ((op != 1) && (op != 2) && (op != 3))
				printf("\nOpcao Invalida");
			if (op == 1)
				{ if (pos_livre == 18)
					printf("\nCadastro de funcionarios lotado");
				  else
					{ sal_minimo = 550;
					printf("\nDigite o nome do funcionario que deseja incluir ");
					scanf("%s%*c", func[pos_livre].nome);
					printf("Digite o numero de horas trabalhadas ");
					scanf("%f%*c", &func[pos_livre].num_horas_trab);
					printf("Digite o turno de trabalho (M-matutino, V-vespertino, N-noturno) ");
				    scanf("%c%*c", &func[pos_livre].turno);
				    func[pos_livre].turno = toupper(func[pos_livre].turno);
					while ((func[pos_livre].turno != 'M') && (func[pos_livre].turno != 'V') && (func[pos_livre].turno != 'N'))
					{ printf("\nTurno invalido. Digite novamente (M-matutino, V-vespertino, N-noturno) ");
					  scanf("%c*c", &func[pos_livre].turno);
					  func[pos_livre].turno = toupper(func[pos_livre].turno);
					}
					printf("Digite a categoria (O-operario, G-gerente) ");
					scanf("%c*c", &func[pos_livre].cat);
					func[pos_livre].cat = toupper(func[pos_livre].cat);
					while ((func[pos_livre].cat != 'O') && (func[pos_livre].cat != 'G'))
					 { printf("\nCategoria invalida. Digite novamente (O - operario, G-gerente) ");
					   scanf("%s*c", &func[pos_livre].cat);
					   func[pos_livre].cat = toupper(func[pos_livre].cat);
					 }
					if (func[pos_livre].cat == 'G')
					   if (func[pos_livre].turno == 'N')
							func[pos_livre].valor_hora = sal_minimo * 18/100;
					   else
							func[pos_livre].valor_hora = sal_minimo * 15/100;
					if (func[pos_livre].cat == 'O')
					   if (func[pos_livre].turno == 'N')
							func[pos_livre].valor_hora = sal_minimo * 13/100;
					   else
							func[pos_livre].valor_hora = sal_minimo * 10/100;
					printf("\nFuncionario cadastrado com sucesso");
					pos_livre++;
				}
			getchar();
		}
		
        if (op == 2)
		   { printf("\nFolha de Pagamento");
			 if (pos_livre == 0)
				{ printf("\nNao existe funcionario cadastrado");
				  getchar();
				}
			 else
				{ for (i=0;i<pos_livre; i++)
					{ printf("\n\nNOME = %s", func[i].nome);
					  printf("\nNUMERO DE HORAS TRABALHADAS = %10.2f", func[i].num_horas_trab);
					  printf("\nVALOR DA HORA TRABALHADA = %10.2f", func[i].valor_hora);
					  sal_inicial = func[i].num_horas_trab * func[i].valor_hora;
					  printf("\nSALARIO INICIAL = %10.2f", sal_inicial);
					  if (sal_inicial <= 550)
						 aux_alim = sal_inicial * 20/100;
					  else
						 if (sal_inicial < 800)
							aux_alim = sal_inicial * 15/100;
						 else
							aux_alim = sal_inicial * 5/100;
					  printf("\nAUXILIO ALIMENTACAO = %10.2f", aux_alim);
					  sal_final = sal_inicial + aux_alim;
					  printf("\nSALARIO FINAL = %10.2f", sal_final);
					  printf("\nTecle enter ...");
					  getchar();
				  }
				}
				 }
		} while (op != 3);
   return 0;
}
