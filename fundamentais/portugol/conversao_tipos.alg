Algoritmo "Algoritmo Fundamental No. 9"
// Disciplina: Algoritmos e Programação de Computadores
// Professor : Gilson Pereira
// Descrição : Conversão de caractere para número
// Problema  : Converter a representação em caractere de um número inteiro
//             para o seu formato decimal convencional.
// Aplicações: Aplicações empresariais, processamento de dados em arquivos.

Var
    // Declarações das variáveis
    sequencia, simbolo : caracter
    i, n, decimal : inteiro
    
Inicio
    escreva("Informe uma sequência de caracteres númerica: ")
    leia(sequencia)

    n <- compr(sequencia)

    decimal <- 0

    para i de 1 ate n faca
        simbolo <- copia(sequencia,i,1)
        decimal <- decimal * 10 + Asc(simbolo) - 48
    fimpara

    escreva("O número decimal correspondente é: ", decimal)
Fimalgoritmo