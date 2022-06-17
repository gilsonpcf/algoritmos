PROGRAM EX10;
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
	palavra := COPY(frase,i,5);
	if palavra = 'ALUNO'
	THEN BEGIN
		DELETE(frase,i,5);
		INSERT('ESTUDANTE',frase,i);
             END;
	tam := LENGTH(frase);
	i:= i + 1;
END;
i:=1;
WHILE i<=tam-5 DO
BEGIN
	palavra := COPY(frase,i,6);
	if palavra = 'ESCOLA'
	THEN BEGIN
		DELETE(frase,i,6);
		INSERT('UNIVERSIDADE',frase,i);
             END;
	tam := LENGTH(frase);
	i:= i + 1;
END;
WRITELN('Nova frase = ',frase);
READLN;
END.
