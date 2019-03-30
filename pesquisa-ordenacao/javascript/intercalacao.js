// Pesquisa e ordenação
// Descrição : Intercalação bidirecional
// Problema  : Mesclar dois vetores de inteiros, ambos com seus elementos
               em ordem crescente, em um único vetor ordenado.
// Aplicações: Ordenação, processamento de dados.

var a = [15, 18, 42, 51];
var b = [8, 11, 16, 17, 44, 58, 71, 74];
var c = [];
var tamanho = a.length + b.length;
var i = 0;
var j = 0;

for (var k = 0; k < tamanho; k++) {
    // Compara dois elementos de A e B, e inclui o menor deles em C
    // A condição j == b.length fará com que os elementos restantes
    // de A ou de B sejam copiados para C
    if (a[i] < b[j] || j == b.length) {
        c[k] = a[i];
        i++;
    }
    else {
        c[k] = b[j];
        j++;
    }
}

document.write(c); // Exibe os elementos de C
