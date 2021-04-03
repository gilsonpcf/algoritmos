// Algoritmo Fundamental Nº 2
// Descrição : Contagem
// Problema  : Dado um conjunto de n notas de alunos em um exame,
//             fazer uma contagem do número de alunos que foram
//             aprovados no exame. Será considerado aprovado o aluno
//             que tirar nota 50 ou maior (no intervalo de 0 a 100).
// Aplicações: Todas as formas de contagem.

var n = prompt("Número de notas:");
var nota;
var contagem = 0;
var i = 0;

while (i < n) {
    i = i + 1;

    nota = prompt("Nota do aluno:");

    if (nota >= 50) {
        contagem = contagem + 1;
    }
}

document.write("Número de aprovações: " + contagem);
