// Pesquisa e ordenação
// Descrição : Ordenação por inserção
// Problema  : Dado um conjunto ordenado aleatoriamente de N inteiros,
//             classificá-los em ordem crescente usando um método de inserção.
// Aplicações: Ordenação onde há conjuntos de dados relativamente pequenos.

var v = [20, 35, 18, 8, 14, 41, 3, 39];
var aux;
var j;

for (var i = 1; i < v.length; i++) {
    aux = v[i];
    j = i;

    while (j > 0 && v[j-1] > aux) {
        v[j] = v[j-1];
        j--;
    }

    v[j] = aux;
}

document.write(v); // Exibe os elementos do vetor
