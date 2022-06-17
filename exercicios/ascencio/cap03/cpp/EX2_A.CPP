#include <stdio.h>
int main()
{ float nota1, nota2, nota3, media;
  // Recebe as três notas
  scanf("%f%*c",&nota1);
  scanf("%f%*c",&nota2);
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
