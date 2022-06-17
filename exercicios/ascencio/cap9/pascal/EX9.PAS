PROGRAM EX9;
USES CRT;
VAR frase, palavra, procura: STRING;
    tam, tam2, i, qtde: INTEGER;
BEGIN
CLRSCR;
WRITELN('Digite uma frase');
READLN(frase);
WRITELN('Digite a palavra');
READLN(palavra);
tam := LENGTH(frase);
tam2 := LENGTH(palavra);
FOR i:=1 TO tam DO
  frase[i]:=UPCASE(frase[i]);
FOR i:=1 TO tam2 DO
  palavra[i]:=UPCASE(palavra[i]);
FOR i:=1 TO tam DO
BEGIN
	procura := COPY(frase,i,tam2);
	if (palavra = procura)
	THEN BEGIN
                IF (i+tam2-1 = tam) OR (COPY(frase,i+tam2,1) = ' ')
                THEN qtde := qtde + 1;
 	     END;
END;
WRITELN('Quantidade de palavra ',palavra,' na frase = ',qtde);
READLN;
END.
