// Técnica para Vetor Nº 2
// Descrição : Contagem com vetor (histograma).
// Problema  : Dado um conjunto de N notas de um exame, fazer uma contagem
//             do número de alunos que obtiveram cada nota possível
//             (no intervalo de 0 a 100).
// Aplicações: Análise estatística.

#include <stdio.h>

int main() {
    int cont[101]; // Vetor de contadores
    int nota, n;
    
    printf("Informe a quantidade de notas: ");
    scanf("%d", &n);
    
    // Inicializa todos os contadores (notas de 0 a 100)
    for (int i = 0; i <= 100; i++) {
        cont[i] = 0;
    }
    
    // Lê as notas dos n alunos
    for (int i = 1; i <= n; i++) {
        printf("Informe a nota (0 a 100) do aluno %d: ", i);
        scanf("%d", &nota);
    	cont[nota]++; // Incrementa o contador da nota
    }
    
    // Exibe a distribuição de frequência das notas
    for (int i = 0; i <= 100; i++) {
        if (cont[i] != 0) {
    	    printf("Nota: %d - Quantidade: %d\n", i,  cont[i]);
    	}
    }
    
    return 0;
}