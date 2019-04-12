var tipo;
var compra;
var venda;
var resultado;
var contLucro = 0;
var contPreju = 0;
var total = 0;

while (tipo != "F") {
	tipo = prompt("Informe o tipo da ação");
	
	if (tipo == "F") {
		break;
	}
	
	compra = parseFloat(prompt("Informe o preço de compra"));
	venda = parseFloat(prompt("Informe o preço de venda"));
	
	resultado = venda - compra;
	total = total + resultado;
	
	document.write("Tipo da ação: " + tipo + "<br>");
	document.write("Resultado: " + resultado + "<br>");
	
	if (resultado > 0) {
		document.write("Lucro<br><br>");
		contLucro++;
	}

	if (resultado < 0) {
		document.write("Prejuízo<br><br>");
		contPreju++;
	}
}

document.write("Qtd. de ações com lucro: " + contLucro + "<br>");
document.write("Qtd. de ações com prejuízo: " + contPreju + "<br>");
document.write("Resultado total: " + total + "<br>");

if (total > 0) {
	document.write("Lucro<br><br>");
}

if (total < 0) {
	document.write("Prejuízo<br><br>");
}
