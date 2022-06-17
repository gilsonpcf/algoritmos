#include <stdio.h>
int calculo(int h_i, int m_i, int h_f, int m_f);
int main()
{ int hora_i, min_i, hora_f, min_f, minutos;
  printf("Início do jogo ==> DIGITE A HORA, TECLE ENTER E DIGITE OS MINUTOS\n");
  scanf("%d%*c",&hora_i);
  scanf("%d%*c",&min_i);
  printf("Fim do jogo ==> DIGITE A HORA, TECLE ENTER E DIGITE OS MINUTOS\n");
  scanf("%d%*c",&hora_f);
  scanf("%d%*c",&min_f);
  minutos = calculo(hora_i, min_i, hora_f, min_f);
  printf("A duração do jogo foi de %d minutos",minutos);
  getchar();
  return 0;
}
int calculo(int h_i, int m_i, int h_f, int m_f)
{ int tot_h, tot_m, total;
	if (m_f < m_i)
		 { m_f = m_f + 60;
			 h_f--;
		 }
	if (h_f < h_i)
		 h_f = h_f + 24;
	tot_h = h_f - h_i;
	tot_m = m_f - m_i;
	total = tot_h * 60 + tot_m;
	return total;
}
