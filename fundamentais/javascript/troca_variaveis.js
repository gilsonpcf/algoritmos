// Algoritmo Fundamental Nº 1
// Descrição : Troca dos valores de duas variáveis.
// Problema  : Dadas duas variáveis, trocar os valores atribuídos a elas.
// Aplicações: Algoritmos de ordenação.

var a = prompt("Informe valor para a variável A:");
var b = prompt("Informe valor para a variável B:");
var aux;

aux = a; // Guarda em AUX o valor original de A
a = b;   // Atribui a A o valor original de B
b = aux; // Atribui a B o valor original de A, que está armazenado em AUX

document.write("Novo valor da variável A: " + a + "<br>");
document.write("Novo valor da variável B: " + b);
