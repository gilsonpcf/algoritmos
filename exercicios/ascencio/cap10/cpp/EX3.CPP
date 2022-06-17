#include <string.h>
#include <stdio.h>

int main()
{ struct
    { int cod_cli;
      char nome[35], fone[20], ende[30];
    } clientes[15];
  struct
    { int num_doc, cod_cli, dv, mv, av, dp, mp, ap;
      float valor, juros;
    } docs[10];
	int posi,op, i, j, k, cliente_livre, doc_livre, achou, codigo, numero;
	int diav, mesv, anov, diap, mesp, anop, dia_inicial, mes_inicial;
	int ano_inicial, dia_final, mes_final, ano_final;
	float valor, juros, total;
	char nome[35], fone[20], ende[30];
	for (i=0;i<15;i++)
		{ clientes[i].cod_cli = 0;
		  strcpy(clientes[i].nome, "\0");
		  strcpy(clientes[i].fone, "\0");
		  strcpy(clientes[i].ende, "\0");
		}
	cliente_livre = 0;
	for(i=0;i<10;i++)
		{ docs[i].num_doc = 0;
		  docs[i].cod_cli = 0;
		  docs[i].dv = 0;
		  docs[i].mv = 0;
		  docs[i].av = 0;
		  docs[i].dp = 0;
		  docs[i].mp = 0;
		  docs[i].ap = 0;
		  docs[i].valor = 0;
		  docs[i].juros = 0;
		}
	doc_livre = 0;
	do
		{ printf("Menu de Opcoes");
		  printf("\n1 - Cadastrar clientes");
		  printf("\n2 - Cadastrar documentos");
		  printf("\n3 - Excluir clientes");
		  printf("\n4 - Excluir documentos individuais");
		  printf("\n5 - Excluir documentos por cliente");
		  printf("\n6 - Excluir documentos por periodo");
		  printf("\n7 - Alterar clientes");
		  printf("\n8 - Totalizar documentos");
		  printf("\n9 - Sair");
		  printf("\nDigite sua opcao ");
		  scanf("%d*c", &op);
		  if ((op < 1) || (op > 9))
			 printf("Opcao invalida");
			 
		  if (op == 1)
			 { if (cliente_livre == 15)
		          printf("Cadastro de clientes lotado");
			   else
				{ printf("\nDigite o c¢digo do cliente a ser cadastrado ");
			      scanf("%d*c", &codigo);
				  achou = 0;
				  for (i=0;i<15;i++)
					{ if (clientes[i].cod_cli == codigo)
						 achou = 1;
					}
				  if (achou == 1)
					 printf("\nJa existe cliente cadastrado com este codigo");
				  else
				    { printf("Digite o nome do cliente ");
					  scanf("%s*c", clientes[cliente_livre].nome);
					  printf("Digite o telefone do cliente ");
					  scanf("%s*c", clientes[cliente_livre].fone);
					  printf("Digite o endereco do cliente ");
					  scanf("%s*c", clientes[cliente_livre].ende);
					  clientes[cliente_livre].cod_cli = codigo;
					  printf("\nCliente cadastrado com sucesso");
					  cliente_livre++;
					}
				}
			  getchar();
			 }

			if (op == 2)
		       { if (doc_livre == 10)
					printf("\nCadastro de documentos lotado ");
				 else
					{ printf("\nDigite o numero do documento a ser cadastrado ");
			          scanf("%d*c", &numero);
					  achou = 0;
					  for (i=0;i<10;i++)
						{ if (docs[i].num_doc == numero)
							 achou = 1;
						}
					  if (achou == 1)
						 printf("\nJa existe um documento cadastrado com este codigo");
					  else
						 { printf("Digite o codigo do cliente dono do documento ");
					       scanf("%d*c", &codigo);
						   achou = 0;
						   for (i=0;i<15;i++)
							 { if (clientes[i].cod_cli == codigo)
						          achou = 1;
							 }
						   if (achou == 0)
						      printf("\nNao existe cliente cadastrado com este codigo ");
						   else
							{ printf("\nDigite a data do vencimento do documento ");
						      printf("\ndia ==> ");
							  scanf("%d*c", &diav);
							  printf("mes ==> ");
							  scanf("%d*c", &mesv);
							  printf("ano ==> ");
							  scanf("%d*c", &anov);
							  printf("\nDigite a data do pagamento do documento ");
							  printf("\ndia ==> ");
							  scanf("%d*c", &diap);
							  printf("mes ==> ");
							  scanf("%d*c", &mesp);
							  printf("ano ==> ");
							  scanf("%d*c", &anop);
							  printf("Digite o valor do documento ");
							  scanf("%f*c", &valor);
							  if (anop > anov)
								 juros = valor * 5 / 100;
							  else
							    if ((anop == anov) && (mesp > mesv))
									juros = valor * 5 / 100;
							    else
								   if ((anop == anov) && (mesp == mesv) && (diap > diav))
									 juros = valor * 5 / 100;
								   else
							         juros = 0;
							  docs[doc_livre].num_doc = numero;
							  docs[doc_livre].cod_cli = codigo;
							  docs[doc_livre].dv = diav;
							  docs[doc_livre].mv = mesv;
							  docs[doc_livre].av = anov;
							  docs[doc_livre].dp = diap;
							  docs[doc_livre].mp = mesp;
							  docs[doc_livre].ap = anop;
							  docs[doc_livre].valor = valor;
							  docs[doc_livre].juros = juros;
							  printf("\nDocumento cadastrado com sucesso");
							  doc_livre++;
							}
					    }
				      }
					getchar();
			  }
			  
			if (op == 3)
			 { printf("\nDigite o codigo do cliente a ser excluido ");
			   scanf("%d*c", &codigo);
			   achou = 0;
			   for (i=0;i<15;i++)
			   { if (clientes[i].cod_cli == codigo)
			       	{ achou = 1;
				      posi=i;
				    }
			   }
			   if (achou == 0)
			      printf("\nNao existe cliente cadastrado com este codigo");
			   else
				{ achou = 0;
				  for (i=0;i<10;i++)
					{ if (docs[i].cod_cli == codigo)
						 achou = 1;
					}
				  if (achou == 1)
				     printf("\nEste cliente nao pode ser excluido, possui documento");
				  else
				   { for (i=posi;i<cliente_livre;i++)
				       { clientes[i].cod_cli = clientes[i+1].cod_cli;
					     strcpy(clientes[i].nome,clientes[i+1].nome);
					     strcpy(clientes[i].fone,clientes[i+1].fone);
				         strcpy(clientes[i].ende,clientes[i+1].ende);
				         cliente_livre = cliente_livre -1;
					   }
				     printf("\nCliente excluido com sucesso");
				     cliente_livre--;
			       }
			    }
			  getchar();
			}

			if (op == 4)
			   { printf("\nDigite o numero do documento a ser excluido ");
				 scanf("%d*c", &numero);
				 achou = 0;
				 for (i=0;i<10;i++)
				 { if (docs[i].num_doc == numero)
					{ achou = 1;
					posi = i;
					}
				 }
				 if (achou == 0)
					printf("\nNao existe documento cadastrado com esse n£mero ");
				 else
					{ for (i=posi;i<doc_livre;i++)
						{ docs[i].num_doc = docs[i+1].num_doc;
						  docs[i].cod_cli = docs[i+1].cod_cli;
						  docs[i].dv = docs[i+1].dv;
						  docs[i].mv = docs[i+1].mv;
						  docs[i].av = docs[i+1].av;
						  docs[i].dp = docs[i+1].dp;
						  docs[i].mp = docs[i+1].mp;
						  docs[i].ap = docs[i+1].ap;
						  docs[i].valor = docs[i+1].valor;
						  docs[i].juros = docs[i+1].juros;
						}
					  printf("\nDocumento exclu¡do com sucesso");
			    	  doc_livre--;
				   }
				getchar();
			 }
			
            if (op == 5)
			   { printf("\nDigite o codigo do cliente do qual deseja excluir os documentos ");
				 scanf("%d*c", &codigo);
				 achou = 0;
				 for (i=0;i<15;i++)
				 { if (clientes[i].cod_cli == codigo)
					achou = 1;
				 }
			   if (achou == 0)
				  printf("\nNao existe cliente cadastrado com este c¢digo");
			   else
				{ if (doc_livre == 0)
					 printf("\nNao existe documento cadastrado");
				  else
				   { k = 0;
				     achou = 0;
				     while (k < doc_livre)
				      { if (codigo == docs[k].cod_cli)
					       { achou = 1;
					         for (i=k;i<doc_livre;i++)
			                   { docs[i].num_doc = docs[i+1].num_doc;
						         docs[i].cod_cli = docs[i+1].cod_cli;
					             docs[i].dv = docs[i+1].dv;
						         docs[i].mv = docs[i+1].mv;
						         docs[i].av = docs[i+1].av;
					             docs[i].dp = docs[i+1].dp;
					             docs[i].mp = docs[i+1].mp;
						         docs[i].ap = docs[i+1].ap;
						         docs[i].valor = docs[i+1].valor;
						         docs[i].juros = docs[i+1].juros;
					           }
					         doc_livre--;
				           }
				       else k++;
				     }
				    if (achou == 0)
				       printf("\nNao existe documento cadastrado para este cliente");
				    else
                       printf("\nDocumentos exclu¡dos com sucesso");
		           }
			    }
			  getchar();
			}
			
			if (op == 6)
			 { printf("\nDigite a data inicial dos documentos que serao excluidos");
			   printf("\ndia ==> ");
			   scanf("%d*c", &dia_inicial);
			   printf("mes ==> ");
			   scanf("%d*c", &mes_inicial);
			   printf("ano ==> ");
		       scanf("%d*c", &ano_inicial);
			   printf("\nDigite a data final dos documentos que serao excluidos");
			   printf("\ndia ==> ");
			   scanf("%d*c", &dia_final);
			   printf("mes ==> ");
			   scanf("%d*c", &mes_final);
			   printf("ano ==> ");
			   scanf("%d*c", &ano_final);
			   k = 0;
			   achou = 0;
			   while (k < doc_livre)
				{ if ((docs[k].av > ano_inicial) || ((docs[k].av == ano_inicial) && (docs[k].mv > mes_inicial)) ||
					((docs[k].av == ano_inicial) && (docs[k].mv == mes_inicial) && (docs[k].dv >= dia_inicial)))
					if ((docs[k].av < ano_final) || ((docs[k].av == ano_final) && (docs[k].mv < mes_final)) ||
						((docs[k].av == ano_final) && (docs[k].mv == mes_final) && (docs[k].dv <= dia_final)))
						{ for (i=k;i<doc_livre-1;i++)
							{ docs[i] = docs[i+1];
							}
						   doc_livre--;
						   achou = 1;
						}
					  else k++;
				   else k++;
				 }
			 if (achou == 0)
				 printf("\nNao existe documento neste periodo");
			 else
				 printf("\nDocumentos excluidos com sucesso");
			 getchar();
			}
			
			if (op == 7)
			 { printf("\nDigite o c¢digo do cliente a ser alterado ");
			   scanf("%d*c", &codigo);
			   achou = 0;
			   for (i=0;i<15;i++)
			   { if (clientes[i].cod_cli == codigo)
			        { achou = 1;
				      posi = i;
				    }
			   }
			   if (achou == 0)
				 printf("\nNao existe cliente cadastrado com este codigo para ser alterado ");
			   else
				{ printf("\nDigite o novo nome do cliente ");
			      scanf("%s*c", nome);
				  printf("\nDigite o novo telefone do cliente ");
				  scanf("%s*c", fone);
				  printf("\nDigite o novo endere‡o do cliente ");
				  scanf("%s*c", ende);
			      strcpy(clientes[posi].nome,nome);
				  strcpy(clientes[posi].fone,fone);
				  strcpy(clientes[posi].ende,ende);
				  printf("\nCliente alterado com sucesso");
				}
			getchar();
           }
		  
         if (op == 8)
			{ printf("\nDigite o c¢digo do cliente do qual deseja totalizar os documentos ");
		      scanf("%d*c", &codigo);
              achou = 0;
			  for (i=0;i<15;i++)
			    { if (clientes[i].cod_cli == codigo)
			         achou = 1;
				}
			  if (achou == 0)
			     printf("\nNao existe cliente cadastrado com este codigo ");
			  else
				{ total = 0;
			      for (i=0;i<doc_livre;i++)
					{ if (docs[i].cod_cli == codigo)
						 { total = total + docs[i].valor + docs[i].juros;
						 }
					}
				  printf("\nTotal dos documentos do cliente de codigo %d = %10.2f", codigo, total);
			    }
			  getchar();
			}
		} while (op!=9);
	return 0;
}
