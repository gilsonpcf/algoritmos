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
  // Avalia o valor da vari�vel cargo para decidir qual CASE ser� executado
 switch(cargo)
	 {
		 case 1:
			 printf("\nO cargo � Escritur�rio");
			 aumento = salario * 50 / 100;
			 printf("\nO valor do aumento %5.2f",aumento);
			 novo_sal = salario + aumento;
			 printf("\nO novo sal�rio �: %5.2f",novo_sal);
			 break;
		 case 2:
			 printf("\nO cargo � Secret�rio");
			 aumento = salario * 35 / 100;
			 printf("\nO valor do aumento %5.2f",aumento);
             novo_sal = salario + aumento;
			 printf("\nO novo sal�rio �: %5.2f",novo_sal);
			 break;
		 case 3:
			 printf("\nO cargo � Caixa");
			 aumento = salario * 20 / 100;
	         printf("\nO valor do aumento %5.2f",aumento);
             novo_sal = salario + aumento;
       		 printf("\nO novo sal�rio �: %5.2f",novo_sal);
			 break;
		 case 4:
			 printf("\nO cargo � Gerente");
			 aumento = salario * 10 / 100;
			 printf("\nO valor do aumento %5.2f",aumento);
             novo_sal = salario + aumento;
             printf("\nO novo sal�rio �: %5.2f",novo_sal);
			 break;
		 case 5:
			 printf("\nO cargo � Diretor");
			 aumento = salario * 0 / 100;
             printf("\nO valor do aumento %5.2f",aumento);
   			 novo_sal = salario + aumento;
       		 printf("\nO novo sal�rio �: %5.2f",novo_sal);
			 break;
		 default:
			 printf("\nCargo inv�lido !");
	}
  //P�ra o programa a espera de um ENTER
  getchar();
  return 0;
}
