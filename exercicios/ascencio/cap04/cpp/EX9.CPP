#include <stdio.h>
// Como neste programa será utilizada a função localtime()
// faz-se necessária a biblioteca time.h
#include <time.h>
int main()
{   // a declaração abaixo define um conjunto com 9 variáveis do tipo int.
    // as principais variáveis são:
    // tm_sec - segundos da hora do sistema (0 a 59)
    // tm_min - minutos da hora do sistema (0 a 59)
    // tm_hour - horas da hora do sistema (0 a 23)
    // tm_mday - dia da data do sistema (1 a 31) 
    // tm_mon - mês da data do sistema (0 a 11) 
    // tm_year - ano da data do sistema (desde 1900)
    // tm_wday - dia da semana da data do sistema (0 a 6, sendo o 0 o domingo)
	time_t t;  
    struct tm *data_hora;  
    int dia, mes, ano, hora, min, seg;  
    //Pega a data e a hora atual do sistema 
    t = time(NULL); 
    data_hora = localtime(&t);
    dia = data_hora -> tm_mday;
    mes = data_hora -> tm_mon + 1;
    ano = data_hora -> tm_year + 1900;
    hora = data_hora -> tm_hour;
    min = data_hora -> tm_min;
    printf("\nData Atual: ");
     if (dia<=9)
	  printf("0%d",dia);
	 else
	  printf("%d",dia);
 	// Avalia o valor da variável mes para escrever o mês por extenso
	 switch(mes)
		{ case 1: printf("/janeiro/");
				 break;
			 case 2: printf("/fevereiro/");
				 break;
			 case 3: printf("/março/");
				 break;
			 case 4: printf("/abril/");
				 break;
			 case 5: printf("/maio/");
				 break;
			 case 6: printf("/junho/");
				 break;
			 case 7: printf("/julho/");
				 break;
			 case 8: printf("/agosto/");
				 break;
			 case 9: printf("/setembro/");
				 break;
			 case 10: printf("/outubro/");
				 break;
			 case 11: printf("/novembro/");
				 break;
			 case 12: printf("/dezembro/");
				 break;
		}
    printf("%d",ano);
    ano = data_hora -> tm_year + 1900;
    hora = data_hora -> tm_hour;
    min = data_hora -> tm_min;
    printf("\nHora Atual: ");
     if (hora<=9)
	  printf("0%d:",hora);
	 else
	  printf("%d:",hora);
     if (min<=9)
	  printf("0%d",min);
	 else
	  printf("%d",min);
     //Pára o programa a espera de um ENTER
	 getchar();
	 return 0;
}
