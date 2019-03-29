// Algoritmo Fundamental Nº 9
// Descrição : Conversão de caractere para número.
// Problema  : Converter a representação em caractere de um número inteiro
//             para o seu formato decimal convencional.
// Aplicações: Aplicações empresariais, processamento de dados em arquivos.

var texto = prompt("Informe uma sequência de caracteres númerica:");
var caractere;
var codigo;
var valor;
var numero = 0;

for (var i = 0; i < texto.length; i++) {
    caractere = texto.charAt(i);
    codigo = caractere.charCodeAt();
    valor = codigo - 48;
    numero = numero * 10 + valor;
}

document.write("O número decimal correspondente é: " + numero);
