// Pesquisa e ordenação
// Descrição : Pesquisa sequencial
// Problema  : Dado um elemento x e um conjunto de dados,
//             verifique se x está ou não presente no conjunto.

var v = [10, 12, 20, 23, 27, 30, 31, 39, 42, 44, 45, 49, 57, 63, 70];

var x = prompt("Informe o número a ser pesquisado:");

for (var i = 0; i < v.length; i++) {
    if (x == v[i]) {
        break;
    }
}

if (x == v[i]) {
    document.write("O número " + x + " está na posição " + i);
}
else {
    document.write("O número " + x + " não está no vetor.");
}
