var string = localStorage.getItem("pessoa");
var pessoa = JSON.parse(string);
console.log(string);

console.log(pessoa.nome);
console.log(pessoa.idade);
console.log(pessoa.email);
