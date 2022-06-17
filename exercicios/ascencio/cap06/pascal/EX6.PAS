PROGRAM EX6;
USES CRT;
VAR vet: ARRAY[1..10] OF INTEGER;
        i, j, aux: INTEGER;
BEGIN
  CLRSCR;
  FOR i:=1 TO 10 DO
	BEGIN
     	WRITE('Digite um n£mero ');
       	READLN(vet[i]);
     	END;
  FOR i:=1 TO 10 DO
	BEGIN
     	FOR j:=1 TO 9 DO
		BEGIN
	  	IF vet[j] < vet[j+1]
	       	THEN BEGIN
                          aux := vet[j];
		          vet[j] := vet[j+1];
		          vet[j+1] := aux;
	       	          END;	
		END;	  
     	END;
  WRITELN('Vetor ordenado de forma decrescente');
  FOR i:=1 TO 10 DO
      WRITE(vet[i],'  ');
  READLN;
END.
