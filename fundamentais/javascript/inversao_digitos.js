// Algoritmo Fundamental Nº 7
// Descrição : Inversão dos dígitos de um número inteiro
// Problema  : Inverter a ordem dos dígitos de um número inteiro positivo.
// Aplicações: Hashing e recuperação de informação, aplicativos de banco
//             de dados.

var n = prompt("Número inteiro positivo:");

var invertido = 0;
var d;

while (n > 0) {
    d = n % 10;
    invertido = invertido * 10 + d;
    n = Math.trunc(n / 10);
}

document.write("Número invertido: " + invertido);
