#include <stdio.h>

int main()
{ struct
      { int hora_ini, min_ini, hora_fim, min_fim;
      } tempo;
  long int min, seg, hora_total, min_total;

	do { printf("\nDigite a hora inicial do jogo: ");
		 scanf("%d%*c", &tempo.hora_ini);
	} while ((tempo.hora_ini > 23) || (tempo.hora_ini < 0));

	do { printf("Digite o minuto inicial do jogo: ");
		 scanf("%d%*c", &tempo.min_ini);
	} while ((tempo.min_ini > 59) || (tempo.min_ini < 0));

	do { printf("Digite a hora final do jogo: ");
		 scanf("%d%*c", &tempo.hora_fim);
	} while ((tempo.hora_fim > 23) || (tempo.hora_fim  < 0));

	do { printf("Digite o minuto final do jogo: ");
         scanf("%d%*c", &tempo.min_fim);
	} while ((tempo.min_fim > 59) || (tempo.min_fim < 0));

	if (tempo.min_fim < tempo.min_ini)
		 { tempo.min_fim = tempo.min_fim + 60;
		   tempo.hora_fim = tempo.hora_fim - 1;
		 }

	if (tempo.hora_fim < tempo.hora_ini)
		 { tempo.hora_fim = tempo.hora_fim + 24;
		 }

	hora_total = tempo.hora_fim - tempo.hora_ini;
	min_total = tempo.min_fim - tempo.min_ini;
	printf("\nA duracao do jogo foi de: %d horas(s) e %d minuto(s)", hora_total, min_total);
	min = hora_total * 60 + min_total;
	printf("\nA duracao do jogo expressa somente em minutos foi de: %d", min);
	seg = min * 60;
	printf("\nA duracao do jogo expressa somente em segundos foi de: %d segundo(s)", seg);
	getchar();
	return 0;
}


