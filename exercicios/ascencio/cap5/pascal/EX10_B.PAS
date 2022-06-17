PROGRAM EX10;
USES CRT;
VAR cont_time, cont_jog, idade, qtde, total80: INTEGER;
    peso, alt, media_altura, porc, media_idade: REAL;
BEGIN
qtde := 0;
total80 := 0;
cont_time := 1;
WHILE cont_time <=  5 DO
	BEGIN
	media_idade := 0;
	cont_jog :=1;
	WHILE cont_jog <= 11 DO
		BEGIN
		WRITELN('Digite a idade do ',cont_jog,'§ jogador');
		READLN(idade);
		WRITELN('Digite o peso do ',cont_jog,'§ jogador');
                READLN(peso);
		WRITELN('Digite a altura do ',cont_jog,'§ jogador');
 		READLN(alt);
		IF idade < 18
		THEN qtde := qtde + 1;
		media_idade := media_idade + idade;
		media_altura := media_altura + alt;
		IF peso > 80
		THEN total80 := total80 + 1;
		cont_jog := cont_jog + 1;
		END;
	media_idade := media_idade/11;
	WRITELN('M‚dia das idade do ',cont_time,'§ time = ',media_idade:5:2);
	cont_time := cont_time + 1;
	END;
WRITELN('Quantidade de jogadores com idade inferior a 18 anos = ',qtde);
media_altura := media_altura/55;
WRITELN('M‚dia das alturas de todos os jogadores = ',media_altura:5:2);
porc := total80 * 100 / 55;
WRITELN('Porcentagem de jogadores com peso superior a 80 quilos = ',porc:5:2);
READLN;
END.
