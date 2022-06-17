PROGRAM EX20;
USES CRT;
VAR frase, nova, letra: STRING;
         qtde, tam, i, posi, achou : INTEGER;
BEGIN
CLRSCR;
WRITELN('Digite um nome completo');
READLN(frase);
tam := LENGTH(frase);
achou := 0;
i := 1;
WHILE achou = 0 DO
	BEGIN
	letra := COPY(frase,i,1);
	IF letra <> ' '
	THEN nova := nova + letra
	ELSE achou := 1;
	i := i + 1;
	END;
achou := 0;
qtde := 0;
i := tam;
WHILE achou = 0 DO
	BEGIN
	letra := COPY(frase,i,1);
	IF letra = ' '
	THEN BEGIN
		posi := i;
		achou := 1;
		END;
	i := i - 1;
	END;
i := 1;
WHILE i <= posi - 1 DO
	BEGIN
	letra := COPY(frase,i,1);
	IF letra = ' '
	THEN nova:= nova+' '+COPY(frase,i+1,1)+'.';
	i := i +1;
	END;
nova := nova+' ';
FOR i:=posi+1 TO tam DO
	BEGIN
	nova := nova + COPY(frase,i,1);
	END;
WRITELN(nova);
READLN;
END.
