PROGRAM EX4;
USES CRT;
VAR cont, cod, num_vei, num_acid, soma_vei: INTEGER;
    maior, cid_maior, menor, cid_menor, soma_acid, cont_acid: INTEGER;
    media_vei, media_acid: REAL;
BEGIN
CLRSCR;
soma_vei := 0;
soma_acid := 0;
cont_acid := 0;
FOR cont := 1 TO 5 DO
	BEGIN
	WRITELN('Digite o c¢digo da ',cont,'¦ cidade');
	READLN(cod);
        WRITELN('Digite o n£mero de ve¡culos de passeio da ',cont,'¦ cidade');
        READLN(num_vei);
        WRITELN('Digite o n£mero de acidentes de trƒnsito da ',cont,'¦ cidade');
        READLN(num_acid);
	IF cont = 1
	THEN BEGIN
		maior := num_acid;
		cid_maior := cod;
		menor := num_acid;
		cid_menor := cod;
	  	END
	ELSE BEGIN
		IF num_acid > maior
		THEN BEGIN
			maior := num_acid;
			cid_maior := cod;
		   	END;
		IF num_acid < menor
		THEN BEGIN
			menor := num_acid;
			cid_menor := cod;
		   	END;
		END;
	soma_vei := soma_vei + num_vei;
	IF num_vei < 2000
	THEN BEGIN
		soma_acid := soma_acid + num_acid;
		cont_acid := cont_acid + 1;
		END;
	END;
WRITELN('Maior n£mero de acidentes = ', maior, ' na cidade de c¢digo = ',cid_maior);
WRITELN('Menor n£mero de acidentes = ', menor, ' na cidade de c¢digo = ',cid_menor);
media_vei := soma_vei/5;
WRITELN('M‚dia de acidentes nas 5 cidades = ',media_vei:5:2);
IF cont_acid = 0
THEN WRITELN('Nao foi digitada nenhuma cidade com menos de 2000 ve¡culos')
ELSE BEGIN
	media_acid := soma_acid/cont_acid;
	WRITELN('M‚dia de acidentes nas cidades com menos de 2000 ve¡culos = ',media_acid:5:2);
	END;
READLN
END.
