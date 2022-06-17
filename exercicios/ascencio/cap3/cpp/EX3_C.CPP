#include <stdio.h>
int main()
{ float nota1, nota2, nota3, peso1, peso2, peso3, soma1, soma2, soma3, total, media;
  // Mostra mensagem antes da leitura da 1ª nota
  printf("Digite a 1ª nota: ");
  // Recebe a 1ª nota
  scanf("%f%*c", &nota1);
  // Mostra mensagem antes da leitura do peso da 1ª nota
  printf("Digite o peso da 1ª nota: ");
  // Recebe o peso da 1ª nota
  scanf("%f%*c", &peso1);
  // Mostra mensagem antes da leitura da 2ª nota
  printf("Digite a 2ª nota: ");
  // Recebe a 2ª nota
  scanf("%f%*c", &nota2);
  // Mostra mensagem antes da leitura do peso da 2ª nota
  printf("Digite o peso da 2ª nota: ");
  // Recebe o peso da 2ª nota
  scanf("%f%*c", &peso2);
  // Mostra mensagem antes da leitura da 3ª nota
  printf("Digite a 3ª nota: ");
  // Recebe a 3ª nota
  scanf("%f%*c", &nota3);
  // Mostra mensagem antes da leitura do peso da 3ª nota
  printf("Digite o peso da 3ª nota: ");
  // Recebe o peso da 3ª nota
  scanf("%f%*c", &peso3);
  soma1 = nota1 * peso1;
  soma2 = nota2 * peso2;
  soma3 = nota3 * peso3; 
  total = peso1 + peso2 + peso3;
  // Calcula a média
  media = (soma1 + soma2 + soma3)/total;
  // Mostra o resultado da média
  // Formatando a saída para mostrar no mínimo 4 caracteres 
  // e destes, 2 caracteres para a parte decimal
  printf("Média = %4.2f\n",media);
  // Pára o programa a espera de uma tecla
  getchar();
  return 0;
}

