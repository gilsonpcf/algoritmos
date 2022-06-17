#include <stdio.h>
float sequencia(int n)
{ int a, b;
	float f, seq;
	seq = 1;
	for (a=1;a<=n;a++)
			{ f = 1;
				for (b=1;b<=a;b++)
						{ f = f * b;
						}
				seq = seq + 1/f;
		}
	return seq;
}
int main()
{   int num;
	float s;
	printf("\nDigite um número: ");
	scanf("%d%*c",&num);
	s = sequencia(num);
	printf("\nValor da sequência = %5.2f",s);
	getchar();
	return 0;
}
