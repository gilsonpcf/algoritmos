var string = localStorage.getItem("cadastro");
var pessoas = JSON.parse(string);
console.log(string);

for (var i = 0; i < pessoas.length; i++) {
	console.log(pessoas[i].nome);
	console.log(pessoas[i].idade);
	console.log(pessoas[i].email);
}
