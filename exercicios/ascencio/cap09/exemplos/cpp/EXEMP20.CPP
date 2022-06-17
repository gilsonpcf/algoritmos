#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
int main()
{
	 char *texto;
	 double num;
	 int dec, sign;
	 int sig1 = 10;
	 int sig2 = 15;
	 int sig3 = 5;

	 printf("\nConvertendo com 10 dígitos significativos com ecvt\n");
	 num = 9.876;
	 texto = ecvt(num, sig1, &dec, &sign);
	 printf("\nNúmero = %f",num);
	 printf("\nString = %s",texto);
	 printf("\nDecimal = %d",dec);
	 printf("\nSinal = %d",sign);

	 printf("\nConvertendo com 10 dígitos significativos com fcvt\n");
	 num = 9.876;
	 texto = fcvt(num, sig1, &dec, &sign);
	 printf("\nNúmero = %f",num);
	 printf("\nString = %s",texto);
	 printf("\nDecimal = %d",dec);
	 printf("\nSinal = %d",sign);

	 getchar();

	 printf("\nConvertendo com 10 dígitos significativos com ecvt\n");
	 num = -123.4567;
	 texto = ecvt(num, sig1, &dec, &sign);
	 printf("\nNúmero = %f",num);
	 printf("\nString = %s",texto);
	 printf("\nDecimal = %d",dec);
	 printf("\nSinal = %d",sign);

	 printf("\nConvertendo com 10 dígitos significativos com fcvt\n");
	 num = -123.4567;
	 texto = fcvt(num, sig1, &dec, &sign);
	 printf("\nNúmero = %f",num);
	 printf("\nString = %s",texto);
	 printf("\nDecimal = %d",dec);
	 printf("\nSinal = %d",sign);

	 getchar();

	 printf("\nConvertendo com 10 dígitos significativos com ecvt\n");
	 num = 0.678e5;
	 texto = ecvt(num, sig1, &dec, &sign);
	 printf("\nNúmero = %f",num);
	 printf("\nString = %s",texto);
	 printf("\nDecimal = %d",dec);
	 printf("\nSinal = %d",sign);

	 printf("\nConvertendo com 10 dígitos significativos com fcvt\n");
	 num = 0.678e5;
	 texto = fcvt(num, sig1, &dec, &sign);
	 printf("\nNúmero = %f",num);
	 printf("\nString = %s",texto);
	 printf("\nDecimal = %d",dec);
	 printf("\nSinal = %d",sign);

	 getchar();

	 printf("\nConvertendo com 15 dígitos significativos com ecvt\n");
	 num = 9.876;
	 texto = ecvt(num, sig2, &dec, &sign);
	 printf("\nNúmero = %f",num);
	 printf("\nString = %s",texto);
	 printf("\nDecimal = %d",dec);
	 printf("\nSinal = %d",sign);
	 
	 printf("\nConvertendo com 15 dígitos significativos com fcvt\n");
	 num = 9.876;
	 texto = fcvt(num, sig2, &dec, &sign);
	 printf("\nNúmero = %f",num);
	 printf("\nString = %s",texto);
	 printf("\nDecimal = %d",dec);
	 printf("\nSinal = %d",sign);

	 getchar();

	 printf("\nConvertendo com 15 dígitos significativos com ecvt\n");
	 num = -123.4567;
	 texto = ecvt(num, sig2, &dec, &sign);
	 printf("\nNúmero = %f",num);
	 printf("\nString = %s",texto);
	 printf("\nDecimal = %d",dec);
	 printf("\nSinal = %d",sign);
	 
	 printf("\nConvertendo com 15 dígitos significativos com fcvt\n");
	 num = -123.4567;
	 texto = fcvt(num, sig2, &dec, &sign);
	 printf("\nNúmero = %f",num);
	 printf("\nString = %s",texto);
	 printf("\nDecimal = %d",dec);
	 printf("\nSinal = %d",sign);

	 getchar();

	 printf("\nConvertendo com 15 dígitos significativos com ecvt\n");
	 num = 0.678e5;
	 texto = ecvt(num, sig2, &dec, &sign);
	 printf("\nNúmero = %f",num);
	 printf("\nString = %s",texto);
	 printf("\nDecimal = %d",dec);
	 printf("\nSinal = %d",sign);
	 
	 printf("\nConvertendo com 15 dígitos significativos com fcvt\n");
	 num = 0.678e5;
	 texto = fcvt(num, sig2, &dec, &sign);
	 printf("\nNúmero = %f",num);
	 printf("\nString = %s",texto);
	 printf("\nDecimal = %d",dec);
	 printf("\nSinal = %d",sign);

	 getchar();

	 printf("\nConvertendo com 5 dígitos significativos com ecvt\n");
	 num = 9.876;
	 texto = ecvt(num, sig3, &dec, &sign);
	 printf("\nNúmero = %f",num);
	 printf("\nString = %s",texto);
	 printf("\nDecimal = %d",dec);
	 printf("\nSinal = %d",sign);
	 
	 printf("\nConvertendo com 5 dígitos significativos com fcvt\n");
	 num = 9.876;
	 texto = fcvt(num, sig3, &dec, &sign);
	 printf("\nNúmero = %f",num);
	 printf("\nString = %s",texto);
	 printf("\nDecimal = %d",dec);
	 printf("\nSinal = %d",sign);

	 getch();

	 printf("\nConvertendo com 5 dígitos significativos com ecvt\n");
	 num = -123.4567;
	 texto = ecvt(num, sig3, &dec, &sign);
	 printf("\nNúmero = %f",num);
	 printf("\nString = %s",texto);
	 printf("\nDecimal = %d",dec);
	 printf("\nSinal = %d",sign);

	 printf("\nConvertendo com 5 dígitos significativos com fcvt\n");
	 num = -123.4567;
	 texto = fcvt(num, sig3, &dec, &sign);
	 printf("\nNúmero = %f",num);
	 printf("\nString = %s",texto);
	 printf("\nDecimal = %d",dec);
	 printf("\nSinal = %d",sign);

	 getchar();

	 printf("\nConvertendo com 5 dígitos significativos com ecvt\n");
	 num = 0.678e5;
	 texto = ecvt(num, sig3, &dec, &sign);
	 printf("\nNúmero = %f",num);
	 printf("\nString = %s",texto);
	 printf("\nDecimal = %d",dec);
	 printf("\nSinal = %d",sign);

	 printf("\nConvertendo com 5 dígitos significativos com fcvt\n");
	 num = 0.678e5;
	 texto = fcvt(num, sig3, &dec, &sign);
	 printf("\nNúmero = %f",num);
	 printf("\nString = %s",texto);
	 printf("\nDecimal = %d",dec);
	 printf("\nSinal = %d",sign);

	 getchar();
	 return 0;
}





















