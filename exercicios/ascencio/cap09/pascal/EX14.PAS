PROGRAM EX14;
USES CRT,STRINGS;
VAR frase, nova, letra: STRING;
    tam,i,qtde: INTEGER;
BEGIN
qtde:=0;
WRITELN('Digite uma frase');
READLN(frase);
tam:=LENGTH(frase);
i:=1;
WHILE i<=tam DO
BEGIN
     letra:=COPY(frase,i,1);
     if letra = ' '
     THEN BEGIN
          nova:= nova+' '+UPCASE(frase[i+1]);
          i := i + 2;
          END
     ELSE BEGIN
          IF i = 1
          THEN letra:=UPCASE(frase[1]);
          nova:=nova+letra;
          i:=i+1;
          END;
END;
WRITELN('Nova frase = ',nova);
READLN;
END.