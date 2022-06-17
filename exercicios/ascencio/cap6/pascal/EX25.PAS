PROGRAM EX25;
USES CRT;
VAR primos: ARRAY[1..10] OF INTEGER;
        i, qtde, num, divi: INTEGER;
BEGIN
CLRSCR;
num := 101;
qtde := 1;
REPEAT
divi := 0;
	FOR i := 1 TO num DO
		BEGIN
		IF num MOD i = 0
		THEN divi := divi + 1;
		END;
	IF divi =  2
	THEN BEGIN
		primos[qtde] := num;
		qtde := qtde + 1;
	          END;
	num := num + 1	;
UNTIL qtde = 11;
WRITELN('Mostrando o vetor dos n£meros primos acima de 100');
FOR  i := 1 TO 10 DO
	BEGIN
	WRITELN(primos[i]);
	END;
READLN;
END.
