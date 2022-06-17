PROGRAM EX7;
USES CRT;
VAR  vet: ARRAY[1..8] OF INTEGER;
          i, j, z, aux: INTEGER;
BEGIN
  CLRSCR;
  FOR i:=1 TO 8 DO 
	BEGIN
     	WRITE('Digite um n£mero: ');
       	READLN(aux);
       	j := 1;
       	WHILE (vet[j] < aux) AND (j<i) DO
	    j := j + 1;
	z := i;
       	WHILE  z>j DO
        BEGIN
	   vet[z] := vet[z-1];
	   z := z -1;
	END;
       	vet[j] := aux;
     	END;
  WRITELN(' Vetor Ordenado ');
  FOR i:= 1 TO 8 DO
      WRITELN('  ',vet[i]);
READLN;
END.
