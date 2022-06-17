#include <string.h>
#include <stdio.h>

int main()
{ struct
     { int reg, cod_titulo, total_semanal;
       char nome[30];
     } prof[14];
  struct
     { int cod_titulo;
       float valor;
       char desc[15];
     } titulo[5];
  int i, j, achou, cont, lin;
  float total_geral;
  for (i=0;i<14;i++)
    { prof[i].reg = 0;
      prof[i].cod_titulo = 0;
      prof[i].total_semanal = 0;
      strcpy(prof[i].nome,"\0");
    }
  for (j=0;j<5;j++)
    { titulo[j].cod_titulo = 0;
      titulo[j].valor = 0;
      strcpy(titulo[j].desc,"\0");
    }
  cont=0;
  printf("\nCadastrando os 5 titulos");
  for (j=0;j<5;j++)
    { do
       { printf("\nDigite o codigo do %d.o titulo ", j+1);
	     scanf("%d%*c", &titulo[j].cod_titulo);
 		 achou = 0;
         for (i=0;i<cont;i++)
		 { if (titulo[i].cod_titulo == titulo[j].cod_titulo)
				achou=1;
		 }
		 if (achou == 1)
			 printf("\nCodigo ja cadastrado ");
        } while (achou == 1);
	  printf("Digite a descricao do %d.o titulo ", j+1);
	  scanf("%s%*c", titulo[j].desc);
	  printf("Digite o valor da hora aula do %d.o titulo ", j+1);
	  scanf("%f%*c", &titulo[j].valor);
	  cont++;
	}
  cont=0;
  printf("\nCadastrando os 14 professores");
  for (i=0;i<14;i++)
    { do
        { printf("\nDigite o registro do %d.o professor ", i+1);
		  scanf("%d%*c", &prof[i].reg);
	      achou = 0;
		  for (j=0;j<cont;j++)
			 { if (prof[j].reg == prof[i].reg)
					achou=1;
			 }
		 if (achou == 1)
			printf("\nCodigo ja cadastrado ");
		} while (achou == 1);
	  printf("Digite o titulo do %d professor ", i+1);
	  scanf("%d%*c", &prof[i].cod_titulo);
	  achou = 0;
	  while (achou == 0)
		{ for (j=0;j<5;j++)
			{ if (titulo[j].cod_titulo == prof[i].cod_titulo)
				 achou = 1;
			}
	      if (achou == 0)
			 { printf("\nTitulo nao cadastrado. Digite novo titulo ");
		       scanf("%d%*c", &prof[i].cod_titulo);
			 }
		}
	  printf("Digite a carga horaria semanal do %d.o professor ", i+1);
	  scanf("%d%*c", &prof[i].total_semanal);
      printf("Digite o nome do %d.o professor ", i+1);
      scanf("%s%*c", prof[i].nome);
	  cont++;
	}

   printf("\nMostrando a relacao de professores ");
   printf("\n\nReg                           Nome          Titulo Valor HA CH Sem.   T.Semanal");
   for (i=0;i<14;i++)
	 {
		 printf("\n%3d ", prof[i].reg);
		 printf("%30s ", prof[i].nome);
		 for (j=0;j<5;j++)
			 { if (prof[i].cod_titulo == titulo[j].cod_titulo)
						{ printf("%15s ", titulo[j].desc);
							printf("%8.2f ", titulo[j].valor);
							total_geral = titulo[j].valor * prof[i].total_semanal;
						}
			 }
		 printf("%7d  ", prof[i].total_semanal);
		 printf("%10.2f", total_geral);
	}
 getchar();
 return 0;
}
