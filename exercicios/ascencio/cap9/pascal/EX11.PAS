PROGRAM EX11;
USES CRT;
VAR frase, nova: STRING;
    palavra: STRING;
    tam, i: INTEGER;
BEGIN
CLRSCR;
WRITELN('Digite uma frase');
READLN(frase);
tam := LENGTH(frase);
FOR i:= 1 TO tam DO
BEGIN
frase[i]:=UPCASE(frase[i]);
END;
i:=1;
WHILE i<=tam-4 DO
BEGIN
	palavra := COPY(frase,i,7);
	if palavra = 'TECLADO'
	THEN BEGIN
		INSERT(' OU MOUSE',frase,i+7);
             END;
	tam := LENGTH(frase);
	i:= i + 1;
END;
WRITELN('Nova frase = ',frase);
READLN;
END.
