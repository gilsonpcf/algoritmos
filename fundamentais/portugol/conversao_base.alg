Algoritmo "Algoritmo Fundamental No. 8"
// Disciplina: Algoritmos e Programação de Computadores
// Professor : Gilson Pereira
// Descrição : Conversão de base
// Problema  : Converter um número inteiro decimal para sua
//             representação binária correspondente.
// Aplicações: Interpretação de instruções e dados armazenados em computador.

Var
    // Declarações das variáveis
    n, q, i : inteiro
    r : vetor[1..10] de inteiro

Inicio
   escreva("Informe um número decimal: ")
   leia(n)
   
   q <- n
   i <- 0
   
   enquanto q > 0 faca
      i <- i + 1
      r[i] <- q mod 2
      q <- q div 2
   fimenquanto

   enquanto i > 0 faca
      escreva(r[i])
      i <- i - 1
   fimenquanto
Fimalgoritmo