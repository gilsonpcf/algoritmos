// Definição das dimensões da matriz
var x = parseInt(prompt("Linhas (altura)"));
var y = parseInt(prompt("Colunas (largura)"));
var z = parseInt(prompt("Profundidade"));

// Definição da matriz e inicialização com valores
var m = [];

for (var i = 0; i < x; i++) {
    m[i] = [];
    
    for (var j = 0; j < y; j++) {
        m[i][j] = [];

        for (var k = 0; k < z; k++) {
            m[i][j][k] = parseInt(prompt("Valor da posicao (" + i + ", " + j + ", " + k + ")"));
        }
    }
}

// Exibição dos valores da matriz
for (var i = 0; i < x; i++) {
    for (var j = 0; j < y; j++) {
        for (var k = 0; k < z; k++) {
            document.write("Valor da posicao (" + i + ", " + j + ", " + k + "): " + m[i][j][k] + "<br>");
        }
    }
}