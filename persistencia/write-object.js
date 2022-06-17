var pessoa = {
		nome : prompt("Nome"),
		idade : parseInt(prompt("Idade")),
		email : prompt("E-mail")
	}

localStorage.setItem("pessoa", JSON.stringify(pessoa));
