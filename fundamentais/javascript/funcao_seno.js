// Algoritmo Fundamental Nº 5
// Descrição : Cálculo da função seno.
// Problema  : Calcular o valor da função sen(x) definida pela
//             seguinte expansão em série infinita:
//             sen(x) = x/1! - (x^3)/3! + (x^5)/5! - (x^7)/7! + ...
// Aplicações: Cálculos matemáticos e estatísticos.


// Função para calcular o fatorial (subalgoritmo)

function fatorial(n) {
    var fat = 1;

    for (var i = n; i >= 1; i--) {
	    fat = fat * i;
    }

    return fat;
}

// Algoritmo principal

var x = prompt("Informe o valor de x:");
var n = prompt("Informe o número de termos da série:");

var termo;
var sinal = 1;
var j = 1;
var seno = 0;

for (var i = 1; i <= n; i++) {
    termo = Math.pow(x, j) / fatorial(j); // Usa-se aqui a função fatorial
    seno = seno + sinal * termo;
    sinal = -1 * sinal;
    j = j + 2;
}

document.write("sen(x) = " + seno);
