#include <stdlib.h>
#include <stdio.h>
int main()
{
 int num;
 char texto[25];
 printf("Digite um número: ");
 scanf("%d%*c",&num);
 itoa(num, texto, 10);
 printf("\nNúmero = %d",num);
 printf("\nNúmero como texto = %s",texto);
 getchar();
 return 0;
}





















