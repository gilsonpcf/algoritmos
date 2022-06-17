#include <string.h>
#include <stdio.h>
int main()
 {
	// Este exemplo troca todas as vogais da cadeia
	// TEXTO1 pelo caractere ?
	// A variável TEXTO1 recebe a cadeia de caracteres:
	// PROGRAMA DE COMPUTADOR
	char TEXTO1[]="PROGRAMA DE COMPUTADOR";
	int TAMANHO, I;
	// A função strlen retorna o tamanho da cadeia TEXTO1
	TAMANHO=strlen(TEXTO1);
	// A estrutura de repetição abaixo passa por todos os
	// caracteres da cadeia TEXTO1
	// Cada caractere vogal é substituído pelo caractere ?
	for (I=0;I<TAMANHO;I++)
	{
	if (TEXTO1[I] == 'A' || TEXTO1[I] == 'E'
				|| TEXTO1[I] == 'I' || TEXTO1[I] == 'O'
				|| TEXTO1[I] == 'U')
	TEXTO1[I]='?';
	}
	// Mostra o conteúdo da variável TEXTO1
	printf("\nNova cadeia TEXTO1 = %s",TEXTO1);
	getchar();
	return 0;
 }

















