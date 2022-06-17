#include <string.h>
#include <stdio.h>
int main()
	{
	// A variável texto1 é inicializada com a cadeia
	// de caracteres PROGRAMA COMPUTADOR
	char texto1[]="PROGRAMA COMPUTADOR";
	// A variável texto2 é inicializada com a cadeia
	// de caracteres PARA
	char texto2[]="PARA ";
	char texto3[35];
	// A linha abaixo inicializa a variável texto3
	// com vazio, ou seja, uma cadeia com tamanho zero
	texto3[0]='\0';
	int achou,i,j,tam, k;
	// A função strlen retorna o tamanho da cadeia armazenada
	// na variável texto1
	tam= strlen(texto1);
	// A estrutura de repetição abaixo encontra a posição
	// do espaço, para colocar a cadeia armazenada na variável
	// texto2, dentro da cadeia da variável texto1, gerando a
	// cadeia texto3
	// A posição do primeiro espaço será armazenada na variável i
	i = 0;
	achou = 0;
	while (i < tam && achou == 0)
	{
	 if (texto1[i] == ' ')
		achou = 1;
	 else
		i++;
	}
	// A função strncpy copia da cadeia texto1, para a cadeia
	// texto3 a quantidade de caracteres existentes antes do
	// primeiro espaço em branco
	strncpy(texto3,texto1,i+1);
	// A linha abaixo inclui \0 na cadeia TEXTO3
	// para finalizar a cadeia que está sendo gerada
	texto3[i+1]='\0';
	// Na cadeia de caracteres texto3 será acrescentada,
	// ou seja, concatenada,
	// a cadeia "PARA " que está na variável texto2
	strcat(texto3,texto2);
	// A linha abaixo concatena o \0 para finalizar
	// a cadeia que está sendo gerada
	strcat(texto3,"\0");
	// A variável j receberá a próxima posição a ser ocupada
	// no vetor que representa a cadeia de caracteres que está
	// sendo gerada
	// Neste exemplo, até este ponto, a variável texto3 contém os
	// seguintes caracteres: "PROGRAMA PARA "
	j = strlen(texto3);
	// A estrutura de repetição abaixo copia os caracteres
	// após o espaço em branco da cadeia armazenada na variável
	// texto1 para a cadeia armazenada na variável texto3
	for (k=i+1;k<tam;k++)
	 {
	 texto3[j] = texto1[k];
	 j = j + 1;
	 }
	// A linha abaixo acrescenta o \0 para finalizar a
	// cadeia que está sendo gerada
	texto3[j]='\0';
	// A linha abaixo mostra a nova cadeia gerada
	printf("\nNova cadeia de caracteres = %s",texto3);
	getchar();
	return 0;
}














