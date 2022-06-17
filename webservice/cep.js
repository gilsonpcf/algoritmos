var cep = prompt("Informe um CEP (somente números)");

var xmlhttp = new XMLHttpRequest();
var url = "https://viacep.com.br/ws/" + cep + "/json/";

xmlhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
        var endereco = JSON.parse(this.responseText);
        console.log(endereco.logradouro + ", " + endereco.bairro);
    }
};

xmlhttp.open("GET", url, true);
xmlhttp.send();