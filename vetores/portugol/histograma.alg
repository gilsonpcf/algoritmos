Algoritmo "Algoritmo Técnico No. 2"
// Disciplina: Algoritmos e Programação de Computadores
// Professor : Gilson Pereira
// Descrição : Contagem com vetor (histograma)
// Problema  : Dado um conjunto de N notas de um exame, fazer uma contagem
//             do número de alunos que obtiveram cada nota possível
//             (no intervalo de 0 a 100).
// Aplicações: Análise estatística.

Var
    // Declarações das variáveis
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

    // Enquanto ainda houver notas a serem processadas faça repetidamente
    para i de 1 ate n faca
        // Ler a próxima nota
        escreva("Informe a nota do aluno ", i, " (0 a 100): ")
        leia(nota)

        // Somar 1 (um) ao contador localizado no vetor de contagem,
        // no índice correspondente à nota
        v[nota] <- v[nota] + 1
    fimpara

    // Escrever a distribuição de frequência das notas
    escreval("Nota   Quantidade")
    para i de 0 ate 100 faca
        se v[i] > 0 entao
            escreval(i, "       ", v[i])
        fimse
    fimpara
Fimalgoritmo