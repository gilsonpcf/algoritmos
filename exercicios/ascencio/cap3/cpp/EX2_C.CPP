#include <stdio.h>
int main()
{ float nota1, nota2, nota3, media;
  //Mostra mensagem antes da leitura da 1ª nota
   printf("Digite a primeira nota: ");
   // Recebe a 1ª nota
   scanf("%f%*c",&nota1);
   //Mostra mensagem antes da leitura da 2ª nota
   printf("Digite a segunda nota: ");
   // Recebe a 2ª nota
   scanf("%f%*c",&nota2);
   //Mostra mensagem antes da leitura da 3ª nota
   printf("Digite a terceira nota: ");
   // Recebe a 3ª nota
   scanf("%f%*c",&nota3);
   // Calcula a média
   media = (nota1 + nota2 + nota3)/3;
   // Mostra o resultado da média 
   // Com no mínimo 4 caracteres e destes 2 caracteres para as casas decimais
   printf("Média = %4.2f\n",media);
   // Pára o programa a espera de um ENTER
   getchar();
   return 0;
}


