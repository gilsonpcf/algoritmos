#include <string.h>
#include <stdio.h>
int main()
 {
	// A variável TEXTO1 recebe a cadeia de caracteres: PROGRAMA
	char TEXTO1[]="PROGRAMA";
	// A variável TEXTO2 recebe a cadeia de caracteres: PROGRAMA
	char TEXTO2[]="PROGRAMA";
	// A variável TEXTO3 recebe a cadeia de caracteres: PROGRAMA
	char TEXTO3[]="PROGRAMA";
	// A função strrev inverte os caracteres da cadeia TEXTO1
	strrev(TEXTO1);
	// Mostra o conteúdo da variável TEXTO1
	printf("\nNova cadeia TEXTO1 = %s",TEXTO1);
	// A função strset altera todos os caracteres da cadeia TEXTO2
	// para o caractere ?
	strset(TEXTO2,'?');
	// Mostra o conteúdo da variável TEXTO2
	printf("\nNova cadeia TEXTO2 = %s",TEXTO2);
	// A função strnset altera os 3 primeiros caracteres da cadeia
	// TEXTO3 para o caractere ?
	strnset(TEXTO3,'?',3);
	// Mostra o conteúdo da variável TEXTO3
	printf("\nNova cadeia TEXTO3 = %s",TEXTO3);
	getchar();
	return 0;
 }


















