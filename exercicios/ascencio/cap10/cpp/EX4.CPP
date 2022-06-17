#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{ struct
    { int num_avi;
      char nome[30];
    } reservas[60];
  int avi[4], lug[4], i, pos_livre, op, numero, achou, posi, cad_avi, cad_lug;
  char nome[30];
  for (i=0;i<4;i++)
    { avi[i] = 0;
      lug[i] = 0;
    }
  for (i=0;i<60;i++)
    { reservas[i].num_avi = 0;
      strcpy(reservas[i].nome, "\0");
    }
  pos_livre = 0;
  cad_avi = 0;
  cad_lug = 0;
  do
	{ printf("\nMenu de Opcoes");
	  printf("\n1 - Cadastrar os n£meros dos avioes");
	  printf("\n2 - Cadastrar os lugares dispon¡veis em cada aviao");
	  printf("\n3 - Reservar passagem");
	  printf("\n4 - Consultar pelo n£mero do aviao");
	  printf("\n5 - Consultar pelo nome do passageiro");
	  printf("\n6 - Finalizar");
	  printf("\nDigite a opcao desejada ");
	  scanf("%d%*c", &op);

	  if (op == 1)
		 { if (cad_avi == 0)
			{ for (i=0;i<4;i++)
				{ printf("\nDigite o numero do %d.o aviao ", i+1);
				  scanf("%d%*c", &avi[i]);
				}
			  cad_avi = 1;
			}
		   else
			{ printf("\nTodos os avioes ja foram cadastrados");
			 getchar();
            } 
		 }
		 
      if (op == 2)
		 { if (cad_lug == 0)
			{ for (i=0;i<4;i++)
				{ printf("\nDigite o numero de lugares disponiveis no %d.o aviao ", i+1);
				  scanf("%d%*c", &lug[i]);
				}
			  cad_lug = 1;
			}
           else
		 	printf("\nJa foram definidos os lugares de todos os avioes");
			getchar();
         }
        
      if (op == 3)
		 { printf("\nDigite o numero do aviao no qual deseja efetuar a reserva ");
		   scanf("%d%*c", &numero);
		   if (pos_livre == 60)
			   printf("\nReservas em todos os avioes esgotadas");
		   else
		     { achou = 0;
			   for (i=0;i<4;i++)
			     { if (avi[i] == numero)
				     { achou = 1;
				       posi = i;
				     }
			     }
			   if (achou == 0)
			      printf("\nNao existe este aviao");
			   else
			      if (lug[posi] == 0)
				     printf("\nAviao lotado");
			      else
				     { printf("Digite o nome do passageiro ");
				       scanf("%s%*c", nome);
   	                   for (i=0; i< strlen(nome); i++)
                            nome[i] = toupper(nome[i]);
			           reservas[pos_livre].num_avi = numero;
			           strcpy(reservas[pos_livre].nome,nome);
				       printf("\nReserva efetuada com sucesso ");
			           pos_livre++;
				       lug[posi] = lug[posi] - 1;
				     }
			}
		  getchar();
		}
		
	  if (op == 4)
		 { printf("\nDigite o numero do aviao do qual deseja consultar as reservas ");
		   scanf("%d%*c", &numero);
		   achou = 0;
		   for (i=0;i<4;i++)
			 { if (avi[i] == numero)
				achou = 1;
			 }
		   if (achou == 0)
		      printf("\nNao existe este aviao");
		   else
		      { achou = 0;
			    for (i=0;i<pos_livre;i++)
			      { if (reservas[i].num_avi == numero)
				      { printf("\nNome passageiro: %s", reservas[i].nome);
				        achou = 1;
				      }
			      }
		        if (achou == 0)
			       printf("\nNenhuma reserva esta cadastrada para este aviao");
			  }
		   getchar();
		}
		
	  if (op == 5)
	     { printf("\nDigite o nome do passageiro no qual deseja consultar as reservas ");
	       scanf("%s%*c", nome);
	       for (i=0; i< strlen(nome); i++)
	           nome[i] = toupper(nome[i]);
	       achou = 0;
	       for (i=0;i<pos_livre;i++)
	          { if (strcmp(reservas[i].nome,nome) == 0)
                   { printf("\nNumero aviao: %d", reservas[i].num_avi);
                     achou = 1;
		           }
		      }
		   if (achou == 0)
		      printf("\nNenhuma reserva esta cadastrada para este nome");
		   getchar();
		}
     } while (op != 6);
  return 0;
}

