#include <stdio.h>
#include <stdlib.h>
int main()
{   int angulo, voltas;
	//Mostra mensagem solicitando a medida do ângulo
	printf("\nDigite a medida do ângulo: ");
	scanf("%d%*c",&angulo);
	// Verifica se há  voltas
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
		 printf("\nEstá em cima de algum dos eixos");
	if ((angulo > 0 && angulo < 90) || (angulo < -270 && angulo > -360))
		 printf("\n1º Quadrante");
	if ((angulo > 90 && angulo < 180) || (angulo < -180 && angulo > -270))
		 printf("\n2º Quadrante");
	if ((angulo > 180 && angulo < 270) || (angulo < -90 && angulo > -180))
		 printf("\n3º Quadrante");
	if ((angulo > 270 && angulo < 360) || (angulo < 0 && angulo > -90))
		 printf("\n4º Quadrante");
	//Mostra o número de voltas
	printf("\n %d volta(s) no sentido ",abs(voltas));
	//Mostra o sentido
	if (angulo < 0)
		 printf("horário");
	else
		 printf("anti-horário");
	getchar();
	return 0;
}
