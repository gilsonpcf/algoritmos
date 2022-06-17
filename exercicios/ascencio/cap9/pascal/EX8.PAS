PROGRAM EX8;
USES CRT;
VAR frase,palavra: STRING;
    tam, i, qtde: INTEGER;
BEGIN
CLRSCR;
WRITELN('Digite uma frase');
READLN(frase);
tam := LENGTH(frase);
FOR i:=1 TO tam DO
  frase[i]:=UPCASE(frase[i]);
FOR i:=1 TO tam DO
BEGIN
	palavra := COPY(frase,i,4);
	if (palavra = 'AULA')
	THEN BEGIN
                IF (i+3 = tam) OR (COPY(frase,i+4,1) = ' ')
                THEN qtde := qtde + 1;
 	     END;
END;
WRITELN('Quantide de palavra AULA na frase = ',qtde);
READLN;
END.
