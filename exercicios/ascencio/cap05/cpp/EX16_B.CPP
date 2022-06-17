#include <stdio.h>
int main()
{ float base, altura, area;
  do
     { printf("\nDigite a medida da base \n");
       scanf("%f%*c",&base);
     } while (base <= 0);
  do
     { printf("\nDigite a medida da altura \n");
       scanf("%f%*c",&altura);
     } while (altura <= 0);
  area = base * altura / 2;
  printf("\nÁrea = %5.2f",area);
  getchar();
  return 0;
}
