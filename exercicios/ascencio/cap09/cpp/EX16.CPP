#include <string.h>
#include <stdio.h>
int main()
{
	char PALAVRA1[100];
	int TAM, I, J, ACHOU;
	printf("DIGITE A PALAVRA: ");
	gets(PALAVRA1);
	TAM=strlen(PALAVRA1);
	J=TAM-1;
	ACHOU=0;
	for (I=0;I<TAM;I++)
	{
		 if (PALAVRA1[I] != PALAVRA1[J])
			 ACHOU=1;
		 J=J-1;
	}
if (ACHOU == 0)
printf("%s = PALÍNDORME",PALAVRA1);
else
printf("%s = NÃO PALÍNDORME",PALAVRA1);
getchar();
return 0;
}
