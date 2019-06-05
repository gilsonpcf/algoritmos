var habitantes = [];

for (var i = 0; i < 2; i++) {
	habitantes[i] = {
		idade : parseInt(prompt("Informe a idade")),
		sexo : prompt("Informe o sexo"),
		salario : parseFloat(prompt("Informe o salário")),
		filhos : parseInt(prompt("Informe o número de filhos"))
	}
}

localStorage.setItem("habitantes", JSON.stringify(habitantes));
