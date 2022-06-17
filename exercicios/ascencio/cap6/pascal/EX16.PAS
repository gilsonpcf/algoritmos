PROGRAM EX16;
USES CRT;
VAR vet1: ARRAY[1..10] OF INTEGER;
        vet2: ARRAY[1..5] OF INTEGER;
        vet_result1: ARRAY[1..10] OF INTEGER;
        vet_result2: ARRAY[1..10] OF INTEGER;
        i, j, poslivre1, poslivre2, soma: INTEGER;
BEGIN
CLRSCR;
FOR i := 1 TO 10 DO
	BEGIN
	WRITE('Digite o ',i,'§ elemento do vetor 1  ');
        READLN(vet1[i]);
	END;
FOR j := 1 TO 5 DO
	BEGIN
	WRITE('Digite o ',j,'§ elemento do vetor 2  ');
	READLN(vet2[j]);
	END;
poslivre1 := 1;
poslivre2 := 1;
FOR i := 1 TO 10 DO
	BEGIN
	soma := vet1[i];
	FOR j := 1 TO 5 DO
		BEGIN
		soma := soma + vet2[j];
		END;
	IF soma MOD 2 = 0
	THEN BEGIN
		 vet_result1[poslivre1] :=soma;
		 poslivre1 := poslivre1 + 1;
	           END
	ELSE BEGIN
		 vet_result2[poslivre2] :=soma;
		 poslivre2 := poslivre2 + 1;
	          END;
	END;
WRITELN('Imprimindo o vetor resultante dos pares ');
IF poslivre1 = 1
THEN WRITELN('Vetor de pares vazio')
ELSE BEGIN
FOR i := 1 TO (poslivre1 -1) DO
	BEGIN
	WRITE(vet_result1[i],'   ');
	END;
    END;
WRITELN;
WRITELN('Imprimindo o vetor resultante dos ¡mpares ');
IF poslivre2 = 1
THEN WRITELN('Vetor de ¡mpares vazio')
ELSE BEGIN
FOR i := 1 TO (poslivre2 -1) DO
	BEGIN
	WRITE(vet_result2[i],'   ');
	END;
    END;
READLN;
END.
