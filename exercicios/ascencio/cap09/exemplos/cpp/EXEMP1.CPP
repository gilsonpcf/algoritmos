#include <stdio.h>
#include <string.h>
int main()
{
    char cadeia_digitada[25],cadeia_copiada[25];
    printf("Digite uma cadeia de caracteres: ");
    // A cadeia de caracteres digitada será
    // armazenada na variável cadeia_digitada
    gets(cadeia_digitada);
    // A função strcpy copia a cadeia de caracteres da variável
    // cadeia_digitada para a variável cadeia_copiada
    strcpy(cadeia_copiada,cadeia_digitada);
    // Mostra o conteúdo da variável cadeia_digitada
    printf("\nCadeia digitada = %s",cadeia_digitada);
    //Mostra o conteúdo da variável cadeia_copiada
    printf("\nCadeia copiada =  %s",cadeia_copiada);
    getchar();
    return 0;
}












