#include <stdio.h>
#include <string.h>
int main()
{
    char cadeia_digitada[25],cadeia_copiada[25];
    printf("Digite uma cadeia de caracteres: ");
    // A cadeia de caracteres digitada ser�
    // armazenada na vari�vel cadeia_digitada
    gets(cadeia_digitada);
    // A fun��o strcpy copia a cadeia de caracteres da vari�vel
    // cadeia_digitada para a vari�vel cadeia_copiada
    strcpy(cadeia_copiada,cadeia_digitada);
    // Mostra o conte�do da vari�vel cadeia_digitada
    printf("\nCadeia digitada = %s",cadeia_digitada);
    //Mostra o conte�do da vari�vel cadeia_copiada
    printf("\nCadeia copiada =  %s",cadeia_copiada);
    getchar();
    return 0;
}












