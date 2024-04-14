// Pesquisa e ordenação
// Descrição : Pesquisa sequencial
// Problema  : Dado um elemento x e um conjunto de dados,
//             verifique se x está ou não presente no conjunto.

#include <stdio.h>

int main() {
    int v[] = {10, 12, 20, 23, 27, 30, 31, 39, 42, 44, 45, 49, 57, 63, 70};
    int i, tamanho = sizeof(v)/sizeof(int);
    int x;
    
    printf("Informe o número a ser pesquisado: ");
    scanf("%d", &x);
    
    for (i = 0; i < tamanho; i++) {
        if (x == v[i]) {
            break;
        }
    }
    
    if (x == v[i]) {
        printf("O número %d está na posição %d", x, i);
    }
    else {
        printf("O número %d não está no vetor", x);
    }
    
    return 0;
}