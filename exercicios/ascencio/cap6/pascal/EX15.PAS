PROGRAM EX15;
USES CRT;
VAR vet1: ARRAY[1..10] OF INTEGER;
        vet2: ARRAY[1..5] OF INTEGER;
        i, j: INTEGER;
        achou: BOOLEAN;
BEGIN
CLRSCR;
FOR i := 1 TO 10 DO
	BEGIN
        WRITE('Digite o ',i,'§ elemento do vetor 1  ');
        READLN(vet1[i]);
	END;
FOR j := 1 TO 5 DO
	BEGIN
	WRITE('Digite o ',j,'§ elemento do vetor 2  ');
	READLN(vet2[j]);
	END;
FOR i := 1 TO 10 DO
	BEGIN
	achou := false;
	WRITELN('N£mero ',vet1[i]);
	FOR j := 1 TO 5 DO
		BEGIN
		IF vet1[i] MOD vet2[j] = 0
		THEN BEGIN
                     WRITELN('Divis¡vel por ',vet2[j], ' na posi‡Æo ',j);
	             achou := true;
	           END;
		END;
        IF achou = false
	THEN WRITELN('NÆo ‚ divis¡vel por nenhum n£mero do segundo vetor');
        READLN;
	END;
END.
