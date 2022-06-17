PROGRAM EX4;
USES CRT;
VAR num, pos, neg: ARRAY[1..8] OF INTEGER;
        i, cont, cont_n, cont_p: INTEGER;
BEGIN
  CLRSCR;
  cont_n := 1;
  cont_p := 1;
  FOR i:=1 TO 8 DO
	BEGIN
     	WRITE('Digite o ', i, '§ elemento ');
       	READLN(num[i]);
       	IF num[i] >=0
	THEN BEGIN
 	          pos[cont_p] := num[i];
	          cont_p := cont_p + 1;
	          END
       	ELSE BEGIN
	          neg[cont_n] := num[i];
	          cont_n := cont_n + 1;
	          END;
     	END;
   IF cont_n = 1
   THEN WRITELN('Vetor de negativos vazio')
   ELSE BEGIN
        WRITELN('Numeros negativos');
        FOR i:=1 TO (cont_n-1) DO
         WRITELN(neg[i]);
        END;
  IF cont_p = 1
  THEN WRITELN('Vetor de positivos vazio')
  ELSE BEGIN
       WRITELN('Numeros positivos');
        FOR  i:=1 TO (cont_p-1) DO
         WRITELN(pos[i]);
      END;
  READLN;
END.
