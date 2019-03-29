// Algoritmo Fundamental Nº 8
// Descrição : Conversão de base.
// Problema  : Converter um número inteiro decimal para sua representação
//             binária correspondente.
// Aplicações: Interpretação de instruções e dados armazenados em computador.

var numero = prompt("Informe um número inteiro decimal:");

var q = numero;
var resto = [];
var i = 0;

while (q > 0)
{
    resto[i] = q % 2;
    i++;
    q = Math.floor(q/2);
}

document.write("Número na base decimal: " + numero + "<br>");
document.write("Número na base binária: ");

for (var i = resto.length-1; i >=0; i--) {
    document.write(resto[i]);
}
