PROGRAM EX17;
USES CRT;
VAR frase, palavra_digitada, palavra_frase: STRING;
    tam, i: INTEGER;
BEGIN
CLRSCR;
WRITELN('Digite uma frase');
READLN(frase);
FOR i:=1 TO LENGTH(frase) DO
    frase[i]:=UPCASE(frase[i]);
WRITELN('Digite a palavra para substitui‡ao');
READLN(palavra_digitada);
FOR i:=1 to LENGTH(palavra_digitada) DO
    palavra_digitada[i]:=UPCASE(palavra_digitada[i]);
tam := LENGTH(frase);
i:=1;
WHILE i<= tam DO
BEGIN
	palavra_frase := COPY(frase,i,6);
	if palavra_frase = 'ESCOLA'
	THEN BEGIN
		DELETE(frase,i,6);
		INSERT(palavra_digitada, frase,i);
		END;
	tam := LENGTH(frase);
	i:= i + 1;
	END;
WRITELN(frase);
READLN;
END.
