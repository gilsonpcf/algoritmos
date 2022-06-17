/*
var pessoa = {
	nome : "Paulo Silveira",
	idade : 33,
	email : "paulo.silveira@casadocodigo.com.br"
};
*/

var pessoa = [];

for (var i = 0; i < 5; i++)
{
	pessoa[i] = {
		nome : prompt("Informe seu nome"),
		idade : parseInt(prompt("Informe sua idade")),
		email : prompt("Informe seu e-mail")
	};
}

for (var i = 0; i < 5; i++)
{
	console.log(pessoa[i].nome);
	console.log(pessoa[i].idade);
	console.log(pessoa[i].email);
}
