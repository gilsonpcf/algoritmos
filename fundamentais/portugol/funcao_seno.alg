Algoritmo "Algoritmo Fundamental N� 5"
// Disciplina: Algoritmos e Programa��o de Computadores
// Professor : Gilson Pereira
// Descri��o : C�lculo da fun��o seno
// Problema  : Calcular o valor da fun��o sen(x) definida
//             pela seguinte expans�o em s�rie infinita:
//             sen(x) = x/1! - (x^3)/3! + (x^5)/5! - (x^7)/7! + ...
// Aplica��es: C�lculos matem�ticos e estat�sticos.

Var
    // Declara��es das vari�veis
    n, m, i, j, sinal : inteiro
    x, soma, produto : real

Inicio
    // Ler o valor de X
    escreva("Informe o valor de X: ")
    leia(x)
   
    // Ler a quantidade de termos da s�rie
    escreva("Informe a quantidade de termos da s�rie: ")
    leia(n)

    // Configurar as condi��es iniciais para o primeiro termo,
    // o qual n�o pode ser calculado iterativamente.
    i <- 1
    soma <- x
    sinal <- 1
   
    // Descobrir o valor de I no �ltimo termo
    m <- 2 * n - 1
   
    // Enquanto houver termos a serem calculados fa�a
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

        // Adicionar o termo atual, com o sinal apropriado, � soma acumulada
        sinal <- -sinal
        soma <- soma + sinal * produto
    fimenquanto
   
    // Escrever o valor da soma
    escreva("sen(", x, ") = ", soma)
Fimalgoritmo