// Técnica para Vetor Nº 1
// Descrição : Inversão da ordem de um vetor.
// Problema  : Reorganizar os elementos de um vetor de modo que eles 
//             apareçam na ordem inversa.
// Aplicações: Processamento de vetores e matrizes.

#include <stdio.h>

int main() {
    int vetor[] = {7, 3, 5, 1, 8, 2, 4};
    int aux;
    int n = sizeof(vetor)/sizeof(int); // Tamanho do vetor
    int meio = n / 2; // Posição no meio do vetor
    
    // Realiza n/2 trocas de valores de posições opostas
    for (int i = 0; i < meio; i++) {
        aux = vetor[i];
        vetor[i] = vetor[n-1-i];
        vetor[n-1-i] = aux;
    }
    
    // Exibe os elementos do vetor
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}