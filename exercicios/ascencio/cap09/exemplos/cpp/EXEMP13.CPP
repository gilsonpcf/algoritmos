#include <string.h>
#include <stdio.h>
int main()
 {
	// A vari�vel TEXTO1 recebe a cadeia de caracteres: PROGRAMA
	char TEXTO1[]="PROGRAMA";
	// A vari�vel TEXTO2 recebe a cadeia de caracteres: PROGRAMA
	char TEXTO2[]="PROGRAMA";
	// A vari�vel TEXTO3 recebe a cadeia de caracteres: PROGRAMA
	char TEXTO3[]="PROGRAMA";
	// A fun��o strrev inverte os caracteres da cadeia TEXTO1
	strrev(TEXTO1);
	// Mostra o conte�do da vari�vel TEXTO1
	printf("\nNova cadeia TEXTO1 = %s",TEXTO1);
	// A fun��o strset altera todos os caracteres da cadeia TEXTO2
	// para o caractere ?
	strset(TEXTO2,'?');
	// Mostra o conte�do da vari�vel TEXTO2
	printf("\nNova cadeia TEXTO2 = %s",TEXTO2);
	// A fun��o strnset altera os 3 primeiros caracteres da cadeia
	// TEXTO3 para o caractere ?
	strnset(TEXTO3,'?',3);
	// Mostra o conte�do da vari�vel TEXTO3
	printf("\nNova cadeia TEXTO3 = %s",TEXTO3);
	getchar();
	return 0;
 }


















