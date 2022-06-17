PROGRAM EX13;
USES CRT;
VAR  vet:ARRAY[1..10] OF INTEGER;
         achou: BOOLEAN;
         i: INTEGER;
BEGIN
CLRSCR;
FOR i := 1 TO 10 DO
	BEGIN
	WRITE('Digite o ',i,'§ elemento do vetor ');
	READLN(vet[i]);
	END;
achou := false;
FOR i := 1 TO 10 DO
	BEGIN
	IF vet[i] > 50
	THEN BEGIN
		WRITELN('N£mero ',vet[i],' na posi‡Æo ', i);
		achou := true;
           END;
	END;
IF achou = false
THEN WRITELN('NÆo existe nenhum n£mero superior a 50 no vetor');
READLN;
END.
