PROGRAM EX21;
USES CRT;
VAR vet: ARRAY[1..15] OF INTEGER;
    p, i: ARRAY[1..5] OF INTEGER;
    cont, k, poslivre_p, poslivre_i: INTEGER;
BEGIN
CLRSCR;
FOR cont := 1 TO 15 DO
	BEGIN
	WRITE('Digite o ',cont,'§ elemento do vetor  ');
	READLN(vet[cont]);
	END;
poslivre_p := 1;
poslivre_i := 1;
FOR cont := 1 TO 15 DO
	BEGIN
	IF vet[cont] MOD 2 = 0
	THEN BEGIN
		p[poslivre_p] := vet[cont];
		poslivre_p := poslivre_p + 1;
	          END
	ELSE BEGIN
		i[poslivre_i] := vet[cont];
		poslivre_i := poslivre_i + 1;
	           END;
	IF poslivre_p = 6
	THEN BEGIN
                WRITELN('Vetor de pares cheio');
		FOR k := 1 TO (poslivre_p -1) DO
			BEGIN
			WRITELN(p[k]);
			END;
                poslivre_p := 1;
		END;
	IF poslivre_i = 6
	THEN BEGIN
                WRITELN('Vetor de ¡mpares cheio');
                FOR k := 1 TO (poslivre_i -1) DO
			BEGIN
			WRITELN(i[k]);
			END;
		poslivre_i := 1;
	          END;
	END;

IF poslivre_p <> 1
THEN BEGIN
        writeln('Vetor de pares restante');
	FOR k := 1 TO (poslivre_p -1) DO
	BEGIN
	WRITELN(p[k]);
	END;
    END;
IF poslivre_i <> 1
THEN BEGIN
        writeln('Vetor de ¡mpares restante');
	FOR k := 1 TO (poslivre_i -1) DO
	BEGIN
	WRITELN(i[k]);
	END;
    END;
READLN;
END.
