#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main()
 {
	// A variável texto1 é inicializada com a cadeia
	// de caracteres programa computador
	char texto1[]="programa de computador";
	// A função toupper converte um caractere, de uma
	// posição específica para maiúsculo
	texto1[0]=toupper(texto1[0]);
	// A linha abaixo mostra a nova cadeia gerada
	printf("\nNova cadeia de caracteres = %s",texto1);
	// A função strupr converte toda a cadeia para maiúsculo
	strupr(texto1);
	// A linha abaixo mostra a nova cadeia gerada
	printf("\nNova cadeia de caracteres = %s",texto1);
	getchar();
	return 0;
 }




















