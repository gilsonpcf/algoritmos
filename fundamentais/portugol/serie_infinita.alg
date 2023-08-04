Algoritmo "Algoritmo Fundamental Nº 5"
// Disciplina: Algoritmos e Programação de Computadores
// Professor : Gilson Pereira
// Descrição : Cálculo de uma série infinita
// Problema  : Calcular o valor de S, conforme definido
//             pela seguinte série infinita:
//             S = x/1! - (x^3)/3! + (x^5)/5! - (x^7)/7! + ...
// Aplicações: Cálculos matemáticos e estatísticos.

Var
    // Declarações das variáveis
    n, m, i, j, sinal : inteiro
    x, soma, produto : real

Inicio
    // Ler o valor de X
    escreva("Informe o valor de X: ")
    leia(x)
   
    // Ler a quantidade de termos da série
    escreva("Informe a quantidade de termos da série: ")
    leia(n)

    // Configurar as condições iniciais para o primeiro termo,
    // o qual não pode ser calculado iterativamente.
    i <- 1
    soma <- x
    sinal <- 1
   
    // Descobrir o valor de I no último termo
    m <- 2 * n - 1
   
    // Enquanto houver termos a serem calculados faça
    enquanto i < m faca
        // Descobrir o valor de I no termo atual
        i <- i + 2

        // Gerar o termo atual
        produto <- 1
        j <- 0
        enquanto j < i faca
            j <- j + 1
            produto <- produto * x/j
        fimenquanto

        // Adicionar o termo atual, com o sinal apropriado, à soma acumulada
        sinal <- -sinal
        soma <- soma + sinal * produto
    fimenquanto
   
    // Escrever o valor da soma
    escreva("S = ", soma)
Fimalgoritmo
