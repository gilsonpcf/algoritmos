Algoritmo "Algoritmo T�cnico No. 2"
// Disciplina: Algoritmos e Programa��o de Computadores
// Professor : Gilson Pereira
// Descri��o : Contagem com vetor (histograma)
// Problema  : Dado um conjunto de N notas de um exame, fazer uma contagem
//             do n�mero de alunos que obtiveram cada nota poss�vel
//             (no intervalo de 0 a 100).
// Aplica��es: An�lise estat�stica.

Var
    // Declara��es das vari�veis
    v : vetor[0..100] de inteiro
    n, i, nota : inteiro

Inicio
    // Ler a quantidade de notas a serem processadas
    escreva("Informe a quantidade de notas (max.: 100): ")
    leia(n)

    // Inicializar todos os elementos do vetor de contagem com zero
    para i de 0 ate 100 faca
        v[i] <- 0
    fimpara

    // Enquanto ainda houver notas a serem processadas fa�a repetidamente
    para i de 1 ate n faca
        // Ler a pr�xima nota
        escreva("Informe a nota do aluno ", i, " (0 a 100): ")
        leia(nota)

        // Somar 1 (um) ao contador localizado no vetor de contagem,
        // no �ndice correspondente � nota
        v[nota] <- v[nota] + 1
    fimpara

    // Escrever a distribui��o de frequ�ncia das notas
    escreval("Nota   Quantidade")
    para i de 0 ate 100 faca
        se v[i] > 0 entao
            escreval(i, "       ", v[i])
        fimse
    fimpara
Fimalgoritmo