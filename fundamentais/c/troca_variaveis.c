// Algoritmo Fundamental Nº 1
// Descrição : Troca dos valores de duas variáveis.
// Problema  : Dadas duas variáveis, trocar os valores atribuídos a elas.
// Aplicações: Algoritmos de ordenação.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarações das variáveis
    int a, b, aux;

    printf("Informe valor para a variável A: ");
    scanf("%d", &a);
    printf("Informe valor para a variável B: ");
    scanf("%d", &b);

    aux = a; // Guarda em AUX o valor original de A
    a = b;   // Atribui a A o valor original de B
    b = aux; // Atribui a B o valor original de A, que está armazenado em AUX

    printf("Novo valor da variável A: %d\n", a);
    printf("Novo valor da variável B: %d", b);

    return 0;
}
