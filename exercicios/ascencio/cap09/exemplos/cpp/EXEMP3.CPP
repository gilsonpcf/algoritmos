#include <string.h>
#include <stdio.h>
int main()
 {
	// A variável TEXTO1 recebe a cadeia de caracteres: PROGRAMA
	char TEXTO1[]="PROGRAMA";
	// A variável TEXTO2 recebe a cadeia de caracteres: LEGAL
	// Existe um espaço no início da cadeia TEXTO2
	char TEXTO2[]=" LEGAL";
	char TEXTO3[35], TEXTO4[35];
	// A variável TEXTO5 recebe a cadeia de caracteres: DORES
	char TEXTO5[]="DORES";
	// A função abaixo copia o conteúdo da cadeia TEXTO1 para
	// a cadeia TEXTO3
	strcpy(TEXTO3,TEXTO1);
	// A função abaixo concatena as cadeias TEXTO3 e TEXTO2
	strcat(TEXTO3,TEXTO2);
	// a linha abaixo concatena a cadeia '' DEMAIS''
	// à cadeia TEXTO3
	strcat(TEXTO3," DEMAIS");
	// Existe um espaço no início da cadeia '' DEMAIS''
	// Mostra o conteúdo da variável TEXTO3
	printf("\nNova cadeia = %s",TEXTO3);
	// A função abaixo copia o conteúdo da cadeia TEXTO1 para
	// a cadeia TEXTO4
	strcpy(TEXTO4,TEXTO1);
	// A função abaixo concatena os n primeiros
	// caracteres da cadeia TEXTO5 na cadeia TEXTO4
	strncat(TEXTO4,TEXTO5, 3);
	// Mostra o conteúdo da variável TEXTO4
	printf("\nNova cadeia = %s",TEXTO4);
	getchar();
	return 0;
 }













