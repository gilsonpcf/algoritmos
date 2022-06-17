PROGRAM EX3;
USES CRT;
VAR vet1, vet2: ARRAY[1..10] OF INTEGER;
      vet3:ARRAY[1..20] OF INTEGER;
      i, j: INTEGER;
BEGIN
  CLRSCR;
  j := 1;
  FOR I:=1 TO 10 DO
      BEGIN
        WRITELN('Digite o ', i , '§ n£mero do vetor 1 ');
	READLN(vet1[i]);
	vet3[j] := vet1[i];
	j := j + 1;
	WRITELN('Digite o ', i, '§ n£mero do vetor 2 ');
	READLN(vet2[i]);
	vet3[j] := vet2[i];
	j := j + 1;
      END;
  WRITELN('O vetor intercalado ‚ ');
  FOR i:=1 TO 20 DO
      WRITE('  ',vet3[i]);
  READLN;
END.
