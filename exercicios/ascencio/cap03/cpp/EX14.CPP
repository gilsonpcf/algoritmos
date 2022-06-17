#include <stdio.h>
int main ()
{   int ano_atual, ano_nasc, id_atual, id_2050;
    // Mostra mensagem antes da leitura do ano de nascimento
    printf("\nDigite o ano de nascimento: ");
    // Recebe o ano de nascimento
    scanf("%d%*c",&ano_nasc);
	// Mostra mensagem antes da leitura do ano atual
	printf("\nDigite o ano atual: ");
	// Recebe o ano atual
	scanf("%d%*c",&ano_atual);
	// Calcula a idade atual
	id_atual = ano_atual - ano_nasc;
	// Calcula a idade em 2050
	id_2050 = 2050 - ano_nasc;
	// Mostra a idade atual
	printf("\nA idade atual = %d",id_atual);
	// Mostra a idade em 2050
	printf("\nA idade em 2050 = %d",id_2050);
	// Pára o programa a espera de um ENTER
	getchar();
	return 0;
}

