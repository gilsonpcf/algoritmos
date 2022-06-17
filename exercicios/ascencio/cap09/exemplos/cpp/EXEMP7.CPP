#include <stdio.h>
#include <string.h>
int main()
{
 // A variável texto1 recebe a cadeia de
 // caracteres: Programa de computador
 char texto1[]="Programa de computador";
 // A variável texto2 recebe a cadeia de
 // caracteres: de
 char texto2[]="de";
 int posi;
 // A função strstr verifica a partir de qual posição
 // a cadeia armazenada na variável texto2
 // aparece na cadeia armazenada na variável texto1
 // A variável posi recebe a posição
 posi=strstr(texto1,texto2) - texto1;
 //Mostra o conteúdo da variável posi
 printf("\nPosição = %d",posi);
 getchar();
 return 0;
}















