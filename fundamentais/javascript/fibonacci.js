// Algoritmo Fundamental Nº 6
// Descrição : Geração da sequência de Fibonacci
// Problema  : Gerar e imprimir os n primeiros termos da sequência
//             de Fibonacci, onde n >= 1. Os primeiros termos são:
//             0, 1, 1, 2, 3, 5, 8, 13, ...
//             Cada termo, além dos dois primeiros, é derivado da
//             soma de seus dois antecessores mais próximos.
// Aplicações: Botânica, teoria das redes elétricas, ordenação e pesquisa.

var n = prompt("Número de termos:");

var a = 0;
var b = 1;
var i = 2;
var c;

if (n == 1) {
    document.write(a);
} else {
    document.write(a + ", " + b);
}

while (i < n) {
	i = i + 1;
    c = a + b;
    document.write(", " + c);
    a = b;
    b = c;
}
