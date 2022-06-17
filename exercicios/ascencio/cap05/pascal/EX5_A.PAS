PROGRAM EX5;
USES CRT;
VAR fim,i,j,x,expoente,num_termos,den,denominador: INTEGER;
    fat,s: REAL;
BEGIN
CLRSCR;
WRITELN('Digite o n£mero de termos da seqÅància ');
READLN(num_termos);
WRITELN('Digite o valor de X');
READLN(x);
s := 0;
denominador := 1;
FOR i := 1 TO num_termos DO
BEGIN
   fim := denominador;
   fat := 1;
   FOR j := 1 TO fim DO
	BEGIN
       	fat := fat * j;
	END;
expoente := i + 1;
IF expoente MOD 2 = 0
THEN   s := s - (EXP((expoente) * LN(x))/fat)
ELSE   s := s + (EXP((expoente) * LN(x))/fat);
IF denominador = 4
THEN  den := -1;
IF denominador = 1
THEN den := 1;
IF den = 1
THEN denominador := denominador + 1
ELSE denominador := denominador - 1;
END;
WRITELN('Valor de S = ',s:5:2);
READLN;
END.
