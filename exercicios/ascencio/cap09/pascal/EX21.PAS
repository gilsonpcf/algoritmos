PROGRAM EX21;
USES CRT;
VAR nome, resp, letra : STRING;
       tam, x, i, achou: INTEGER;
BEGIN
CLRSCR;
WRITELN('Digite um nome completo');
READLN(nome);
tam := LENGTH(nome);
achou := 0;
x := 1;
WHILE achou = 0 DO
	BEGIN
	letra := COPY(nome,tam,1);
	IF letra = ' '
	THEN BEGIN
		resp := COPY(nome,tam+1,x);
		achou := 1;
		END
	ELSE BEGIN
		x := x + 1;
		tam := tam - 1;
		END;
END;
resp := resp + ', ';
resp := resp + COPY(nome,1,1) + '. ';
tam :=LENGTH(nome) - x;
FOR i := 1 TO tam DO
	BEGIN
	letra := COPY(nome,i,1);
	IF letra = ' '
	THEN resp := resp + COPY(nome,i+1,1)+'. ';
	END;
WRITELN(resp);
READLN;
END.
