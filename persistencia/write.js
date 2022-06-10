var nome = prompt("Nome");
var idade = parseInt(prompt("Idade"));
var email = prompt("E-mail");

localStorage.setItem("nomePessoa", nome);
localStorage.setItem("idadePessoa", idade);
localStorage.setItem("emailPessoa", email);
