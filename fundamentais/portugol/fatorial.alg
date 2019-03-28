Algoritmo "Algoritmo Fundamental Nº 4"
// Disciplina: Algoritmos e Programação de Computadores
// Professor : Gilson Pereira
// Descrição : Cálculo do fatorial
// Problema  : Dado um número N, calcular o fatorial de N (escrito como N!),
//             onde N >= 0.
// Aplicações: Probabilidade, cálculos estatísticos e matemáticos.

Var
    // Declarações das variáveis
    n, i, p : inteiro

Inicio
    // Ler o número N cujo fatorial será calculado
    escreva("Informe o valor de N: ")
    leia(n)
   
    // Inicializar o produto com 1 (caso especial 0!)
    p <- 1
   
    // Inicializar o contador de produtos com zero
    i <- 0
   
    // Enquanto menos que N produtos foram calculados faça repetidamente
    enquanto i < n faca
        // Incrementar o contador de produtos
        i <- i + 1
      
        // Calcular o valor atual do produto, multiplicando
        // o contador pelo o valor mais recente do produto
        p <- p * i
    fimenquanto
   
    // Escrever o produto (resultado de N!)
    escreva("O fatorial de ", n, " é ", p)
Fimalgoritmo