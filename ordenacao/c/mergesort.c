#include <stdio.h>

// Função de intercalação do Merge Sort
void intercala(int v[], int inicio, int meio, int fim) {

    int tamanho = fim - inicio + 1,
        aux[tamanho],
        i = inicio,
        j = meio + 1,
        k = 0;

    // Compara dois elementos do vetor original e inclui o MENOR deles no vetor auxiliar
    while (i <= meio && j <= fim) {
        if (v[i] < v[j]) {
            aux[k] = v[i];
            i++;
        }
        else {
            aux[k] = v[j];
            j++;
        }

        k++;
    }

    // Copia os elementos restantes da primeira metade, caso existam
    while (i <= meio) {
        aux[k] = v[i];
        i++;
        k++;
    }

    // Copia os elementos restantes da segunda metade, caso existam
    while (j <= fim) {
        aux[k] = v[j];
        j++;
        k++;
    }

    // Copia os elementos de volta para o vetor original
    k = 0;
    for (i = inicio; i <= fim; i++) {
        v[i] = aux[k];
        k++;
    }
}

// Função de ordenação do Merge Sort
void ordena(int v[], int inicio, int fim){
    if(inicio < fim) {
        int meio = (inicio + fim) / 2;

        ordena(v, inicio, meio);
        ordena(v, meio + 1, fim);

        intercala(v, inicio, meio, fim);
    }
}

int main() {

    int v[8] = {20, 35, 18, 8, 14, 41, 3, 39};
    int i;

    ordena(v, 0, 7);

    for (i = 0; i < 8; i++) {
    	printf("%d ", v[i]);
    }

    return 0;
}
