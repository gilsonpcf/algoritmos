// Algoritmo Fundamental Nº 5
// Descrição : Cálculo de uma série infinita
// Problema  : Calcular o valor de S, conforme definido
//             pela seguinte série infinita:
//             S = x/1! - (x^3)/3! + (x^5)/5! - (x^7)/7! + ...
// Aplicações: Cálculos matemáticos e estatísticos.

function fatorial(n) {
    var fator = 1;

    for (var i = 1; i <= n; i++) {
        fator = i * fator;
    }

    return fator;
}

var n = prompt("Número de termos:");
var x = prompt("Valor de x:");

var termo;
var s = 0;
var i = -1;
var sinal = -1;

for (var j = 1; j <= n; j++) {
    i = i + 2;
    sinal = -sinal;
    termo = sinal * Math.pow(x, i) / fatorial(i);
    s = s + termo;
}

document.write("S = " + s);
