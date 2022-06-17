PROGRAM EX14;
USES CRT;
VAR nome: ARRAY[1..5] OF STRING;
        sal: ARRAY[1..5] OF REAL;
     quant: ARRAY[1..5] OF INTEGER;
      i: INTEGER;
      novo_sal: REAL;
BEGIN
CLRSCR;
FOR i := 1 TO 5 DO
	BEGIN
	WRITE('Digite o nome do ',i,'ß funcion†rio ');
        READLN(nome[i]);
        WRITE('Digite o sal†rio do ',i,'ß funcion†rio ');
        READLN(sal[i]);
        WRITE('Digite o tempo de serviáo do ',i,'ß funcion†rio ');
        READLN(quant[i]);
	END;
WRITELN('Primeiro relat¢rio');
WRITELN('Funcion†rios que n∆o ter∆o aumento');
FOR i := 1 TO 5 DO
	BEGIN
	IF (quant[i] <= 5) AND (sal[i] >= 400)
	THEN WRITELN(nome[i]);
	END;
WRITELN('Segundo relat¢rio');
WRITELN('Funcion†rios que ter∆o aumento, com seus novos sal†rios');
FOR i := 1 TO 5 DO
	BEGIN
	IF (quant[i] > 5) OR (sal[i] < 400)
	THEN BEGIN
		IF (quant[i] > 5) AND (sal[i] < 400)
  	        THEN novo_sal := sal[i] + 35/100 * sal[i]
	        ELSE IF (quant[i] > 5)
		     THEN novo_sal := sal[i] + 25/100 * sal[i]
		     ELSE  novo_sal := sal[i] + 15/100 * sal[i];
	WRITELN(nome[i], novo_sal:5:2);
	END;
END;
READLN;
END.
