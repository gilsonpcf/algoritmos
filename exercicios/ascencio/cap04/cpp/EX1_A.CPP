#include <stdio.h>
int main()
{float nota_trab, aval_sem, exame, media;
 //Mostra mensagem solicitando nota do trabalho
 printf("\nDigite a nota do trabalho em laborat�rio: ");
 //Recebe o valor da nota do trabalho
 scanf("%f%*c",&nota_trab);
 //Mostra mensagem solicitando nota da avalia��o semestral
 printf("\nDigite a nota da avalia��o semestral: ");
 //Recebe o valor da avalia��o semestral
 scanf("%f%*c",&aval_sem);
 //Mostra mensagem solicitando nota do exame final
 printf( "\nDigite a nota do exame final: ");
 //Recebe o valor da nota do exame
 scanf("%f%*c",&exame);
 //Calcula a m�dia ponderada
 media = (nota_trab * 2 + aval_sem * 3 + exame * 5) / 10;
 printf( "\nM�dia ponderada: %5.2f",media);
 //Mostra o conceito obtido com a m�dia alcan�ada
 if (media >=8 && media <=10)
	 printf( " Obteve conceito A");
 if (media >=7 && media < 8)
	 printf( " Obteve conceito B");
 if (media >= 6 && media < 7)
	 printf( " Obteve conceito C");
 if (media >= 5 && media < 6)
	 printf( " Obteve conceito D");
 if (media >= 0 && media < 5)
	 printf( " Obteve conceito E");
 getchar();
 return 0;
}
