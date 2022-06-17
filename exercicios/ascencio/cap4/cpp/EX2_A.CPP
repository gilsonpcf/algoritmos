#include <stdio.h>
int main()
{float nota1, nota2, nota3, media, nota_exame;
 //Mostra mensagem solicitando a primeira nota
 printf("\nDigite a primeira nota: ");
 //Recebe o valor da primeira nota
 scanf("%f%*c",&nota1);
 //Mostra mensagem solicitando a segunda nota
 printf("\nDigite a segunda nota: ");
 //Recebe o valor da segunda nota
 scanf("%f%*c",&nota2);
 //Mostra mensagem solicitando a terceira nota
 printf("\nDigite a terceira nota: ");
 //Recebe o valor da terceira nota
 scanf("%f%*c",&nota3);
 //Calcula média aritmética
 media = (nota1 + nota2 + nota3) / 3;
 //Mostra a média obtida
 printf("\nMédia aritmética: %5.2f",media);
 //Mostra situa‡ao equivalente à média obtida
 if (media >= 0 && media < 3)
	 printf("\nReprovado");
 if (media >= 3 && media < 7)
	 {
		 printf("\nExame ");
		 nota_exame = 12 - media;
		 printf("\nDeve tirar nota %5.2f para ser aprovado",nota_exame);
	 }
 if (media >= 7 && media < 10)
	 printf("\nAprovado");
 //Pára o programa a espera de um ENTER
 getchar();
}
