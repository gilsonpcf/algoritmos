Algoritmo "Algoritmo Técnico No. 3"
// Disciplina: Algoritmos e Programação de Computadores
// Professor : Gilson Pereira
// Descrição : Encontrar o maior número em um vetor
// Problema  : Encontrar o maior número em um conjunto de N números.
// Aplicações: Plotagem, dimensionamento, ordenação.

Var
    // Declarações das variáveis
    v : vetor[1..100] de inteiro
    n, i, max : inteiro

Inicio
    // Ler a quantidade de elementos do vetor
    escreva("Informe a quantidade de elementos do vetor (max.: 100): ")
    leia(n)
   
    // Ler os N elementos do vetor
    para i de 1 ate n faca
        escreva("Informe o elemento da posição ", i, ": ")
        leia(v[i])
    fimpara

    // Configura o número máximo temporariamente
    // com o primeiro elemento do vetor
    max <- v[1]
   
    // Enquanto menos de N elementos do vetor foram considerados faça
    para i de 2 ate n faca
        // Se o próximo elemento do vetor for maior que
        // o número máximo atual, então atribua-o a MAX.
        se v[i] > max entao
            max <- v[i]
        fimse
    fimpara
   
    // Escrever o número máximo do vetor
    escreva("O número máximo do vetor é ", max)
Fimalgoritmo