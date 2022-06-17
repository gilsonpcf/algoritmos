#include <string.h>
#include <stdio.h>
#include <ctype.h>
int main()
{
char frase[200];
int tam,i,qtde,num;
qtde=0;
printf("\nDigite uma frase\n");
gets(frase);
tam=strlen(frase);
for (i=0;i<tam;i++)
{
 num=int(frase[i]);
 if ((num >= 65 && num <= 90) || (num >= 97 && num <= 122))
    {
    // é uma letra, maiúscula ou minúscula
    if (num != 65 && num != 69
	&& num != 73 && num != 79
	&& num != 85 && num != 97
	&& num != 101 && num != 105
	&& num != 111 && num != 117)
	{
	 qtde = qtde + 1;
	}
    }
}
printf("\nQuantidade de consoantes = %d",qtde);
getchar();
return 0;
}
