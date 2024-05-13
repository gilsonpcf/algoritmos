// Técnica para Vetor Nº 4
// Descrição : Remoção de duplicatas de um vetor ordenado.
// Problema  : Remover todas as duplicatas de um vetor ordenado
//             e comprimi-lo adequadamente.
// Aplicações: Problemas de compressão de dados e de processamento de texto.

#include <stdio.h>

int main() {
    int v[] = {2, 2, 8, 15, 23, 23, 23, 23, 26, 29, 30, 32, 32};
    int n = sizeof(v)/sizeof(int); // Tamanho do vetor
    int j = 1; // Contador de elementos não repetidos

    for (int i = 1; i < n; i++) {
        if (v[i-1] != v[i]) {
            j++;
            v[j-1] = v[i];
        }
    }

    // Exibe os elementos do vetor
    for (int i = 0; i < j; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}