#include <stdio.h>
int main()
{ float nota1, nota2, nota3, media;
  //Mostra mensagem antes da leitura da 1� nota
   printf("Digite a primeira nota: ");
   // Recebe a 1� nota
   scanf("%f%*c",&nota1);
   //Mostra mensagem antes da leitura da 2� nota
   printf("Digite a segunda nota: ");
   // Recebe a 2� nota
   scanf("%f%*c",&nota2);
   //Mostra mensagem antes da leitura da 3� nota
   printf("Digite a terceira nota: ");
   // Recebe a 3� nota
   scanf("%f%*c",&nota3);
   // Calcula a m�dia
   media = (nota1 + nota2 + nota3)/3;
   // Mostra o resultado da m�dia 
   // Com no m�nimo 4 caracteres e destes 2 caracteres para as casas decimais
   printf("M�dia = %4.2f\n",media);
   // P�ra o programa a espera de um ENTER
   getchar();
   return 0;
}


