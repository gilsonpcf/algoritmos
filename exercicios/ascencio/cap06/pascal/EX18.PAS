PROGRAM EX18;
USES CRT;
VAR dado: ARRAY[1..20] OF INTEGER;
        i, num1, num2, num3, num4, num5, num6: INTEGER;
BEGIN
CLRSCR;
FOR i := 1 TO 20 DO
	BEGIN
	WRITE('Digite o n£mero sorteado no dado na ',i,'¶ jogada ');
	READLN(dado[i]);
	WHILE (dado[i] < 1) OR (dado[i] > 6) DO
		BEGIN
		WRITELN('Este n∆o Ç um n£mero v†lido, digite novamente o valor sorteado ');
		READLN(dado[i]);
		END;
	END;
WRITELN('Listagem dos n£meros sorteados ');
FOR i := 1 TO 20 DO
	BEGIN
	WRITE(dado[i],'  ');
	END;
READLN;
WRITELN;
num1 := 0;
num2 := 0;
num3 := 0;
num4 := 0;
num5 := 0;
num6 := 0;
FOR i := 1 TO 20 DO
	BEGIN
	IF dado[i] = 1
	THEN num1 := num1 + 1;
	IF dado[i] = 2
	THEN num2 := num2 + 1;
	IF dado[i] = 3
	THEN num3 := num3 + 1;
	IF dado[i] = 4
	THEN num4 := num4 + 1;
	IF dado[i] = 5
	THEN num5 := num5 + 1;
	IF dado[i] = 6
	THEN num6 := num6 + 1;
	END;
CLRSCR;
WRITELN('O n£mero 1 foi sorteado ',num1, ' vezes');
WRITELN('O n£mero 2 foi sorteado ',num2, ' vezes');
WRITELN('O n£mero 3 foi sorteado ',num3, ' vezes');
WRITELN('O n£mero 4 foi sorteado ',num4, ' vezes');
WRITELN('O n£mero 5 foi sorteado ',num5, ' vezes');
WRITELN('O n£mero 6 foi sorteado ',num6, ' vezes');
READLN;
END.
