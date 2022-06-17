#include <stdio.h>
#include <string.h>
int main()
{
 char texto[50];
 int  tamanho;
 // A variável texto recebe a cadeia de
 // caracteres: LINGUAGEM DE PROGRAMAÇÂO
 // A função strcpy copia a cadeia de caracteres
 // LINGUAGEM DE PROGRAMAÇÃO para a variável texto
 strcpy(texto,"LINGUAGEM DE PROGRAMAÇÃO");
 // A variável tamanho recebe o número de caracteres da cadeia
 // armazenada na variável texto
 tamanho=strlen(texto);
 //Mostra o conteúdo da variável tamanho
 printf("\nTAMANHO DA CADEIA DE CARACTERES = %d",tamanho);
 getchar();
 return 0;
}















