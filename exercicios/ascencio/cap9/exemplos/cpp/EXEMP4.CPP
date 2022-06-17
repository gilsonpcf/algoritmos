#include <stdio.h>
#include <string.h>
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
 // A função strcmp compara as cadeias
if (strcmp(cadeia1,cadeia2) == 0)
	printf("\nAs cadeias digitadas são iguais ");
else if (strcmp(cadeia1,cadeia2) > 0)
			 printf("\nA cadeia1 é alfabeticamente maior que a cadeia2 ");
		 else
			 printf("\nA cadeia2 é alfabeticamente maior que a cadeia1 ");
getchar();
return 0;
}














