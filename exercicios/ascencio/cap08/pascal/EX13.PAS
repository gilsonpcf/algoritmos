PROGRAM EX13;
USES CRT;
TYPE vetor = ARRAY[1..10] OF INTEGER;
VAR vet1, vet2: vetor;
    X: INTEGER;


PROCEDURE fatoriais(VAR a, b: vetor);
VAR i, j: INTEGER;
    f: REAL;
BEGIN
FOR i:=1 TO 10 DO
    BEGIN
    IF (a[i] = 0) OR (a[i] = 1)
        THEN b[i] := 1
        ELSE BEGIN
             b[i] := 1;
             FOR j := 1 TO a[i] DO
                 BEGIN
                 b[i] := b[i] * j;
                 END;
             END;
    END;
END;

BEGIN
CLRSCR;
FOR x:=1 TO 10 DO
    BEGIN
    WRITE('Digite o ', x, '§ elemento de A ');
    READLN(vet1[x]);
    END;
fatoriais(vet1,vet2);
FOR x:=1 TO 10 DO
    WRITELN('O fatorial de ', vet1[x], ' ‚ ', vet2[x]);
READLN;
END.
