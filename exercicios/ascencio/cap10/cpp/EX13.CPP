#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{ struct
     { char nome[20], nome_med[20],
	    data_nasc[12], sexo;
     } pacientes[10], pac_cres[10], pac_decres[10];
  int cont, cont_p, i, j, op;
  char pac_aux[20], med_aux[20];
  cont_p = 0;
  do
  { 
    printf("\n1-Cadastrar paciente ");
	printf("\n2-Mostrar pacientes em ordem de cadastramento ");
	printf("\n3-Mostrar pacientes em ordem crescente ");
	printf("\n4-Mostrar pacientes em ordem decrescente ");
	printf("\n5-Excluir paciente individualmente ");
	printf("\n6-Excluir pacientes por m‚dico ");
	printf("\n7-Finalizar ");
	printf("\nDigite sua opcao: ");
	scanf("%d%*c", &op);
	switch (op)
	{ case 1: if (cont_p < 10)
				 { printf("\nDigite o nome do paciente: ");
				   scanf("%s%*c", pac_aux);
				   for (i=0; i<strlen(pac_aux); i++)
				       pac_aux[i] = toupper(pac_aux[i]);
				   i=0;
				   while ((i<cont_p) && (strcmp(pacientes[i].nome,pac_aux)!=0))
					 i++;
				   if (i<cont_p)
					{ printf("\nPaciente ja cadastrado! ");
				      getchar();
					}
				   else
					{ strcpy(pacientes[cont_p].nome, pac_aux);
					  printf("\nDigite o nome do medico: ");
					  scanf("%s%*c", pacientes[cont_p].nome_med);
				      for (i=0; i<strlen(pacientes[cont_p].nome_med); i++)
				          pacientes[cont_p].nome_med[i] = toupper(pacientes[cont_p].nome_med[i]);
					  printf("\nDigite a data de nascimento: ");
					  scanf("%s%*c", pacientes[cont_p].data_nasc);
					  printf("\nDigite o sexo do paciente (M ou F): ");
					  scanf("%c%*c", &pacientes[cont_p].sexo);
					  i=0;
					  while ((i < cont_p) && (strcmp(pacientes[cont_p].nome,pac_cres[i].nome)>0))
						i++;
					  if (i==cont_p)
					     { pac_cres[cont_p] = pacientes[cont_p];
					     }
					  else
					     { for (j=cont_p-1;j>=i;j--)
						       pac_cres[j+1] = pac_cres[j];
					       pac_cres[i] = pacientes[cont_p];
					     }
					  i=0;
				      while ((i < cont_p) && (strcmp(pacientes[cont_p].nome,pac_decres[i].nome)<0))
						    i++;
					  if (i==cont_p)
					     { pac_decres[cont_p] = pacientes[cont_p];
					     }
					  else
					    { for (j=cont_p-1;j>=i;j--)
						      pac_decres[j+1] = pac_decres[j];
					      pac_decres[i] = pacientes[cont_p];
					    }
					  cont_p++;
					}
				 }
				else
				 	 { printf("\nJa foram cadastrados 10 pacientes! ");
					   getchar();
					 }
				break;
				
	  case 2: for (i=0;i<cont_p;i++)
				  { printf("\nNome do paciente: %s", pacientes[i].nome);
					printf("\nNome do medico: %s", pacientes[i].nome_med);
					printf("\nData de nascimento: %s", pacientes[i].data_nasc);
					printf("\nSexo do paciente (M ou F): %c", pacientes[i].sexo);
					printf("\n\t\t\t\tTecle enter ...");
					getchar();
				  }
			break;
			
	  case 3: for (i=0;i<cont_p;i++)
				  { printf("\nNome do paciente: %s", pac_cres[i].nome);
					printf("\nNome do medico: %s", pac_cres[i].nome_med);
					printf("\nData de nascimento: %s", pac_cres[i].data_nasc);
					printf("\nSexo do paciente (M ou F): %c", pac_cres[i].sexo);
					printf("\n\t\t\t\tTecle enter ...");
					getchar();
			      }
              break;
              
	  case 4: for (i=0;i<cont_p;i++)
				  { printf("\nNome do paciente: %s", pac_decres[i].nome);
					printf("\nNome do medico: %s", pac_decres[i].nome_med);
					printf("\nData de nascimento: %s", pac_decres[i].data_nasc);
					printf("\nSexo do paciente (M ou F): %c", pac_decres[i].sexo);
					printf("\n\t\t\t\tTecle enter ...");
					getchar();
				  }
			  break;
			  
	  case 5: printf("\nDigite nome do paciente a ser excluido: ");
			scanf("%s%*c", pac_aux);
			for (i=0; i<strlen(pac_aux); i++)
			    pac_aux[i] = toupper(pac_aux[i]);
			i=0;
			while ((strcmp(pacientes[i].nome, pac_aux)!=0) && (i<cont_p))
				i++;
			if (i==cont_p)
			   { printf("\nPaciente nao cadastrado!");
				 getchar();
			   }
			else
				 { for (j=i;j<cont_p-1;j++)
					 { pacientes[j]=pacientes[j+1];
					 }
				   i=0;
				   while ((strcmp(pac_cres[i].nome, pac_aux)!=0) && (i<cont_p))
				  	     i++;
				   if (i==cont_p)
					  { printf("\nPaciente nao cadastrado!");
					    getchar();
					  }
				   else
					  { for (j=i;j<cont_p-1;j++)
						    { pac_cres[j]=pac_cres[j+1];
						    }
				  	  }
				   i=0;
				   while ((strcmp(pac_decres[i].nome, pac_aux)!=0) && (i<cont_p))
					      i++;
				   if (i==cont_p)
					  { printf("\nPaciente nao cadastrado!");
					    getchar();
					  }
				   else
					  { for (j=i;j<cont_p-1;j++)
						    { pac_decres[j]=pac_decres[j+1];
						    }
					  }
				   cont_p--;
			    }
		      break;
	
      case 6: printf("\nDigite o nome do medico: ");
			  scanf("%s%*c", med_aux);
			  for (i=0; i<strlen(med_aux); i++)
			      med_aux[i] = toupper(med_aux[i]);
			  i=0;
			  cont=cont_p;
			  while (i<cont)
				{ if (strcmp(pacientes[i].nome_med, med_aux)==0)
					 { for (j=i;j<cont-1;j++)
						 { pacientes[j]=pacientes[j+1];
						 }
					   cont--;
					 }
				  else
					i++;
				}
			  i=0;
			  cont=cont_p;
			  while (i<cont)
				{ if (strcmp(pac_cres[i].nome_med, med_aux)==0)
					 { for (j=i;j<cont-1;j++)
						 { pac_cres[j]=pac_cres[j+1];
						 }
					   cont--;
					 }
				  else
					i++;
				}
			  i=0;
			  cont=cont_p;
			  while (i<cont)
				    { if (strcmp(pac_decres[i].nome_med, med_aux)==0)
		                 { for (j=i;j<cont-1;j++)
						       { pac_decres[j]=pac_decres[j+1];
						       }
					       cont--;
					     }
				      else
					     i++;
				    }
			cont_p = cont;
		}//fim switch
	 } while (op!=7);
  return 0;
} //fim main
