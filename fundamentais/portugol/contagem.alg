Algoritmo "Algoritmo Fundamental Nº 2"
// Disciplina: Algoritmos e Programação de Computadores
// Professor : Gilson Pereira
// Descrição : Contagem
// Problema  : Dado um conjunto de N notas de um exame, fazer uma contagem
//             do número de alunos que passaram no exame. Passará o aluno
//             que tirar nota 50 ou maior (no intervalo de 0 a 100).
// Aplicações: Todas as formas de contagem.

Var
    // Declarações das variáveis
    n, i, nota, cont : inteiro

Inicio
    // Ler o número de notas a serem processadas
    escreva("Informe a quantidade de alunos: ")
    leia(n)
   
    // Inicializar o contador com zero
    cont <- 0

    i <- 0
    // Enquanto ainda houver notas a serem processadas faça repetidamente
    enquanto i < n faca
        i <- i + 1

        // Ler a próxima nota
        escreva("Informe a nota: ")
        leia(nota)
       
        // Se a nota for suficiente para passar no exame
        se nota >= 50 entao
            // Somar 1 (um) ao contador
            cont <- cont + 1
        fimse
    fimenquanto
   
    // Escrever o número total de alunos que passaram
    escreva("Total de alunos que passaram no exame: ", cont)
Fimalgoritmo