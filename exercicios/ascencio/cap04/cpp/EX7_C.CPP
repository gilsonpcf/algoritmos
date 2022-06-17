#include <stdio.h>
int main()
{ float A,B,C;
  int I;
  //Mostra mensagem solicitando um valor para A
  printf("\nDigite um valor para A: ");
  //Recebe o valor de A
  scanf("%f%*c",&A);
  //Mostra mensagem solicitando um valor para B
  printf("\nDigite um valor para B: ");
  //Recebe o valor de B
  scanf("%f%*c",&B);
  //Mostra mensagem solicitando um valor para C
  printf("\nDigite um valor para C: ");
  //Recebe o valor de C
  scanf("%f%*c",&C);
  //Mostra mensagem solicitando um valor para I
  printf("\nDigite um valor para I (1, 2 ou 3): ");
  //Recebe o valor de I
  scanf("%d%*c",&I);
 //Avalia o valor de I para decidir qual CASE será executado
 switch(I)
	 {
		 case 1:
		 if (A<B && A<C)
		 {
			 if (B<C)
				printf("\nA ordem crescente dos números é: %5.2f - %5.2f - %5.2f",A,B,C);
			 else
				printf("\nA ordem crescente dos números é: %5.2f - %5.2f - %5.2f",A,C,B);
		 }
		if (B<A && B<C)
		 {
			 if (A<C)
				printf("\nA ordem crescente dos números é: %5.2f - %5.2f - %5.2f",B,A,C);
			 else
				printf("\nA ordem crescente dos números é: %5.2f - %5.2f - %5.2f",B,C,A);
		 }
		if (C<A && C<B)
		 {
			 if (A<B)
				printf("\nA ordem crescente dos números é: %5.2f - %5.2f - %5.2f",C,A,B);
			 else
				printf("\nA ordem crescente dos números é: %5.2f - %5.2f - %5.2f",C,B,A);
		 }
		 break;
		 case 2:
		 if (A>B && A>C)
		 {
			 if (B>C)
				printf("\nA ordem decrescente dos números é: %5.2f - %5.2f - %5.2f",A,B,C);
			 else
				printf("\nA ordem decrescente dos números é: %5.2f - %5.2f - %5.2f",A,C,B);
		 }
		 if (B>A && B>C)
		 {
			 if (A>C)
				printf("\nA ordem decrescente dos números é: %5.2f - %5.2f - %5.2f",B,A,C);
			 else
				printf("\nA ordem decrescente dos números é: %5.2f - %5.2f - %5.2f",B,C,A);
		 }
		if (C>A && C>B)
		{
			 if (A>B)
				printf("\nA ordem decrescente dos números é: %5.2f - %5.2f - %5.2f",C,A,B);
			 else
				printf("\nA ordem decrescente dos números é: %5.2f - %5.2f - %5.2f",C,B,A);
		 }
		break;
		case 3:
		if (A>B && A>C)
			 printf("\nA ordem desejada é: %5.2f - %5.2f - %5.2f",B,A,C);
		if (B>A && B>C)
			 printf("\nA ordem desejada é: %5.2f - %5.2f - %5.2f",A,B,C);
		if (C>A && C>B)
			 printf("\nA ordem desejada é: %5.2f - %5.2f - %5.2f",A,C,B);
	 }
 //Pára o programa a espera de um ENTER
 getchar();
 return 0;
}
