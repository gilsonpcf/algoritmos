// Técnica para Vetor Nº 3
// Descrição : Encontrar o maior número em um vetor.
// Problema  : Encontrar o maior número em um conjunto de N números.
// Aplicações: Plotagem, dimensionamento, ordenação.

#include <stdio.h>

int main() {
    int v[] = {7, 3, 1, 5, 9, 0, 2};
    int n = sizeof(v)/sizeof(int); // Tamanho do vetor
    
    int maior = v[0];
    
    for (int i = 1; i < n; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }
    
    printf("Maior elemento: %d\n", maior);
    
    return 0;
}