#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main()
 {
	// A vari�vel texto1 � inicializada com a cadeia
	// de caracteres PROGRAMA DE COMPUTADOR
	char texto1[]="PROGRAMA DE COMPUTADOR";
	// A fun��o tolower converte um caractere, de uma
	// posi��o espec�fica para min�sculo
	texto1[0]=tolower(texto1[0]);
	// A linha abaixo mostra a nova cadeia gerada
	printf("\nNova cadeia de caracteres = %s",texto1);
	// A fun��o strlwr converte toda a cadeia para min�sculo
	strlwr(texto1);
	// A linha abaixo mostra a nova cadeia gerada
	printf("\nNova cadeia de caracteres = %s",texto1);
	getchar();
	return 0;
 }





















