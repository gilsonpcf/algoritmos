PROGRAM EX19;
USES CRT;
VAR vet1, vet2: ARRAY[1..20] OF CHAR;
        aux: CHAR;	
        i, j: INTEGER;
BEGIN
CLRSCR;
FOR i := 1 TO 20 DO
	BEGIN
        WRITE('Digite o ', i, '§ caractere do vetor 1 ');
	READLN(vet1[i]);
	END;
FOR j := 1 TO 20 DO
	BEGIN
        WRITE('Digite o ', j, '§ caractere do vetor 2 ');
	READLN(vet2[j]);
	END;
WRITELN('Mostrando os 20 caracteres do vetor 1 antes da troca');
FOR i := 1 TO 20 DO
	BEGIN
	WRITE(vet1[i],'  ');
	END;
WRITELN;
WRITELN('Mostrando os 20 caracteres do vetor 2 antes da troca');
FOR j := 1 TO 20 DO
	BEGIN
	WRITE(vet2[j],'  ');
	END;
j := 20;
FOR i := 1 TO 20 DO
	BEGIN
	aux := vet1[i];
	vet1[i] := vet2[j];
	vet2[j] := aux;
	j := j -1;
	END;
WRITELN;
WRITELN('Mostrando os 20 caracteres do vetor 1 depois da troca');
FOR i := 1 TO 20 DO
	BEGIN
	WRITE(vet1[i],'  ');
	END;
WRITELN;
WRITELN('Mostrando os 20 caracteres do vetor 2 depois da troca');
FOR j := 1 TO 20 DO
	BEGIN
	WRITE(vet2[j],'  ');
	END;
READLN;
END.
