#include <stdio.h>
int main()
{ float base, altura, area;
  base = 0;
  while (base <= 0)
     { printf("\nDigite a medida da base \n");
       scanf("%f%*c",&base);
     }
  altura = 0;
  while (altura <= 0)
     { printf("\nDigite a medida da altura \n");
       scanf("%f%*c",&altura);
     }
  area = base * altura / 2;
	printf("\nÁrea = %5.2f",area);
  getchar();
  return 0;
}
