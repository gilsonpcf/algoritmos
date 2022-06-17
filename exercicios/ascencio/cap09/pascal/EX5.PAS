PROGRAM EX5;
USES CRT,STRINGS;
VAR letra : CHAR;
    frase: array[0..200] OF CHAR;
    tam, i : INTEGER;
BEGIN
CLRSCR;
WRITELN('Digite uma frase');
READLN(frase);
STRUPPER(frase);
tam := LENGTH(frase);
FOR i := 0 TO tam DO
	BEGIN
	letra:=frase[i];
	IF (letra = 'A') OR (letra = 'E')
        OR (letra = 'I') OR (letra = 'O') OR (letra = 'U')
	THEN frase[i] := '*';
	END;
WRITELN(frase);
READLN;
END.
