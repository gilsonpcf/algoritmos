#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main()
 {
	// A vari�vel texto1 � inicializada com a cadeia
	// de caracteres programa computador
	char texto1[]="programa de computador";
	// A fun��o toupper converte um caractere, de uma
	// posi��o espec�fica para mai�sculo
	texto1[0]=toupper(texto1[0]);
	// A linha abaixo mostra a nova cadeia gerada
	printf("\nNova cadeia de caracteres = %s",texto1);
	// A fun��o strupr converte toda a cadeia para mai�sculo
	strupr(texto1);
	// A linha abaixo mostra a nova cadeia gerada
	printf("\nNova cadeia de caracteres = %s",texto1);
	getchar();
	return 0;
 }




















