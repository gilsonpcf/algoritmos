#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main()
 {
	// A variével texto1 é inicializada com a cadeia
	// de caracteres PROGRAMA DE COMPUTADOR
	char texto1[]="PROGRAMA DE COMPUTADOR";
	// A função tolower converte um caractere, de uma
	// posição específica para minúsculo
	texto1[0]=tolower(texto1[0]);
	// A linha abaixo mostra a nova cadeia gerada
	printf("\nNova cadeia de caracteres = %s",texto1);
	// A função strlwr converte toda a cadeia para minúsculo
	strlwr(texto1);
	// A linha abaixo mostra a nova cadeia gerada
	printf("\nNova cadeia de caracteres = %s",texto1);
	getchar();
	return 0;
 }





















