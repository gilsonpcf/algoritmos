PROGRAM EX24;
USES CRT;
VAR a, repetidos, vezes: ARRAY[1..10] OF INTEGER;
    i, j, qtde, cont, cont_r : INTEGER;
BEGIN
CLRSCR;
FOR i := 1 TO 10 DO
	BEGIN
	WRITE('Digite o ',i,'§ n£mero do vetor ');
	READLN(a[i]);
	END;
cont_r := 1;
FOR i := 1 TO 10 DO
	BEGIN
	qtde := 1;
	FOR j := 1 TO 10 DO
	    BEGIN
	    IF i <> j
	    THEN IF a[i] = a[j]
                   THEN qtde := qtde + 1;
	    END;
        IF qtde > 1
        THEN BEGIN
             cont := 1;
	     WHILE ((cont < cont_r) AND (a[i] <> repetidos[cont])) do
             BEGIN
              cont := cont + 1;
             END;
             IF cont = cont_r
             THEN BEGIN
              	  repetidos[cont_r] := a[i];
                  vezes[cont_r] := qtde;
                  cont_r := cont_r + 1;
		  END;
	     END;
        END;
	FOR i := 1 TO cont_r - 1  DO
	WRITELN('O n£mero ',repetidos[i], ' apareceu ',vezes[i],' vezes');
READLN;
END.
