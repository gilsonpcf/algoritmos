Algoritmo "Algoritmo Fundamental No. 7"
// Disciplina: Algoritmos e Programação de Computadores
// Professor : Gilson Pereira
// Descrição : Inversão dos dígitos de um número inteiro
// Problema  : Inverter a ordem dos dígitos de um número inteiro positivo.
// Aplicações: Hashing (espalhamento) e recuperação de informação,
//             aplicações de banco de dados.

Var
    // Declarações das variáveis
    n, inv, d : inteiro

Inicio
    // Ler o número inteiro positivo a ser invertido
    escreva("Informe um número inteiro positivo: ")
    leia(n)
    
    // Inicializar o número inteiro invertido
    inv <- 0
    
    // Enquanto o número que está sendo invertido for maior que zero faça
    enquanto n > 0 faca
        // Usar a função mod (resto) para extrair o dígito
        // mais à direita do número que está sendo invertido
        d <- n mod 10
        
        // Aumentar o inteiro invertido multiplicando-o por 10 e
        // adicionando o dígito extraído mais recentemente
        inv <- inv * 10 + d
        
        // Usar a divisão inteira (div) por 10 para remover o
        // dígito mais à direita do número que está sendo invertido
        n <- n div 10
    fimenquanto
    
    // Escrever o número invertido
    escreva("Número invertido: ", inv)
Fimalgoritmo