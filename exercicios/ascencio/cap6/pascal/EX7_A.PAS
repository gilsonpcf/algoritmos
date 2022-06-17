PROGRAM EX7;
USES CRT;
VAR  vet: ARRAY[1..8] OF INTEGER;
          i, j, z, aux: INTEGER;
BEGIN
  CLRSCR;
  i := 1;
  WHILE i <= 8 DO
     BEGIN
       WRITE('Digite um n£mero: ');
       READLN(aux);
       j := 1;
       WHILE (vet[j] < aux) AND (j<i) DO
       j := j + 1;
       z := i;
       WHILE (z >= j+1) DO
	BEGIN
	 vet[z] := vet[z-1];
	 z := z - 1;
	 END;
       vet[j] := aux;
       i := i + 1;
     END;
  WRITELN('Vetor Ordenado ');
  i := 1;
  WHILE (i <= 8) DO
	BEGIN
        WRITELN('  ',vet[i]);
        i := i + 1;
       	END;
  READLN;
END.
