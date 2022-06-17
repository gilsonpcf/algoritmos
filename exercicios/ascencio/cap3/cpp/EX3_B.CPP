#include <stdio.h>
int main()
{ float nota1, nota2, nota3, peso1, peso2, peso3, soma1, soma2, soma3, total, media;
  //Mostra mensagem antes da leitura das notas
  printf("\nDigite as três notas\n");
  // Recebe as três notas
  scanf("%f %f %f%*c",&nota1,&nota2,&nota3);
  //Mostra mensagem antes da leitura dos pesos
  printf("\nDigite os três pesos\n");
  // Recebe os três pesos
  scanf("%f %f %f%*c",&peso1,&peso2,&peso3);
  soma1 = nota1 * peso1;
  soma2 = nota2 * peso2;
  soma3 = nota3 * peso3; 
  total = peso1 + peso2 + peso3;
  // Calcula a média
  media = (soma1 + soma2 + soma3)/total;
  // Mostra o resultado da média
  // Formatando a saída para mostrar no mínimo 4 caracteres 
  // e destes, 2 caracteres para a parte decimal
  printf("%4.2f\n",media);
  // Pára o programa a espera de uma tecla
  getchar();
  return 0;
}
