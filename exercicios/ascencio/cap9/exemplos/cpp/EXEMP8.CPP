#include <string.h>
#include <stdio.h>
int main()
 {
	// A variável texto1 é inicializada com a cadeia
	// de caracteres PROGRAMA DE COMPUTADOR
	char texto1[]="PROGRAMA DE COMPUTADOR";
	// A variável texto2 é inicializada com a cadeia
	// de caracteres "DE "
	char texto2[]="DE ";
	int posi,i,j,tam;
	char texto3[25];
	// A variável posi recebe a posição a partir
	// da qual a cadeia da variável texto2 aparece
	// dentro da cadeia texto1
	posi=strstr(texto1,texto2) - texto1;
	// A função strlen retorna o tamanho da cadeia armazenada
	// na variável texto1
	tam= strlen(texto1);
	// A estrutura de repetição abaixo copia da cadeia armazenada
	// na variável texto1 para a variável texto3, os caracteres
	// das posições de 0 até a posição anterior ao início da
	// cadeia "DE ", dentro da cadeia armazenada na variável texto1
	for (i=0;i<posi;i++)
	 texto3[i] = texto1[i];
	// Neste exemplo, até este ponto, a variável texto3
	// contém os seguintes caracteres: "PROGRAMA "
	// A variável j receberá a próxima posição a ser ocupada
	// no vetor que representa a cadeia de caracteres
	// que está sendo gerada
	j = i;
	// A estrutura de repetição abaixo continua copiando os
	// caracteres da cadeia armazenada na variável texto1 para a
	// cadeia armazenada na variável texto3
	// Neste caso, serão copiados os caracteres que estão nas
	// posições após o início da cadeia da variável texto2
	for (i=posi+strlen(texto2);i<=tam-1;i++)
	 {
	 texto3[j] = texto1[i];
	 j = j + 1;
	 }
	// Mostra o conteúdo da cadeia gerada
	printf("\nCadeia gerada = %s",texto3);
	getchar();
	return 0;
 }















