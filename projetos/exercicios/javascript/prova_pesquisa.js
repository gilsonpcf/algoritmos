// Algoritmo Principal

var idade = [];
var sexo = [];
var salario = [];
var filhos = [];

entradaDeDados();
document.write("Média dos salários:" + media(salario));
document.write("Menor idade:" + menorIdade(idade));
document.write("Menor idade:" + maiorIdade(idade));
document.write("Qtd. de mulheres:" + mulheres(sexo, filhos, salario));


// Funções

// Entrada de dados
function entradaDeDados() {
	for (var i = 0; i < 15; i++) {
		idade[i] = parseInt(prompt("Informe a idade"));
		sexo[i] = prompt("Informe o sexo");
		salario[i] = parseFloat(prompt("Informe o salário"));
		filhos[i] = parseInt(prompt("Informe o número de filhos"));
	}
}

// Média dos salários
function media(v) {
	var soma = 0;

	for (var i = 0; i < v.length; i++) {
		soma = soma + v[i];
	}

	var media = soma / v.length;
	
	return media;
}

// Menor idade
function menorIdade(v) {
	var menor = v[0];

	for (var i = 1; i < v.length; i++) {
		if (v[i] < menor) {
			menor = v[i];
		}
	}
	
	return menor;
}

// Maior idade
function maiorIdade(v) {
	var maior = v[0];

	for (var i = 1; i < v.length; i++) {
		if (v[i] > maior) {
			maior = v[i];
		}
	}
	
	return maior;
}

// Mulheres com 3 filhos que ganham mais de R$ 500,00
function mulheres(sx, fl, sl) {
	var cont = 0;

	for (var i = 0; i < sx.length; i++) {
		if (sx[i] == "F" && fl[i] == 3 && sl[i] <= 500) {
			cont = cont + 1;
		}
	}
	
	return cont;
}