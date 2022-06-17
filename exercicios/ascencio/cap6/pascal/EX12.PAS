PROGRAM EX12;
USES CRT;
VAR consumo: ARRAY[1..5] OF REAL;
        menor_cons, valor: REAL;
        menor_vei,i: INTEGER;
        veiculo: ARRAY[1..5] OF STRING;
       descr: STRING;
BEGIN
CLRSCR;
FOR i:=1 TO 5 DO
BEGIN
        WRITE('Digite o modelo do ',i, '§ ve¡culo ');
	READLN(veiculo[i]);
	WRITE('Digite o consumo de combust¡vel do ',i, '§ ve¡culo ');
	READLN(consumo[i]);
	IF (i = 1)
	   THEN BEGIN
                menor_cons := consumo[i];
                menor_vei := i;
	   	END
	ELSE BEGIN
	   	IF (consumo[i] > menor_cons)
		THEN BEGIN
                          menor_cons := consumo[i];
		          menor_vei := i;
		         END;
	         END;
	valor := 1000 / consumo[i];
	WRITELN('O ',veiculo[i],'  gastaria ', valor:5:2,' litro(s) para percorrer 1000 Km');
	READLN;
  END;
  WRITELN('O ',veiculo[menor_vei], ' apresentou o menor consumo: ', menor_cons:5:2);
  READLN;
END.
