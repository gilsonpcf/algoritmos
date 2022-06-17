#include <stdio.h>
int main()
{float nota_trab, aval_sem, exame, media;
 //Mostra mensagem solicitando nota do trabalho
 printf("\nDigite a nota do trabalho em laboratório: ");
 //Recebe o valor da nota do trabalho
 scanf("%f%*c",&nota_trab);
 //Mostra mensagem solicitando nota da avaliação semestral
 printf("\nDigite a nota da avaliação semestral: ");
 //Recebe o valor da avaliação semestral
 scanf("%f%*c",&aval_sem);
 //Mostra mensagem solicitando nota do exame final
 printf( "\nDigite a nota do exame final: ");
 //Recebe o valor da nota do exame
 scanf("%f%*c",&exame);
 //Calcula a média ponderada
 media = (nota_trab * 2 + aval_sem * 3 + exame * 5) / 10;
 printf( "\nMédia ponderada: %5.2f",media);
 //Mostra o conceito obtido com a média alcançada
 if (media >=8 && media <=10)
   printf( " Obteve conceito A");
 else if (media >=7 && media < 8)
	    printf( " Obteve conceito B");
      else if (media >= 6 && media < 7)
             printf( " Obteve conceito C");
           else if (media >= 5 && media < 6)
	              printf( " Obteve conceito D");
                else 
                  printf( " Obteve conceito E");
 //Pára o programa a espera de um ENTER
 getchar();
 return 0;
}
