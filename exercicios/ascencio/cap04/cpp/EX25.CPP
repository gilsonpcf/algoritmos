#include <stdio.h>
#include <stdlib.h>
int main()
{   int angulo, voltas;
	//Mostra mensagem solicitando a medida do �ngulo
	printf("\nDigite a medida do �ngulo: ");
	scanf("%d%*c",&angulo);
	// Verifica se h� voltas
	if ((angulo > 360) || (angulo < -360))
		 { voltas = angulo / 360;
			 angulo = angulo % 360;
		 }
	else
		 voltas = 0;
	//Mostra o quadrante
	if (angulo == 0 || angulo == 90 || angulo == -90
		|| angulo == 180 || angulo == -180 || angulo == -270
		|| angulo == 270 || angulo == 360 || angulo == -360)
		 printf("\nEst� em cima de algum dos eixos");
	if ((angulo > 0 && angulo < 90) || (angulo < -270 && angulo > -360))
		 printf("\n1� Quadrante");
	if ((angulo > 90 && angulo < 180) || (angulo < -180 && angulo > -270))
		 printf("\n2� Quadrante");
	if ((angulo > 180 && angulo < 270) || (angulo < -90 && angulo > -180))
		 printf("\n3� Quadrante");
	if ((angulo > 270 && angulo < 360) || (angulo < 0 && angulo > -90))
		 printf("\n4� Quadrante");
	//Mostra o n�mero de voltas
	printf("\n %d volta(s) no sentido ",abs(voltas));
	//Mostra o sentido
	if (angulo < 0)
		 printf("hor�rio");
	else
		 printf("anti-hor�rio");
	getchar();
	return 0;
}
