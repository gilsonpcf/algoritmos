PROGRAM EX4;
USES CRT;
VAR  frase,letra: STRING;
     letras:ARRAY[1..26] OF STRING;
     rep: ARRAY[1..26] OF INTEGER;
     qtde, tam1, i, j, achou: INTEGER;
BEGIN
CLRSCR;
FOR  i := 1 TO 26 DO
rep[i] := 0;
FOR  i := 1 TO 26 DO
letras[i] := '';
WRITELN('Digite uma frase ');
READLN(frase);
tam1 := LENGTH(frase);
qtde:=0;
achou:=0;
FOR  i := 1 TO tam1 DO
BEGIN
     letra := COPY(frase,i,1);
     IF letra <> ' '
     THEN BEGIN
          IF qtde <> 0
          THEN BEGIN
               FOR j := 1 TO qtde DO
               BEGIN
                    IF letras[j] = letra
                    THEN achou:= 1;
               END;
               END;
     IF achou = 0
          THEN BEGIN
               achou:=1;
               FOR j := i+1 TO tam1 DO
                   BEGIN
                   IF letra = COPY(frase,j,1)
	           then achou:=achou + 1;
	           END;
               IF achou > 1
               THEN BEGIN
                    qtde:=qtde+1;
                    letras[qtde] := letra;
                    rep[qtde]:= achou;
                    END;
               END;
   END;
achou:=0;
END;
FOR i := 1 TO QTDE DO
BEGIN
WRITELN('A letra ', LETRAS[i], ' apareceu ', rep[i],' vezes');
END;
IF qtde = 0
THEN WRITELN('Nenhuma letra foi repetida');
READLN;
END.
