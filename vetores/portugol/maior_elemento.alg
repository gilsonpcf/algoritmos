Algoritmo "Algoritmo T�cnico No. 3"
// Disciplina: Algoritmos e Programa��o de Computadores
// Professor : Gilson Pereira
// Descri��o : Encontrar o maior n�mero em um vetor
// Problema  : Encontrar o maior n�mero em um conjunto de N n�meros.
// Aplica��es: Plotagem, dimensionamento, ordena��o.

Var
    // Declara��es das vari�veis
    v : vetor[1..100] de inteiro
    n, i, max : inteiro

Inicio
    // Ler a quantidade de elementos do vetor
    escreva("Informe a quantidade de elementos do vetor (max.: 100): ")
    leia(n)
   
    // Ler os N elementos do vetor
    para i de 1 ate n faca
        escreva("Informe o elemento da posi��o ", i, ": ")
        leia(v[i])
    fimpara

    // Configura o n�mero m�ximo temporariamente
    // com o primeiro elemento do vetor
    max <- v[1]
   
    // Enquanto menos de N elementos do vetor foram considerados fa�a
    para i de 2 ate n faca
        // Se o pr�ximo elemento do vetor for maior que
        // o n�mero m�ximo atual, ent�o atribua-o a MAX.
        se v[i] > max entao
            max <- v[i]
        fimse
    fimpara
   
    // Escrever o n�mero m�ximo do vetor
    escreva("O n�mero m�ximo do vetor � ", max)
Fimalgoritmo