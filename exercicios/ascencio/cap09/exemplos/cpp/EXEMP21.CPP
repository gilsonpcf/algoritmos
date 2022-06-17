#include <stdlib.h>
#include <stdio.h>
int main()
{
	 int num1;
	 long num2;
	 float num3;
	 double num4;
	 long num5;
	 int base = 10;
	 unsigned long num6;

	 char *texto = "-125.78";

	 char *erro;

	 printf("\nConvertendo de texto para int\n");
	 num1 = atoi(texto);
	 printf("\nString = %s",texto);
	 printf("\nNúmero = %d",num1);

	 printf("\n\nConvertendo de texto para long\n");
	 num2 = atol(texto);
	 printf("\nString = %s",texto);
	 printf("\nNúmero = %f",num2);

	 printf("\n\nConvertendo de texto para float\n");
	 num3 = atof(texto);
	 printf("\nString = %s",texto);
	 printf("\nNúmero = %f",num3);

	 printf("\n\nConvertendo de texto para double\n");
	 num4 = strtod(texto, &erro);
	 printf("\nString = %s",texto);
	 printf("\nNúmero = %f",num4);

	 printf("\n\nConvertendo de texto para long com especificação da base\n");
	 num5 = strtol(texto, &erro, base);
	 printf("\nString = %s",texto);
	 printf("\nNúmero = %f",num5);

	 getchar();
	 return 0;
}






















