// Algoritmo Fundamental Nº 3
// Descrição : Soma de um conjunto de números
// Problema  : Dado um conjunto de n números, calcular a soma desses números.
//             Assumir que n é maior ou igual a zero.
// Aplicações: Cálculos de média, cálculos de variância e mínimos quadrados.

var n = prompt("Quantidade de números:");
var numero;
var soma = 0;
var i = 0;

while (i < n) {
	i = i + 1;
	numero = parseInt(prompt("Número:"));
	soma = soma + numero;
}

document.write("Soma = " + soma);
