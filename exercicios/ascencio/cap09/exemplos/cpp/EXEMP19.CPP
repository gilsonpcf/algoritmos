#include <stdlib.h>
#include <stdio.h>
int main()
{
 int num;
 char texto[25];
 printf("Digite um n�mero: ");
 scanf("%d%*c",&num);
 itoa(num, texto, 10);
 printf("\nN�mero = %d",num);
 printf("\nN�mero como texto = %s",texto);
 getchar();
 return 0;
}





















