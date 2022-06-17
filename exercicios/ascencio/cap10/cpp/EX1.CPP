#include <string.h>
#include <stdio.h>

int main()
{ struct { 
     int num;
	 char nome[35];
	 float saldo;
	} conta[15];
 int i, op, posi, achou, num_conta;
 float saldo_cliente, menor_saldo;
 char nome_cliente[35], *n;
 for (i=0;i<15;i++)
	 { conta[i].num = 0;
       strcpy(conta[i].nome, "\0");
	   conta[i].saldo = 0;
	 }
 do
	 { printf("\nMenu de Opcoes");
	   printf("\n1 - Cadastrar contas");
	   printf("\n2 - Visualizar todas as contas de um determinado cliente");
	   printf("\n3 - Excluir conta de menor saldo");
       printf("\n4 - Sair");
	   printf("\nDigite sua opcao ");
	   scanf("%d%*c", &op);
       if ((op < 1) || (op > 4))
		   printf("\nOpcao Invalida");
       if (op == 1)
		{ achou = 0;
		  printf("\nDigite o número da conta a ser incluida ");
		  scanf("%d%*c", &num_conta);
		  for (i=0;i<15;i++) { 
            if (num_conta == conta[i].num)
				 achou = 1;
		  }
		  if (achou == 1)
		     printf("\nJa existe conta cadastrada com este numero");
		  else { 
               posi = -1;
			   i = 0;
			   while (i < 15) { 
                  if (conta[i].num == 0) { 
                      posi = i;
				      i = 15;
                  }
			      i++;
		       }
               if (posi == -1)
			      printf("\nImpossivel cadastrar novas contas");
		  	   else { 
                      printf("Digite o nome do cliente ");
					  scanf("%s%*c", conta[posi].nome);
					  printf("Digite o saldo do cliente ");
				      scanf("%f%*c", &conta[posi].saldo);
					  conta[posi].num = num_conta;
					  printf("\nConta cadastrada com sucesso");
					}
               }
		  getchar();
	   }
       if (op == 2) { 
          printf("\nDigite o nome do cliente a ser consultado ");
		  scanf("%s%*c", nome_cliente);
		  achou = 0;
		  for (i=0;i<15;i++) { 
              if (strcmp(conta[i].nome, nome_cliente) == 0) { 
                  printf("\nNumero conta: %d Saldo: %10.2f", conta[i].num, conta[i].saldo);
				  achou = 1;
              }
		  }
		  if (achou == 0)
              printf("\nNao existe conta cadastrada para este cliente");
		  getchar();
       }
       if (op == 3) { 
           i = 0;
		   achou = 0;
		   while (i < 15) { 
               if (conta[i].num != 0) { 
                  if (i==0) { 
                     menor_saldo = conta[i].saldo;
					 posi = i;
				  }
				  else
				     if (conta[i].saldo < menor_saldo) { 
                         menor_saldo = conta[i].saldo;
                         posi = i;
                     }
                  achou = 1;
               }
               i++;
			}
			if (achou == 0)
                printf("\nNenhuma conta foi cadastrada");
			else { 
                    for (i=posi;i<14;i++) { 
                        conta[i] = conta[i+1];
					}
					conta[i].num = 0;
					strcpy(conta[i].nome,"\0");
					conta[i].saldo = 0;
					printf("\nConta excluida com sucesso");
                 }
             getchar();
       }
    } while (op!=4);
    return 0;
}

