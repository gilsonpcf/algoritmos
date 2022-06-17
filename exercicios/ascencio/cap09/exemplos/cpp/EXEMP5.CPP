#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
 char cadeia1[25],cadeia2[25];
 printf("Digite a primeira cadeia de caracteres: ");
 // A primeira cadeia de caracteres digitada será
 // armazenada na variável cadeia1
 gets(cadeia1);
 printf("Digite a segunda cadeia de caracteres: ");
 // A segunda cadeia de caracteres digitada serÁ
 // armazenada na vari vel cadeia2
 gets(cadeia2);
 // A função strncmp compara os n primeiros caracteres das duas cadeias
if (strncmp(cadeia1,cadeia2,3) == 0)
	printf("\nAs cadeias digitadas são iguais ");
else
	printf("\nAs cadeias digitadas são diferentes ");
getchar();
return 0;
}















