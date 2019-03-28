Algoritmo "Algoritmo Fundamental Nº 1"
// Disciplina: Algoritmos e Programação de Computadores
// Professor : Gilson Pereira
// Descrição : Troca dos valores de duas variáveis
// Problema  : Dadas duas variáveis, trocar os valores atribuídos a elas.
// Aplicações: Algoritmos de ordenação.

Var
    // Declarações das variáveis
    a, b, c : inteiro

Inicio
    escreva("Informe o valor de A: ")
    leia(a)
    escreva("Informe o valor de B: ")
    leia(b)
   
    // Guardar em C o valor original de A
    c <- a
   
    // Atribuir a A o valor original de B
    a <- b
   
    // Atribuir a B o valor original de A, que está armazenado em C
    b <- c
   
    escreval("Novo valor de A: ", a)
    escreval("Novo valor de B: ", b)
Fimalgoritmo