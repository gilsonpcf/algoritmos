Algoritmo "Algoritmo Fundamental N� 4"
// Disciplina: Algoritmos e Programa��o de Computadores
// Professor : Gilson Pereira
// Descri��o : C�lculo do fatorial
// Problema  : Dado um n�mero N, calcular o fatorial de N (escrito como N!),
//             onde N >= 0.
// Aplica��es: Probabilidade, c�lculos estat�sticos e matem�ticos.

Var
    // Declara��es das vari�veis
    n, i, p : inteiro

Inicio
    // Ler o n�mero N cujo fatorial ser� calculado
    escreva("Informe o valor de N: ")
    leia(n)
   
    // Inicializar o produto com 1 (caso especial 0!)
    p <- 1
   
    // Inicializar o contador de produtos com zero
    i <- 0
   
    // Enquanto menos que N produtos foram calculados fa�a repetidamente
    enquanto i < n faca
        // Incrementar o contador de produtos
        i <- i + 1
      
        // Calcular o valor atual do produto, multiplicando
        // o contador pelo o valor mais recente do produto
        p <- p * i
    fimenquanto
   
    // Escrever o produto (resultado de N!)
    escreva("O fatorial de ", n, " � ", p)
Fimalgoritmo