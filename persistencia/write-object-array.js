var n = parseInt(prompt("Quantidade de pessoas"));
var pessoas = [];

for (var i = 0; i < n; i++) {
	pessoas[i] = {
		nome : prompt("Nome"),
		idade : parseInt(prompt("Idade")),
		email : prompt("E-mail")
	}
}

localStorage.setItem("cadastro", JSON.stringify(pessoas));
