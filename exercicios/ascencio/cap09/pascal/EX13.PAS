PROGRAM EX13;
USES CRT;
VAR palavra, frase, nova, letra: STRING;
    tam, tam2, j, i: INTEGER;
BEGIN
CLRSCR;
WRITELN('Digite uma frase');
READLN(frase);
tam := LENGTH(frase);
nova:='';
palavra:='';
i:=1;
WHILE i<=tam DO
BEGIN
letra:=COPY(frase,i,1);
if (letra <> ' ')
THEN BEGIN
     palavra:=palavra+letra;
     END;
IF (letra = ' ') OR (i = tam)
THEN BEGIN
     tam2:=LENGTH(palavra);
     FOR j:=tam2 DOWNTO 1 DO
     BEGIN
     letra:=COPY(palavra,j,1);
     nova:= nova+letra;
     END;
     IF i <> tam
     THEN nova:=nova+' ';
     palavra:='';
     END;
i:=i+1;
END;
WRITELN('Nova frase = ',nova);
READLN;
END.
