// Técnica para Vetor Nº 3
// Descrição : Encontrar o maior número em um vetor.
// Problema  : Encontrar o maior número em um conjunto de N números.
// Aplicações: Plotagem, dimensionamento, ordenação.

var v = [7, 3, 1, 5, 9, 0, 2];

var maior = v[0];

for (var i = 1; i < v.length; i++) {
    if (v[i] > maior) {
        maior = v[i];
    }
}

document.write("Maior elemento: " + maior);
