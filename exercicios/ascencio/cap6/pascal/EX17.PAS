PROGRAM EX17;
USES CRT;
VAR num: ARRAY[1..6] OF INTEGER;
        i, soma, qtde: INTEGER;
        achou: BOOLEAN;
BEGIN
CLRSCR;
FOR i := 1 TO 6 DO
	BEGIN
	WRITE('Digite o ',i,'ß elemento do vetor ');
	READLN(num[i]);
	END;
soma := 0;
achou := false;
WRITELN('Relat¢rio');
WRITELN;
WRITELN('Os n£meros pares s∆o:');
FOR i := 1 TO 6 DO
	BEGIN
	IF num[i] MOD 2 = 0
	THEN BEGIN
		achou :=true;
		WRITELN('O n£mero ',num[i], ' na posic∆o ',i);
		soma := soma + num[i];
		END;
	END;
IF achou = false
THEN WRITELN('N∆o existe nenhum n£mero par')
ELSE WRITELN('Soma dos n£meros pares = ',soma);
qtde := 0;
achou := false;
WRITELN;
WRITELN('Os n£meros °mpares s∆o:');
FOR i := 1 TO 6 DO
	BEGIN
	IF num[i] MOD 2 <> 0
	THEN BEGIN
		achou := true;
		WRITELN('O n£mero ',num[i], ' na posiá∆o ',i);
		qtde := qtde + 1;
		END;
	END;
IF achou = false
THEN WRITELN('N∆o existe nenhum n£mero °mpar')
ELSE WRITELN('Quantidade de °mpares =  ',qtde);
READLN;
END.
