// Algoritmo Fundamental Nº 8
// Descrição : Conversão de base
// Problema  : Converter um número inteiro decimal para a
//             sua representação binária correspondente.
// Aplicações: Interpretação de dados e instruções armazenados em computador.

var n = prompt("Número inteiro decimal:");

var q = n;
var ndigit = 0;
var r;
var binario = [];

do {
	r = q % 2;
    binario[ndigit] = r;
    ndigit = ndigit + 1;
    q = Math.trunc(q / 2);
} while (q != 0);

document.write("Número binário: ");

for (var i = ndigit-1; i >= 0; i--) {
    document.write(binario[i]);
}
