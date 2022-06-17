PROGRAM EX19;
USES CRT;
VAR frase, palavra : STRING;
      tam, i : INTEGER;
BEGIN
CLRSCR;
WRITELN('Digite uma frase');
READLN(frase);
tam:= LENGTH(frase);
FOR i:=1 TO tam DO
    frase[i]:=UPCASE(frase[i]);
i:= 1;
WHILE i <= tam DO
	BEGIN
	palavra:= COPY(frase,I,7);
	IF palavra = 'JANEIRO'
	THEN BEGIN
		DELETE(frase,i,7);
		INSERT('01',frase,i);
		tam := LENGTH(frase);
		END;
	IF palavra = 'OUTUBRO'
	THEN BEGIN
		DELETE(frase,i,7);
		INSERT('10',frase,i);
		tam := LENGTH(frase);
		END;
	i := i + 1;
	END;
tam:= LENGTH(frase);
i:= 1;
WHILE i <= tam DO
	BEGIN
	palavra:= COPY(frase,I,9);
	IF palavra = 'FEVEREIRO'
	THEN BEGIN
		DELETE(frase,i,9);
		INSERT('02',frase,i);
		tam := LENGTH(frase);
		END;
	i := i + 1;
	END;
tam:= LENGTH(frase);
i:= 1;
WHILE i <= tam DO
	BEGIN
	palavra:= COPY(frase,I,5);
	IF palavra = 'MAR€O'
	THEN BEGIN
		DELETE(frase,i,5);
		INSERT('03',frase,i);
		tam := LENGTH(frase);
		END;
	IF palavra = 'ABRIL'
	THEN BEGIN
		DELETE(frase,i,5);
		INSERT('04',frase,i);
		tam := LENGTH(frase);
		END;
	IF palavra = 'JUNHO'
	THEN BEGIN
		DELETE(frase,i,5);
		INSERT('06',frase,i);
		tam := LENGTH(frase);
		END;
	IF palavra = 'JULHO'
	THEN BEGIN
		DELETE(frase,i,5);
		INSERT('07',frase,i);
		tam := LENGTH(frase);
		END;
	i := i + 1;
	END;
tam:= LENGTH(frase);
i:= 1;
WHILE i <= tam DO
	BEGIN
	palavra:= COPY(frase,I,4);
	IF palavra = 'MAIO'
	THEN BEGIN
		DELETE(frase,i,4);
		INSERT('05',frase,i);
		tam := LENGTH(frase);
		END;
	i := i + 1;
	END;
tam:= LENGTH(frase);
i:= 1;
WHILE i <= tam DO
	BEGIN
	palavra:= COPY(frase,I,6);
	IF palavra = 'AGOSTO'
	THEN BEGIN
		DELETE(frase,i,6);
		INSERT('08',frase,i);
		tam := LENGTH(frase);
		END;
	i := i + 1;
	END;
tam:= LENGTH(frase);
i:= 1;
WHILE i <= tam DO
	BEGIN
	palavra:= COPY(frase,I,8);
	IF palavra = 'SETEMBRO'
	THEN BEGIN
		DELETE(frase,i,8);
		INSERT('09',frase,i);
		tam := LENGTH(frase);
		END;
	IF palavra = 'NOVEMBRO'
	THEN BEGIN
		DELETE(frase,i,8);
		INSERT('11',frase,i);
		tam := LENGTH(frase);
		END;
	IF palavra = 'DEZEMBRO'
	THEN BEGIN
		DELETE(frase,i,8);
		INSERT('12',frase,i);
		tam := LENGTH(frase);
		END;
	i := i + 1;
	END;
WRITELN(frase);
READLN;
END.
