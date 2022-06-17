PROGRAM EX5;
USES CRT;
VAR i, x, j, num_termos, fim,denominador: INTEGER;
    s: REAL;
BEGIN
CLRSCR;
WRITELN('Digite o n£mero de termos da seqÅància ');
READLN(num_termos);
WRITELN('Digite o valor de X');
READLN(x);
s := 0;
denominador := 1;
i := 1;
WHILE  i <= num_termos DO
	BEGIN
	IF denominador <> 1
	THEN BEGIN
		   fim := denominador;
		   denominador := 1;
		   FOR j := 1 TO fim DO
			BEGIN
                           	denominador := denominador * j;
			END;
	         END;
	IF i MOD 2 = 0
	THEN   s := s + (EXP((i+1) * LN(x))/denominador)
	ELSE   s := s - (EXP((i+1) * LN(x))/denominador);
	IF i = 4
	THEN  denominador := 1
	ELSE  denominador := denominador + 1;
	i := i + 1;
	END;
WRITELN('Valor de S = ',s:5:2);
READLN;
END.
