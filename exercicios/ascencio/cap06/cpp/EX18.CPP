 #include <stdio.h>

int main()
{   int dado[20], i, num1, num2, num3, num4, num5, num6;
	for (i=0;i<20;i++)
	{   printf("Digite o resultado da %d.a jogada: ", i+1);
		scanf("%d%*c", &dado[i]);
		while (dado[i] < 1 || dado[i] > 6)
		{ printf("\nValor incorreto. Digite, novamente, o resultado da %d.a jogada: ", i+1);
		  scanf("%d%*c", &dado[i]);
		}
	}

	for (i=0;i<20;i++)
	{
		printf("\nResultado da %d.a jogada %d", i+1, dado[i]);
	}

	num1 = 0;
	num2 = 0;
	num3 = 0;
	num4 = 0;
	num5 = 0;
	num6 = 0;

	for (i=0;i<20;i++)
	{
		if (dado[i] == 1) num1 = num1 + 1;
		if (dado[i] == 2) num2 = num2 + 1;
		if (dado[i] == 3) num3 = num3 + 1;
		if (dado[i] == 4) num4 = num4 + 1;
		if (dado[i] == 5) num5 = num5 + 1;
		if (dado[i] == 6) num6 = num6 + 1;
	}

	printf("\nQuantidade de vezez que o numero 1 foi sorteado %d", num1);
	printf("\nQuantidade de vezez que o numero 2 foi sorteado %d", num2);
	printf("\nQuantidade de vezez que o numero 3 foi sorteado %d", num3);
	printf("\nQuantidade de vezez que o numero 4 foi sorteado %d", num4);
	printf("\nQuantidade de vezez que o numero 5 foi sorteado %d", num5);
	printf("\nQuantidade de vezez que o numero 6 foi sorteado %d", num6);
	getchar();
	return 0;
}
