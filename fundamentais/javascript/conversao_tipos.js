// Algoritmo Fundamental Nº 9
// Descrição : Conversão de caractere para número
// Problema  : Dada a representação em caracteres de um número inteiro,
//             convertê-la para o seu formato decimal convencional.
// Aplicações: Aplicativos de negócios, processamento de dados.

var numero = prompt("Número inteiro:");
var n = numero.length;
var decimal = 0;
var base = 48;
var digito;

for (var i = 0; i < n; i++) {
    digito = numero.charCodeAt(i) - base;
    decimal = decimal * 10 + digito;
}

document.write("Formato decimal: " + decimal);
