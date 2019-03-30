// Técnica para Vetor Nº 4
// Descrição : Remoção de duplicatas de um vetor ordenado.
// Problema  : Remover todas as duplicatas de um vetor ordenado
//             e comprimi-lo adequadamente.
// Aplicações: Problemas de compressão de dados e de processamento de texto.

var v = [2, 2, 8, 15, 23, 23, 23, 23, 26, 29, 30, 32, 32];
var j = 1; // Contador de elementos não repetidos

for (var i = 1; i < v.length; i++) {
    if (v[i-1] != v[i]) {
        j++;
        v[j-1] = v[i];
    }
}

v.splice(j); // Remove os elementos restantes do vetor, a partir da posição j

document.write(v); // Exibe os elementos do vetor
