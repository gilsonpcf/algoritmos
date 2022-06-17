PROGRAM EX8;
USES CRT;
VAR X, Y, R: ARRAY[1..10] OF INTEGER;
        i, j, z, aux: INTEGER;
BEGIN
  CLRSCR;
  FOR  i := 1  TO 5 DO
	BEGIN
    	WRITE('Digite o ', i, '§ elemento do vetor X: ');
        READLN(X[i]);
    	END;
  FOR  i:=1 TO 5 DO
	BEGIN
     	FOR j:=1 TO 4 DO
		BEGIN
	  	IF X[j] > X[j+1]
		THEN BEGIN
	       		aux := X[j];
		 	X[j] := X[j+1];
		 	X[j+1] := aux;
	       	          END;
	  	END;
     	END;
  FOR i:=1 TO 5 DO
	BEGIN
    	WRITE('Digite o ', I, '§ elemento do vetor Y: ');
      	READLN(Y[i]);
    	END;
  FOR i:=1 TO 5 DO
	BEGIN
     	FOR j:=1 TO 4 DO
		BEGIN
	  	IF Y[j] > Y[j+1]
	       THEN BEGIN
                    aux := Y[j];
		    Y[j] := Y[j+1];
		    Y[j+1] := aux;
	       	    END;
	       END;
     END;
  j := 1;
  FOR i:=1 TO 5 DO
	BEGIN
     	R[j] := X[i];
       	j:= j + 1;
       	R[j] := Y[i];
       	j:= j + 1;
     	END;
  FOR i:=1 TO 10 DO
	BEGIN
FOR j:=1 TO 9 DO
	BEGIN
	  	IF R[j] > R[j+1]
		THEN BEGIN
	       		aux := R[j];
		 	R[j] := R[j+1];
		 	R[j+1] := aux;
	       	     END;
	  	END;
     	END;
  WRITELN('Vetor X ');
  FOR i:=1 TO 5 DO
      WRITE('  ', X[i]);
  writeln;
  WRITELN('Vetor Y ');
  FOR i:=1 TO 5 DO
      WRITE('  ', Y[i]);
 writeln;
  WRITELN('Vetor Resultante ');
  FOR i:=1 TO 10 DO
      WRITE('  ',R[i]);
  READLN;
END.
