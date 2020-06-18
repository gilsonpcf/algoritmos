// Pesquisa e ordenação
// Descrição : Ordenação por seleção
// Problema  : Dado um conjunto ordenado aleatoriamente de N inteiros,
//             classificá-los em ordem crescente usando a ordenação por seleção.
// Aplicações: Ordenação apenas de pequenas quantidades de dados.

var v = [20, 35, 18, 8, 14, 41, 3, 39];

var menor
var posicao; // Posição do menor elemento no vetor

for (var i = 0; i < v.length-1; i++) {
    menor = v[i];
    posicao = i;
	
    for (var j = i+1; j < v.length; j++) {
        if (v[j] < menor) {
            menor = v[j];
            posicao = j;
        }
    }
	
    v[posicao] = v[i];
    v[i] = menor;
}

document.write(v); // Exibe os elementos do vetor
