#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main()
{ struct
     { int numero_filial;
       char nome_filial[25];
     } filial[4];
  struct
     { int numero_filial, cod_func;
       float salario;
       char cargo[15], nome_func[30];
     } func[20];
  int i, j, livre_filial, livre_func, cont, fili, op, achou, numero;
  float total_geral, total_filial, sal;
  char cargo[15], nome[30];

	for (i=0;i<4;i++)
    { filial[i].numero_filial = 0;
      strcpy(filial[i].nome_filial,"\0");
    }
  for (i=0;i<20;i++)
    { func[i].numero_filial = 0;
      func[i].cod_func = 0;
      func[i].salario = 0;
      strcpy(func[i].cargo,"\0");
      strcpy(func[i].nome_func,"\0");
    }
  livre_func = 0;
  livre_filial = 0;
  total_geral = 0;
	do
	{   printf("\nMenu de Opcoes");
		printf("\n1 - Cadastrar filial");
		printf("\n2 - Cadastrar funcionario");
		printf("\n3 - Consultar filiais");
		printf("\n4 - Sair");
		printf("\nDigite a opcao desejada ");
		scanf("%d%*c", &op);
		if (op == 1)
			 { printf("\nCadastro de filiais");
			   if (livre_filial == 4)
					printf("\nCadastro de filiais lotado");
			   else
				{ printf( "\nDigite o numero da filial ");
				  scanf("%d%*c", &numero);
				  achou = 0;
				  for (i=0;i< livre_filial;i++)
					{ if (filial[i].numero_filial == numero)
						 achou = 1;
					}
				  if (achou == 1)
				     printf("\nJa existe filial cadastrada com este numero ");
				  else
				    { printf("Digite o nome da filial ");
				      scanf("%s%*c", filial[livre_filial].nome_filial);
				      filial[livre_filial].numero_filial = numero;
				      printf("\nFilial cadastrada com sucesso! ");
				      livre_filial++;
				    }
			    }
			  getchar();
		}

		if (op == 2)
		 { printf("\nCadastro de funcionarios");
		   if (livre_func == 20)
				printf("\nCadastro de funcionarios lotado ");
		   else
			{ printf("\nDigite o numero do funcionario a ser cadastrado ");
			  scanf("%d%*c", &numero);
			  achou = 0;
			  for (i=0;i<livre_func;i++)
			  { if (func[i].cod_func == numero)
		           achou = 1;
			  }
			  if (achou == 1)
			     printf("\nJa existe funcionario cadastrado com este codigo");
			  else
				 { printf("Digite o numero da filial deste funcionario ");
				   scanf("%d%*c", &fili);
				   achou = 0;
				   for (i=0;i<livre_filial;i++)
				     { if (filial[i].numero_filial == fili)
					       achou = 1;
				     }
			      if (achou == 0)
					  printf("\nEsta filial nao esta cadastrada");
   	              else
					{ cont = 0;
					  for (i=0;i<livre_func;i++)
					      { if (func[i].numero_filial == fili)
					           cont++;
					      }
				      if (cont == 5)
				         printf( "\nEsta filial ja esta com todos os funcionarios cadastrados ");
				      else
				        { do
					        { printf("Digite o cargo do funcionario (Gerente ou Vendedor)");
					          scanf("%s%*c", &cargo);
					          for (i=0; i < strlen(cargo); i++)
					              cargo[i] = toupper(cargo[i]);
					          if ((strcmp(cargo,"GERENTE")!=0) && (strcmp(cargo,"VENDEDOR")!=0))
					             printf("Cargo invalido! Digite Gerente ou Vendedor \n");
					        } while ((strcmp(cargo,"GERENTE")!=0) && (strcmp(cargo,"VENDEDOR")!=0));
					      if (strcmp(cargo,"GERENTE") == 0)
					         { cont = 0;
			                   for (i=0;i<livre_func;i++)
						           { if ((func[i].numero_filial == fili) && (strcmp(func[i].cargo,cargo)==0))
							            cont++;
						           }
						       if (cont == 1)
						          printf( "\nEsta filial ja possui gerente");
						       else
						          cont = 0;
					        }
				          if (strcmp(cargo,"VENDEDOR") == 0)
					         { cont = 0;
					           for (i=0;i<livre_func;i++)
					              { if ((func[i].numero_filial == fili) && (strcmp(func[i].cargo,cargo)==0))
						               cont++;
					              }
				               if (cont == 4)
			                      printf("\nEsta filial ja possui 4 vendedores cadastrados");
				               else
						          cont = 0;
					        }
					      if (cont == 0)
					         { printf("Digite o salario ");
					           scanf("%f%*c", &func[livre_func].salario);
				               printf("Digite o nome do funcionario ");
					           scanf("%s%*c", func[livre_func].nome_func);
					           func[livre_func].numero_filial = fili;
					           func[livre_func].cod_func = numero;
					           strcpy(func[livre_func].cargo,cargo);
					           printf("\nFuncionario cadastrado com sucesso!");
					           livre_func++;
					         }
				        }
			         }
		         }
              }
           getchar();
	     }
	     
        if (op == 3)
		   { if (livre_filial == 0)
			    printf("\nCadastro de filiais vazio");
		     else
			    if (livre_func == 0)
			       printf("\nCadastro de funcionarios vazio");
			    else
			      { total_geral = 0;
                    for (i=0;i<livre_filial;i++)
                        { printf( "\nFilial numero: %d nome: %s", filial[i].numero_filial, filial[i].nome_filial);
					      total_filial = 0;
				          for (j=0;j<livre_func;j++)
				            { if (func[j].numero_filial == filial[i].numero_filial)
				                 { printf("\n\nFuncionario: %s", func[j].nome_func);
					               printf("\nCargo: %s  Salario: %10.2f", func[j].cargo, func[j].salario);
                                   total_filial = total_filial + func[j].salario;
				                  }
				            }
			              printf("\nTotal de salario da filial = %10.2f", total_filial);
			              total_geral = total_geral + total_filial;
			              printf("\n\t\tTecle enter ...");
			              getchar();
		                }
				    printf("\n\nTotal dos sal rios de todas as filiais = %10.2f", total_geral);
			      }
			    getchar();
		  }
		} while (op!=4);
  return 0;
}
