Algoritmo "Algoritmo Fundamental No. 6"
// Disciplina: Algoritmos e Programação de Computadores
// Professor : Gilson Pereira
// Descrição : Geração da sequência de Fibonacci
// Problema  : Gerar e imprimir os N primeiros termos da
//             sequência de Fibonacci, onde N >= 1.
//             Os primeiros termos são: 0, 1, 1, 2, 3, 5, 8, 13, ...
//             Cada termo, além dos dois primeiros, é derivado
//             da soma de seus dois antecessores mais próximos.
// Aplicações: Botânica, teoria da rede elétrica,
//             classificação e pesquisa de dados.

Var
    // Declarações das variáveis
    n, i, a, b, c : inteiro

Inicio
    // Ler o número de termos a serem gerados
    escreva("Informe o número de termos da sequência de Fibonacci: ")
    leia(n)
   
    // Atribuir os dois primeiros números de Fibonacci para A e B,
    // respectivamente, e escrevê-los
    a <- 0
    b <- 1
    escreva(a, ", ", b)
   
    // Inicializar a contagem dos números gerados
    i <- 2
    
    // Enquanto menos que N números de Fibonacci foram gerados faça
    enquanto i < n faca
        // Atualizar a contagem dos números gerados
        i <- i + 1
        
        // Gerar o próximo número de Fibonacci a partir do
        // par de números mais recente, armazenando-o em C
        c <- a + b
        
        // Manter A e B relevantes para o próximo cálculo
        a <- b
        b <- c

        // Escrever o próximo número de Fibonacci
        escreva(", ", c)
    fimenquanto
Fimalgoritmo