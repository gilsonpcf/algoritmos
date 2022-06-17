#include <stdio.h>
void transformacao(int segundos);
int main()
{ int seg;
  printf("\nDigite o valor em segundos: ");
  scanf("%d%*c",&seg);
  transformacao(seg);
  getchar();
  return 0;
}
void transformacao(int segundos)
{ int h, m, s, r;
  h = segundos / 3600;
  r = segundos % 3600;
  m = r / 60;
  s = r % 60;
  printf("\n %d segundo(s) equivale(m) a %d hora(s), %d minuto(s) e %d segundo(s)",segundos,h,m,s);
}

