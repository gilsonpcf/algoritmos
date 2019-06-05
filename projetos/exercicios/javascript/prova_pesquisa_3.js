var habitantes = JSON.parse(localStorage.getItem("habitantes"));

for (var i = 0; i < habitantes.length; i++) {
	document.write(habitantes[i].idade + " - " +
		habitantes[i].sexo + " - " +
		habitantes[i].salario + " - " +
		habitantes[i].filhos  + "<br>")
}
