PROGRAM EX20;
USES CRT;
VAR vet: ARRAY[1..5] OF REAL;
        i, cod: INTEGER;
BEGIN
CLRSCR;
FOR i := 1 TO 5 DO
	BEGIN
	WRITE('Digite o ',i,'§ elemento do vetor  ');
	READLN(vet[i]);
	END;
WRITELN('Digite 0 para finalizar');
WRITELN('Digite 1 para ver o vetor em ordem direta');
WRITELN('Digite 2 para ver o vetor em ordem inversa');
READLN(cod);
IF cod = 0
THEN WRITELN('Fim');
IF cod = 1
THEN BEGIN
	 WRITELN('Imprimindo o vetor em ordem direta');
	 FOR i := 1 TO 5 DO
		BEGIN
		WRITE(vet[i]:5:2, '  ');
		END;
	END;
IF cod = 2
THEN BEGIN
 	 WRITELN('Imprimindo o vetor em ordem direta');
	 FOR i := 5 DOWNTO 1 DO
		BEGIN
		WRITE(vet[i]:5:2,'  ');
		END;
	END;
IF (cod < 0) OR (cod > 2)
THEN WRITELN('C¢digo inv lido');
READLN;
END.
