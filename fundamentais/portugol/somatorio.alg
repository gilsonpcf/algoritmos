Algoritmo "Algoritmo Fundamental Nº 3"
// Disciplina: Algoritmos e Programação de Computadores
// Professor : Gilson Pereira
// Descrição : Soma de um conjunto de números
// Problema  : Dado um conjunto de N números, calcular a soma desses números.
//             Assumir que N é maior ou igual a zero.
// Aplicações: Cálculos de média, variância e mínimos quadrados.

Var
    // Declarações das variáveis
    n, i: inteiro
    numero, soma : real

Inicio
    // Ler a quantidade de números a serem somados
    escreva("Informe a quantidade de números: ")
    leia(n)
   
    // Inicializar a soma com zero
    soma <- 0
   
    i <- 0
    // Enquanto menos que N números foram somados faça repetidamente
    enquanto i < n faca
        i <- i + 1
       
        // Ler o próximo número
        escreva("Informe o número: ")
        leia(numero)
       
        // Calcular o valor atual da soma, adicionando
        // o número lido ao valor mais recente da soma
        soma <- soma + numero
    fimenquanto
   
    // Escrever a soma dos N números
    escreva("A soma dos ", n, " números é ", soma)
Fimalgoritmo