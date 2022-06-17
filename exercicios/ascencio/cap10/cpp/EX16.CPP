    #include <stdio.h>
    #include <string.h>
    
    int main()
    {   struct
    		{ int num_insc, idade, pontos, cod_curso;
    		} cand[6][40];
    	int cont[6], i, j, k, insc_aux, idade_aux, pontos_aux, curso_aux;
    	for (i=0;i<6;i++)
    		 cont[i] = 39;
    	printf("\nDigite o codigo da inscricao: ");
    	scanf("%d%*c", &insc_aux);
    	while (insc_aux > 0)
    		{ printf("Digite a idade do candidato: ");
    		  scanf("%d%*c", &idade_aux);
    			do {
    					printf("Digite a pontuacao alcancada pelo candidato: ");
    					scanf("%d%*c", &pontos_aux);
    			} while ((pontos_aux < 0) || (pontos_aux > 5000));
    			do {
    					printf("Digite o codigo do curso desejado pelo candidato: ");
    					scanf("%d%*c", &curso_aux);
    			} while ((curso_aux < 1) || (curso_aux > 6));
    			i = curso_aux - 1;
    			if (cont[i]==39)
    				{   cand[i][39].num_insc = insc_aux;
    					cand[i][39].idade = idade_aux;
    					cand[i][39].pontos = pontos_aux;
    					cand[i][39].cod_curso = curso_aux;
    					cont[i]--;
    				}
    			else
    				{ j=39;
    					while ((cand[i][j].pontos > pontos_aux) && (j>cont[i]))
    						j--;
    					if (j>=cont[i])
    						{ while ((cand[i][j].pontos == pontos_aux) && (cand[i][j].idade > idade_aux) && (j>cont[i]))
    							 j--;
    							if (j>=cont[i])
    								 { for (k=1;k<=j;k++)
    									{ cand[i][k-1] = cand[i][k];
    									}
    								   cand[i][j].num_insc = insc_aux;
    								   cand[i][j].idade = idade_aux;
    								   cand[i][j].pontos = pontos_aux;
    								   cand[i][j].cod_curso = curso_aux;
    								   cont[i]--;
    								}
    						}
    				}
    		printf("\nDigite o codigo da inscricao: ");
    		scanf("%d%*c", &insc_aux);
    	 }
    	for (i=0;i<6;i++)
    	 { printf("\nLista de aprovados no curso %d \n", i+1);
    		 for (j=39;j>cont[i];j--)
    				{   printf("\nNumero de inscricao: %d", cand[i][j].num_insc);
    					printf("\nIdade: %d", cand[i][j].idade);
    					printf("\nPontos alcancados: %d", cand[i][j].pontos);
    					printf("\nCodigo curso: %d", cand[i][j].cod_curso);
    					printf("\n\t\t\tTecle enter ...");
    					getchar();
    				}
    	 }
        return 0;
    }
