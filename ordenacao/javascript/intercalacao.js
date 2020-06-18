// Pesquisa e ordenação
// Descrição : Intercalação de duas vias
// Problema  : Mesclar dois vetores de inteiros, ambos com seus elementos
//             em ordem crescente, em um único vetor ordenado.
// Aplicações: Ordenação, processamento de dados.

var a = [15, 18, 42, 51],
    b = [8, 11, 16, 17, 44, 58, 71, 74],
    c = [];

var m = a.length - 1,
    n = b.length - 1;

var i = 0,
    j = 0,
    k = 0;

while (i <= m && j <= n) {
    // Compara dois elementos de A e B, e inclui o menor deles em C
    if (a[i] < b[j]) {
        c[k] = a[i];
        i++;
    }
    else {
        c[k] = b[j];
        j++;
    }

    k++;
}

// Copia para C os elementos restantes de A
while (i <= m) {
    c[k] = a[i];
    i++;
    k++;
}

// Copia para C os elementos restantes de B
while (j <= n) {
    c[k] = b[j];
    j++;
    k++;
}

document.write(c); // Exibe os elementos de C
