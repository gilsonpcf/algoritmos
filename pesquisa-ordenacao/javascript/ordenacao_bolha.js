// Pesquisa e ordenação
// Descrição : Ordenação por troca - método da bolha ("bubble sort")
// Problema  : Dado um conjunto ordenado aleatoriamente de N inteiros,
//             classificá-los em ordem crescente usando um método de troca.
// Aplicações: Somente para ordenar dados nos quais uma pequena porcentagem
//             de elementos estão fora de ordem.

var v = [20, 35, 18, 8, 14, 41, 3, 39];
var aux;

for (var i = 0; i < v.length-1; i++) {
    for (var j = 0; j < v.length-1-i; j++) {
        if (v[j] > v[j+1]) {
            aux = v[j];
            v[j] = v[j+1];
            v[j+1] = aux;
        }
    }
}

document.write(v); // Exibe os elementos do vetor
