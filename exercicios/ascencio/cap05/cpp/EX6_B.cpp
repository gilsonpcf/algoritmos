#include <stdio.h>
int main()
{ int cont, codigo;
  float nht, valor, sal_min, sal_inicial, aux, sal_final;
  char turno, categoria;
  sal_min = 450;
  cont = 1;
  do
  {
  	printf("\n\nDigite o código do %dº funcionário: ",cont);
	scanf("%d%*c",&codigo);
	printf("Digite o número de horas trabalhadas do %dº funcionário: ",cont);
	scanf("%f%*c",&nht);
	printf("Digite o turno de trabalho do %dº funcionário (M, V ou N): ",cont);
	scanf("%c%*c",&turno);
	while (turno !='M' && turno != 'V' && turno != 'N')
		{
			printf("\nTurno inválido, digite novamente ");
			scanf("%c%*c",&turno);
		}
	printf("Digite a categoria do %dº funcionário (G ou O): ",cont);
	scanf("%c%*c",&categoria);
	while (categoria != 'G' && categoria != 'O')
		{ 
            printf("\nCategoria inválida, digite novamente ");
			scanf("%c%*c",&categoria);
		}
	if (categoria == 'G')
		 {
			if (turno == 'N')
			 valor = sal_min * 18/100;
			else
			 valor = sal_min * 15/100;
		 }
	else
		 {
			if (turno == 'N')
			 valor = sal_min * 13/100;
			else
			 valor = sal_min * 10/100;
		 }
	 sal_inicial = nht * valor;
	 if (sal_inicial <= 300)
			aux = sal_inicial * 20/100;
	 else if (sal_inicial < 600)
					aux = sal_inicial * 15/100;
				else
				 aux = sal_inicial * 5/100;
	 sal_final = sal_inicial + aux;
	 printf("\nCódigo = %d",codigo);
	 printf("\nNúmero de horas trabalhadas = %5.2f",nht);
	 printf("\nValor do hora trabalhada = %5.2f",valor);
	 printf("\nSalário inicial = %5.2f",sal_inicial);
	 printf("\nAuxílio comida = %5.2f",aux);
	 printf("\nSalário Final = %5.2f",sal_final);
	 cont = cont +1;
  } 
  while (cont < 11);
  getchar();
  return 0;
}
