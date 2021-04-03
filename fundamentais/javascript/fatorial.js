// Algoritmo Fundamental Nº 4
// Descrição : Cálculo do fatorial
// Problema  : Dado um número n, calcular o fatorial de n, onde n >= 0.
// Aplicações: Probabilidade, cálculos estatísticos e matemáticos.

var n = prompt("Número:");
var fator = 1;

for (var i = 1; i <= n; i++) {
    fator = i * fator;
}

document.write("Fatorial = " + fator);
