/*
 Algoritmo Fundamental Nº 1
 Disciplina: Algoritmos e Programação de Computadores
 Professor : Gilson Pereira
 Descrição : Troca dos valores de duas variáveis
 Problema  : Dadas duas variáveis, trocar os valores atribuídos a elas.
 Aplicações: Algoritmos de ordenação.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declarações das variáveis
    int a, b, c;

    printf("Informe o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);

    // Guardar em C o valor original de A
    c = a;

    // Atribuir a A o valor original de B
    a = b;

    // Atribuir a B o valor original de A, que está armazenado em C
    b = c;

    printf("Novo valor de A: %d\n", a);
    printf("Novo valor de B: %d", b);

    return 0;
}
