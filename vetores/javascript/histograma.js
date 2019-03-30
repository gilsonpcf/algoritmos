// Técnica para Vetor Nº 2
// Descrição : Contagem com vetor (histograma).
// Problema  : Dado um conjunto de N notas de um exame, fazer uma contagem
//             do número de alunos que obtiveram cada nota possível
//             (no intervalo de 0 a 100).
// Aplicações: Análise estatística.

var cont = []; // Vetor de contadores
var nota;
var n = prompt("Informe a quantidade de notas:");

// Inicializa todos os contadores (notas de 0 a 100)
for (var i = 0; i <= 100; i++) {
    cont[i] = 0;
}

// Lê as notas dos n alunos
for (var i = 1; i <= n; i++) {
    nota = prompt("Informe a nota (0 a 100) do aluno " + i + ": ");
	cont[nota]++; // Incrementa o contador da nota
}

// Exibe a distribuição de frequência das notas
for (var i = 0; i < cont.length; i++) {
    if (cont[i] != 0) {
	    document.write("Nota: " + i + " - Quantidade: " + cont[i] + "<br>");
	}
}
