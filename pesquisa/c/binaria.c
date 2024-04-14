// Pesquisa e ordenação
// Descrição : Pesquisa binária
// Problema  : Dado um elemento x e um conjunto de dados que está estritamente
//             em ordem numérica ascendente, verifique se x está ou não
//             presente no conjunto.

#include <stdio.h>

int main() {
    int v[] = {10, 12, 20, 23, 27, 30, 31, 39, 42, 44, 45, 49, 57, 63, 70};
    int tamanho = sizeof(v)/sizeof(int);
    int inicio = 0, fim = tamanho - 1;
    int meio, x;

    printf("Informe o número a ser pesquisado: ");
    scanf("%d", &x);

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;

        if (x == v[meio]) {
            break;
        }
    
        if (x > v[meio]) {
            inicio = meio + 1;
        }
    
        if (x < v[meio]) {
            fim = meio - 1;
        }
    }
    
    if (x == v[meio]) {
        printf("O número %d está na posição %d", x, meio);
    }
    else {
        printf("O número %d não está no vetor", x);
    }
    
    return 0;
}