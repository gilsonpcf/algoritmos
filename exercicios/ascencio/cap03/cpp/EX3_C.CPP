#include <stdio.h>
int main()
{ float nota1, nota2, nota3, peso1, peso2, peso3, soma1, soma2, soma3, total, media;
  // Mostra mensagem antes da leitura da 1� nota
  printf("Digite a 1� nota: ");
  // Recebe a 1� nota
  scanf("%f%*c", &nota1);
  // Mostra mensagem antes da leitura do peso da 1� nota
  printf("Digite o peso da 1� nota: ");
  // Recebe o peso da 1� nota
  scanf("%f%*c", &peso1);
  // Mostra mensagem antes da leitura da 2� nota
  printf("Digite a 2� nota: ");
  // Recebe a 2� nota
  scanf("%f%*c", &nota2);
  // Mostra mensagem antes da leitura do peso da 2� nota
  printf("Digite o peso da 2� nota: ");
  // Recebe o peso da 2� nota
  scanf("%f%*c", &peso2);
  // Mostra mensagem antes da leitura da 3� nota
  printf("Digite a 3� nota: ");
  // Recebe a 3� nota
  scanf("%f%*c", &nota3);
  // Mostra mensagem antes da leitura do peso da 3� nota
  printf("Digite o peso da 3� nota: ");
  // Recebe o peso da 3� nota
  scanf("%f%*c", &peso3);
  soma1 = nota1 * peso1;
  soma2 = nota2 * peso2;
  soma3 = nota3 * peso3; 
  total = peso1 + peso2 + peso3;
  // Calcula a m�dia
  media = (soma1 + soma2 + soma3)/total;
  // Mostra o resultado da m�dia
  // Formatando a sa�da para mostrar no m�nimo 4 caracteres 
  // e destes, 2 caracteres para a parte decimal
  printf("M�dia = %4.2f\n",media);
  // P�ra o programa a espera de uma tecla
  getchar();
  return 0;
}

