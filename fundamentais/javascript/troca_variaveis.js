// Algoritmo Fundamental Nº 1
// Descrição : Troca dos valores de duas variáveis
// Problema  : Dadas duas variáveis, trocar os valores atribuídos a elas.
// Aplicações: Algoritmos de ordenação.

var a = prompt("Valor da variável A:");
var b = prompt("Valor da variável B:");
var aux;

aux = a;
a = b;
b = aux;

document.write("Novo valor da variável A: " + a + "<br>");
document.write("Novo valor da variável B: " + b);
