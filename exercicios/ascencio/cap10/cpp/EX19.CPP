#include <string.h>
#include <stdio.h>
int main()
{ struct
      { int cod, qtd_est, est_min;
        char descr[30];
	    float p_compra, p_venda;
      } brinquedos[40];
  int i, cont_b, op, cod_aux, achou;
  float lucro, perc;
  cont_b = 0;
  do
   {printf("\n1-Cadastrar brinquedo");
	printf("\n2-Mostrar lucro");
	printf("\n3-Mostrar produtos com estoque abaixo do estoque minimo");
	printf("\n4-Finalizar");
	printf("\nDigite sua opcao ");
	scanf("%d%*c", &op);
	switch (op)
	{ case 1:if (cont_b == 40)
				{ printf("Ja foram cadastrados os 40 brinquedos!");
				  getchar();
				}
			 else
				{ printf("\nDigite o codigo do brinquedo: ");
				  scanf("%d%*c", &cod_aux);
				  i=0;
				  while ((i<cont_b) && (brinquedos[i].cod != cod_aux))
					i++;
				  if (i < cont_b)
				   { printf("\nJa existe brinquedo com este codigo!");
				     getchar();
				   }
				  else
				    { brinquedos[cont_b].cod = cod_aux;
				      printf("Digite a descricao do brinquedo: ");
				      scanf("%s%*c", brinquedos[cont_b].descr);
				      printf("Digite a quantidade em estoque: ");
				      scanf("%d%*c", &brinquedos[cont_b].qtd_est);
				      printf("Digite o estoque minimo aceitavel: ");
				      scanf("%d%*c", &brinquedos[cont_b].est_min);
				      printf("Digite o preco de compra: ");
				      scanf("%f%*c", &brinquedos[cont_b].p_compra);
				      printf("Digite o preco de venda: ");
				      scanf("%f%*c", &brinquedos[cont_b].p_venda);
				      cont_b++;
				      printf("\nBrinquedo cadastrado com sucesso");
				      getchar();
				    }
			    }
		     break;
	  case 2:   printf("\nDigite o codigo do brinquedo: ");
			    scanf("%d%*c", &cod_aux);
			    i=0;
				while ((i<cont_b) && (brinquedos[i].cod!=cod_aux))
				 i++;
				if (i<cont_b)
				 {   lucro = brinquedos[i].p_venda - brinquedos[i].p_compra;
					 perc = lucro / brinquedos[i].p_compra * 100;
					 printf("\nPreco de compra: %8.2f Preco de venda: %8.2f", brinquedos[i].p_compra, brinquedos[i].p_venda);
					 printf("\nO lucro o obtido com a venda: %8.2f", lucro);
					 printf("\nEste valor corresponde a %6.2f%%", perc);
					 getchar();
				 }
			 else
				{ printf("\nBrinquedo nao cadastrado!");
				  getchar();
				}
			 break;
	  case 3: achou = 0;
			  for (i=0;i<cont_b;i++)
				{ if (brinquedos[i].qtd_est < brinquedos[i].est_min)
					 { printf("\n\nCodigo: %d", brinquedos[i].cod);
					   printf("\nDescricao: %s", brinquedos[i].descr);
					   printf("\nQuantidade em estoque: %d", brinquedos[i].qtd_est);
					   printf("\nEstoque minimo permitido: %d", brinquedos[i].est_min);
					   printf("\n\t\t\t\tTecle enter ...");
					   getchar();
					   achou = 1;
				    }
				}
			if (achou == 0)
			 { printf("\nNao existe produto com estoque abaixo do minimo");
			   getchar();
			 }
		} // fim switch
 } while (op != 4);
 return 0;
} // fim main
