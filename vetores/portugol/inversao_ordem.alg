Algoritmo "Algoritmo Técnico No. 1"
// Disciplina: Algoritmos e Programação de Computadores
// Professor : Gilson Pereira
// Descrição : Inversão da ordem de um vetor
// Problema  : Reorganizar os elementos de um vetor de modo que eles 
//             apareçam na ordem inversa.
// Aplicações: Processamento de vetores e matrizes.

Var
    // Declarações das variáveis
    v : vetor[1..100] de inteiro
    n, i, r, aux : inteiro

Inicio
    // Ler a quantidade de elementos do vetor
    escreva("Informe a quantidade de elementos do vetor (max.: 100): ")
    leia(n)
   
    // Ler os N elementos do vetor
    para i de 1 ate n faca
        escreva("Informe o elemento da posição ", i, ": ")
        leia(v[i])
    fimpara

    // Calcular o número de trocas necessárias para inveter o vetor
    r <- n div 2

    // Enquanto ainda houver pares de elementos do vetor a serem trocados
    para i de 1 ate r faca
        // Trocar o elemento da posição I com o elemento da posição N-I+1
        aux <- v[i]
        v[i] <- v[n-i+1]
        v[n-i+1] <- aux
    fimpara

    // Escrever os elementos do vetor
    para i de 1 ate n faca
        escreval("Posição ", i, ": ", v[i])
    fimpara
Fimalgoritmo