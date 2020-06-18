Algoritmo "Algoritmo Técnico No. 4"
// Disciplina: Algoritmos e Programação de Computadores
// Professor : Gilson Pereira
// Descrição : Ordenação por troca (método da bolha)
// Problema  : Classificar em ordem ascendente um conjunto de N números 
//             ordenado aleatoriamente, usando um método de troca.
// Aplicações: Apenas para classificar dados em que uma pequena 
//             percentagem de elementos está fora de ordem.

Var
    // Declarações das variáveis
    v : vetor[1..100] de inteiro
    n, i, j, aux : inteiro

Inicio
    // Ler a quantidade de elementos do vetor
    escreva("Informe a quantidade de elementos do vetor (max.: 100): ")
    leia(n)
    
    // Ler os N elementos do vetor
    para i de 1 ate n faca
        escreva("Informe o elemento da posição ", i, ": ")
        leia(v[i])
    fimpara

    para i de 1 ate n-1 faca
       para j de 1 ate n-i faca
            se v[j] > v[j+1] entao
               aux <- v[j]
               v[j] <- v[j+1]
               v[j+1] <- aux
            fimse
       fimpara
    fimpara

    para i de 1 ate n faca
         escreva(v[i], " ")
    fimpara
Fimalgoritmo
