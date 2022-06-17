#include <stdio.h>
int main()
{ float salario, aumento, novo_sal;
  int cargo;
  //Mostra mensagem solicitando o cargo (os valores podem ser 1,2,3,4 ou 5)
  printf("\nDigite o cargo do funcionário (1,2,3,4 ou 5): ");
  //Recebe o valor do cargo
  scanf("%d%*c",&cargo);
  //Mostra mensagem solicitando o valor do salário
  printf("\nDigite o valor do salário: ");
  //Recebe valor do salário
  scanf("%f%*c",&salario);
  // Dependendo do cargo informado, apresenta o nome do cargo, valor do
  // aumento e novo salário
  // Caso seja digitado um cargo inexistente, mostra-se a mensagem
  // Cargo Inexistente
 if (cargo == 1)
		{   printf("\nO cargo é Escriturário");
			aumento = salario * 50 / 100;
			printf("\nO valor do aumento %5.2f",aumento);
			novo_sal = salario + aumento;
			printf("\nO novo salário é: %5.2f",novo_sal);
		}
 else if (cargo == 2)
			{   printf("\nO cargo é Secretário");
				aumento = salario * 35 / 100;
			    printf("\nO valor do aumento %5.2f",aumento);
                novo_sal = salario + aumento;
			    printf("\nO novo salário é: %5.2f",novo_sal);
			}
			else if (cargo == 3)
						{   printf("\nO cargo é Caixa");
							aumento = salario * 20 / 100;
			                printf("\nO valor do aumento %5.2f",aumento);
                            novo_sal = salario + aumento;
                   			printf("\nO novo salário é: %5.2f",novo_sal);
						}
					 else if (cargo == 4)
								{   printf("\nO cargo é Gerente");
									aumento = salario * 10 / 100;
			                        printf("\nO valor do aumento %5.2f",aumento);
                                    novo_sal = salario + aumento;
                                    printf("\nO novo salário é: %5.2f",novo_sal);

								}
							 else if (cargo == 5)
										{   printf("\nO cargo é Diretor");
											aumento = salario * 0 / 100;
			                                printf("\nO valor do aumento %5.2f",aumento);
                                   			novo_sal = salario + aumento;
                                      		printf("\nO novo salário é: %5.2f",novo_sal);
										}
									 else printf("\nCargo Inexistente !");
	// Pára o programa a espera de um enter
	getchar();
	return 0;
}
