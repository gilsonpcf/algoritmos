#include <stdio.h>
int main()
{ float salario, aumento, novo_sal;
  int cargo;
  //Mostra mensagem solicitando o cargo (os valores podem ser 1,2,3,4 ou 5)
  printf("\nDigite o cargo do funcion�rio (1,2,3,4 ou 5): ");
  //Recebe o valor do cargo
  scanf("%d%*c",&cargo);
  //Mostra mensagem solicitando o valor do sal�rio
  printf("\nDigite o valor do sal�rio: ");
  //Recebe valor do sal�rio
  scanf("%f%*c",&salario);
  // Dependendo do cargo informado, apresenta o nome do cargo, valor do
  // aumento e novo sal�rio
  // Caso seja digitado um cargo inexistente, mostra-se a mensagem
  // Cargo Inexistente
 if (cargo == 1)
		{   printf("\nO cargo � Escritur�rio");
			aumento = salario * 50 / 100;
			printf("\nO valor do aumento %5.2f",aumento);
			novo_sal = salario + aumento;
			printf("\nO novo sal�rio �: %5.2f",novo_sal);
		}
 else if (cargo == 2)
			{   printf("\nO cargo � Secret�rio");
				aumento = salario * 35 / 100;
			    printf("\nO valor do aumento %5.2f",aumento);
                novo_sal = salario + aumento;
			    printf("\nO novo sal�rio �: %5.2f",novo_sal);
			}
			else if (cargo == 3)
						{   printf("\nO cargo � Caixa");
							aumento = salario * 20 / 100;
			                printf("\nO valor do aumento %5.2f",aumento);
                            novo_sal = salario + aumento;
                   			printf("\nO novo sal�rio �: %5.2f",novo_sal);
						}
					 else if (cargo == 4)
								{   printf("\nO cargo � Gerente");
									aumento = salario * 10 / 100;
			                        printf("\nO valor do aumento %5.2f",aumento);
                                    novo_sal = salario + aumento;
                                    printf("\nO novo sal�rio �: %5.2f",novo_sal);

								}
							 else if (cargo == 5)
										{   printf("\nO cargo � Diretor");
											aumento = salario * 0 / 100;
			                                printf("\nO valor do aumento %5.2f",aumento);
                                   			novo_sal = salario + aumento;
                                      		printf("\nO novo sal�rio �: %5.2f",novo_sal);
										}
									 else printf("\nCargo Inexistente !");
	// P�ra o programa a espera de um enter
	getchar();
	return 0;
}
