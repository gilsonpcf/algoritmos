#include <stdio.h>
int main()
{ int hora_i, min_i, hora_f, min_f, hora_d, min_d;
  //Mostra mensagens solicitando hora e minuto iniciais
  printf("\nDigite o horário inicial");
  printf("\nhora: ");
  //Recebe hora inicial
  scanf("%d%*c",&hora_i);
  printf("minuto: ");
  //Recebe minuto inicial
  scanf("%d%*c",&min_i);
  //Mostra mensagens solicitando hora e minuto finais
  printf("\nDigite o horário final ");
  printf("\nhora: ");
  //Recebe hora final
  scanf("%d%*c",&hora_f);
  printf("minuto: ");
  //Recebe minuto final
  scanf("%d%*c",&min_f);
  // Se o minuto inicial for maior que o minuto final deve-se fazer uma
  // transformação nas variáveis min_f e hora_f: retira-se uma unidade
  // da variável hora_f e acrescenta esta unidade, convertida para 60
  // minutos à variável min_f. Exemplo: 7h e 30m transforma-se em 6h e 90m
  //(representações equivalentes)
  if (min_i > min_f)
		{
			min_f = min_f + 60;
			hora_f = hora_f - 1;
		}
	//Se a hora inicial for maior que a hora final significa que o jogo acabou
	// no dia seguinte. Sendo assim, acrescenta-se 24 horas
	// (equivalente a um dia) à variável hora_f
  if (hora_i > hora_f)
		hora_f = hora_f + 24;
  // Após as transformações necessárias, o tempo decorrido é calculado sempre
  // assim: tempo final - tempo inicial
  min_d = min_f - min_i;
  hora_d = hora_f - hora_i;
  //Mostra a duaração do jogo em horas e minutos
  printf("\nO jogo durou %d hora(s) e %d minuto(s)",hora_d,min_d);
  //Pára o programa a espera de um ENTER
  getchar();
  return 0;
}
