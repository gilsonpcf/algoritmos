#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{ struct
    { char nome[30], sexo;
      int idade;
      float altura, peso;
    } pac[20];
  int op, i, j, cont_p;
  float maior_peso, peso_ideal, dif;
  char nome_aux[30];
  cont_p = 0;
  do
  { printf("\n1-Cadastrar paciente");
	printf("\n2-Determinar paciente mais pesada");
	printf("\n3-Mostrar pacientes acima do peso ideal");
	printf("\n4-Mostrar pacientes abaixo do peso ideal");
	printf("\n5-Finalizar");
	printf("\nDigite sua opcao: ");
	scanf("%d%*c", &op);
	switch (op)
	 { case 1: if (cont_p < 20)
			   { printf("\nDigite o nome do paciente: ");
				 scanf("%s%*c", pac[cont_p].nome);
				 do {
					  printf("\nDigite o sexo do paciente (M ou F): ");
					  scanf("%c%*c", &pac[cont_p].sexo);
				  } while ((toupper(pac[cont_p].sexo) != 'F') && (toupper(pac[cont_p].sexo) != 'M'));
				 printf("\nDigite a idade do paciente: ");
				 scanf("%d%*c", &pac[cont_p].idade);
				 printf("\nDigite a altura do paciente (em metros): ");
				 scanf("%f%*c", &pac[cont_p].altura);
				 printf("\nDigite o peso do paciente (em Kg): ");
				 scanf("%f%*c", &pac[cont_p].peso);
				 cont_p++;
				 printf("\nPaciente cadastrado com sucesso");
				 getchar();
	           }
			   else
				 { printf("\nJa foram cadastrados 20 pacientes!");
				   getchar();
				 }
			   break;
				
       case 2: if (cont_p == 0)
			   { printf("\nNao existe paciente cadastrado");
				 getchar();
			   }
			   else
				{ for (i=0;i<cont_p;i++)
					{ if (i==0)
						{ maior_peso = pac[i].peso;
						strcpy(nome_aux,pac[i].nome);
						}
					  else
					    { if (pac[i].peso > maior_peso)
							{ maior_peso = pac[i].peso;
							  strcpy(nome_aux,pac[i].nome);
							}
						 }
					}
				  printf("\nNome do paciente mais pesado: %s", nome_aux);
				  printf("\nPeso: %6.2f", maior_peso);
				  getchar();
				}
			   break;
	   case 3: for (i=0;i<cont_p;i++)
				{ if (toupper(pac[i].sexo) == 'F')
					peso_ideal = (62.1 * pac[i].altura) - 44.7;
				  else
				  peso_ideal = (72.7 * pac[i].altura) - 58;
				  if (pac[i].peso > peso_ideal)
					{   dif = pac[i].peso - peso_ideal;
						printf("\nNome do paciente: %s", pac[i].nome);
						printf("\nSexo do paciente: %c", pac[i].sexo);
						printf("\nIdade do paciente: %d", pac[i].idade);
						printf("\nAltura do paciente (em metros): %6.2f", pac[i].altura);
						printf("\nPeso do paciente (em Kg): %6.2f", pac[i].peso);
						printf("\nPrecisa emagrecer %6.2f Kg para tingir seu peso ideal", dif);
						printf("\n\t\t\tTecle enter ... ");
						getchar();
					}
				}
		       break;
       case 4: j = 0;
			   for (i=0;i<cont_p;i++)
				{ if (toupper(pac[i].sexo) == 'F')
					 peso_ideal = (62.1 * pac[i].altura) - 44.7;
				  else
				     peso_ideal = (72.7 * pac[i].altura) - 58;
				  if (pac[i].peso < peso_ideal)
					{ j = 1;
					  dif = peso_ideal - pac[i].peso;
					  printf("\nNome do paciente: %s", pac[i].nome);
					  printf("\nSexo do paciente: %c", pac[i].sexo);
					  printf("\nIdade do paciente: %d", pac[i].idade);
					  printf("\nAltura do paciente (em metros): %6.2f", pac[i].altura);
					  printf("\nPeso do paciente (em Kg): %6.2f", pac[i].peso);
					  printf("\nPrecisa adquirir %6.2f Kg para atingir seu peso ideal", dif);
					  printf("\n\t\t\tTecle enter ... ");
					  getchar();
				 }
			 }
			if (j == 0)
			 { printf("\nNenhuma pessoa est  abaixo do peso");
			   getchar();
			 }
		} //fim switch()
	} while (op!=5);
  return 0;
} //fim main

