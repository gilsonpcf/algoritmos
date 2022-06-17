#include <stdio.h>

int main()
{ struct
     { int num_b, ano_f;
       char nome[11];
     } barcos[6];
  struct
     { int num_r, cod_venc, hora_i;
       char data[11];
     } regatas[3];
  struct
    { int num_r, num_b, hora_c;
    } barco_reg[12];
  int i, j, k, cont_b, cont_r, cont_rb, cont, reg_aux, bar_aux, op;
  cont_b = 0;
  cont_r = 0;
  cont_rb = 0;
  do
     { 
       printf("\n1-Cadastrar barco");
       printf("\n2-Cadastrar regata");
       printf("\n3-Cadastrar participantes");
       printf("\n4-Cadastrar barco vencedor");
       printf("\n5-Mostrar regatas com seus vencedores");
       printf("\n6-Mostrar participantes de uma regata");
       printf("\n7-Finalizar");
	   printf("\nDigite sua opcao: ");
       scanf("%d%*c", &op);
       switch (op)
			 { case 1: if (cont_b < 6)
			              { printf("\nDigite o numero do barco: ");
                            scanf("%d%*c", &bar_aux);
			                i=0;
			                while ((i<cont_b) && (barcos[i].num_b!=bar_aux))
			                      i++;
			                if (i < cont_b)
				               { printf("\nBarco ja cadastrado!");
				                 getchar();
				               }
			                else
				               { barcos[cont_b].num_b = bar_aux;
				                 printf("Digite o nome do barco: ");
			                     scanf("%s%*c", barcos[cont_b].nome);
				                 printf("Digite o ano de fabricacao do barco: ");
				                 scanf("%d%*c", &barcos[cont_b].ano_f);
				                 cont_b++;
				               }
			              }
				       else
						  { printf("\nJa foram cadastrados 6 barcos!");
						    getchar();
					      }
					break;
					
		       case 2: if (cont_r < 3)
						  { printf("\nDigite o numero da regata: ");
						    scanf("%d%*c", &reg_aux);
						    i=0;
						    while ((i<cont_r) && (regatas[i].num_r!=reg_aux))
							      i++;
						    if (i < cont_r)
								{ printf("\nRegata ja cadastrada!");
								  getchar();
								}
						    else
								{ regatas[cont_r].num_r = reg_aux;
								  printf("Digite a data de realizacao da regata: ");
								  scanf("%s%*c", regatas[cont_r].data);
								  printf("Digite a hora de inicio da regata: ");
								  scanf("%d%*c", &regatas[cont_r].hora_i);
								  regatas[cont_r].cod_venc=0;
								  cont_r++;
								}
						 }
					   else
							 { printf("\nJa foram cadastradas 3 regatas!");
							   getchar();
							 }
				    break;
				    
		       case 3: printf("\nDigite o codigo da regata: ");
					   scanf("%d%*c", &reg_aux);
					   i=0;
					   while ((i<cont_r) && (regatas[i].num_r!=reg_aux))
							i++;
					   if (i==cont_r)
						{ printf("\nRegata nao cadastrada!");
						  getchar();
						}
					   else
						{ cont=0;
							for (i=0;i<cont_rb;i++)
								{ if (barco_reg[i].num_r==reg_aux)
									 cont++;
								}
							if (cont==4)
							 { printf("\nJa foram cadastrados 4 participantes nesta regata!");
							   getchar();
							 }
							else
							 {   printf("Digite o numero do barco: ");
								 scanf("%d%*c", &bar_aux);
								 i=0;
								 while ((i<cont_b) && (barcos[i].num_b!=bar_aux))
									 i++;
								 if (i==cont_b)
									{ printf("\nBarco nao cadastrado!");
									  getchar();
									}
								 else
									{ i=0;
									  while (i<cont_rb)
										    { if ((bar_aux==barco_reg[i].num_b) && (reg_aux == barco_reg[i].num_r))
											     i=cont_rb + 1;
										      else
											     i++;
										    }
									  if (i>cont_rb)
									     { printf("\nEste barco ja esta participando desta regata!");
										   getchar();
									     }
									  else
									 	{ barco_reg[cont_rb].num_r=reg_aux;
										  barco_reg[cont_rb].num_b=bar_aux;
										  printf("Digite a hora da chegada: ");
										  scanf("%d%*c", &barco_reg[cont_rb].hora_c);
										  cont_rb++;
										}
									}
							  }
						 }
					break;
					
		       case 4: printf("\nDigite o codigo da regata: ");
					   scanf("%d%*c", &reg_aux);
					   i=0;
					   while ((i<cont_r) && (regatas[i].num_r!=reg_aux))
						     i++;
					   if (i==cont_r)
						{ printf("\nRegata nao cadastrada!");
						  getchar();
						}
					   else
						{ printf("Digite o numero do barco: ");
						  scanf("%d%*c", &bar_aux);
						  j=0;
					      while ((j<cont_rb) && ((barco_reg[j].num_b!=bar_aux) || (barco_reg[j].num_r!=reg_aux)))
							    j++;
						  if (j==cont_rb)
						     { printf("\nEste barco nao participou desta regata!");
							   getchar();
						     }
						  else
						     regatas[i].cod_venc=bar_aux;
						}
					break;
					
		       case 5: for (i=0;i<cont_r;i++)
						 { printf("\nRegata: %d  Data de realizacao: %s", regatas[i].num_r, regatas[i].data);
						   if (regatas[i].cod_venc == 0)
							  { printf("\nAinda nao foi cadastrado o barco vencedor!  Tecle enter \n");
								getchar();
							  }
						   else
							  { j=0;
							    while ((j<cont_b) && (regatas[i].cod_venc!=barcos[j].num_b))
								      j++;
							    if (j==cont_b)
								   { printf("\nBarco vencedor nao cadastrado!");
								     getchar();
								   }
							    else
							       { printf(" Barco vencedor: %s", barcos[j].nome);
							         printf("\n\t\t\tTecle enter ... ");
							         getchar();
							       }
						      }
					     }
					break;
					
		       case 6: printf("\nDigite o numero da regata: ");
					   scanf("%d%*c", &reg_aux);
					   i=0;
					   while ((i<cont_r) && (regatas[i].num_r!=reg_aux))
					         i++;
					   if (i == cont_r)
						   { printf("\nRegata nao cadastrada!");
							 getchar();
						   }
					   else
						   { printf("\nParticantes da regata %d realizada em %s", regatas[i].num_r, regatas[i].data);
						     for (j=0;j<cont_rb;j++)
								 { if (barco_reg[j].num_r == reg_aux)
									  { k=0;
									    while ((k<cont_b) && (barcos[k].num_b!=barco_reg[j].num_b))
										      k++;
									    if (k<cont_b)
										    { printf("\nBarco: %d fabricado em %d", barcos[k].num_b, barcos[k].ano_f);
										    }
								      }
								 }
							getchar();
					       }
			 } //fim switch
	} while (op!=7);
  return 0;	
} //fim main

