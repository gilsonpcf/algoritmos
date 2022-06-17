PROGRAM EX2;
USES CRT;
VAR n, i, j: INTEGER;
    e, fat: real;
BEGIN
CLRSCR;
WRITELN('Digite o valor de N');
READLN(n);
e := 1;
FOR i := 1 TO n DO
	BEGIN
	fat := 1;
	FOR j := 1 TO i DO
	    BEGIN
	    fat := fat * j;
	    END;
	e := e + 1/fat;
	END;
WRITELN('Valor de E = ',e:5:2);
READLN;
END.
