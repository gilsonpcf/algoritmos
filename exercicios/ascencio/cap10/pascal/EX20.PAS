PROGRAM EX20;
USES CRT;
TYPE REGISTRO = RECORD
idade, filhos: INTEGER;
salario: REAL;
sexo: CHAR;
END;
VAR pessoa: registro;
    media_id, media_sa1, media_sa2: REAL;
    media_fi, maior_sa, soma_sa1, soma_id, soma_fi, media_id2: REAL;
    menor_id, cont1, cont2: REAL;
BEGIN
CLRSCR;
soma_sa1 := 0;
soma_id := 0;
soma_fi := 0;
cont1 := 0;
cont2 := 0;
menor_id := 0;
maior_sa := 0;
WRITE('Digite a idade da pessoa: ');
READLN(pessoa.idade);
WHILE (pessoa.idade > 0) DO
	BEGIN
    	WRITE('Digite a sal rio da pessoa: ');
      	READLN(pessoa.salario);
        REPEAT
           WRITE('Digite o sexo da pessoa (M ou F): ');
           READLN(pessoa.sexo);
           pessoa.sexo := upcase(pessoa.sexo);
        UNTIL (pessoa.sexo = 'F') OR (pessoa.sexo = 'M');
      	WRITE('Digite o n£mero de filhos da pessoa: ');
      	READLN(pessoa.filhos);
      	soma_sa1 := soma_sa1 + pessoa.salario;
      	cont1 := cont1 + 1;
      	soma_fi := soma_fi + pessoa.filhos;
      	IF (pessoa.sexo = 'F') AND (pessoa.salario < 700)
	THEN BEGIN
	     soma_id := soma_id + pessoa.idade;
	     cont2 := cont2 + 1;
	     END;
      	IF (cont1 = 1)
	THEN maior_sa := pessoa.salario
      	ELSE IF (pessoa.salario > maior_sa)
	    	THEN maior_sa := pessoa.salario;
     	IF (cont1 = 1)
	THEN menor_id := pessoa.idade
     	ELSE IF (pessoa.idade < menor_id)
	  	THEN menor_id := pessoa.idade;
        WRITELN;
     	WRITE('Digite a idade da pessoa: ');
     	READLN(pessoa.idade);
    	END;
WRITELN;
IF (cont2 > 0)
THEN media_id2 := soma_id / cont2
ELSE media_id2 := 0;
WRITELN('M‚dia de idade das mulheres com sal rio inferior a R$ 700,00: ',media_id2:5:2);
IF (cont1 > 0)
THEN BEGIN
     media_sa1 := soma_sa1 / cont1;
     media_fi := soma_fi / cont1;
     END
ELSE BEGIN
     media_sa1 := 0;
     media_fi:= 0;
     END;
WRITELN('A m‚dia de sal rios da popula‡Æo ‚: ',media_sa1:5:2);
WRITELN('A m‚dia de filhos da popula‡Æo ‚: ',media_fi:5:2);
WRITELN('O maior sal rio da popula‡Æo ‚: ',maior_sa:5:2);
WRITELN('A menor idade da popula‡Æo ‚: ',menor_id:5:2);
READLN;
END.
