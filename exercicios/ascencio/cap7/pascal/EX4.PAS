PROGRAM EX4;
USES CRT;
VAR mat: ARRAY[1..10,1..20] OF REAL;
    soma: ARRAY[1..10] OF REAL;
    i, j: INTEGER;
BEGIN
CLRSCR;
FOR i:=1 TO 10 DO
    BEGIN
    FOR j:=1 TO 20 DO
        BEGIN
        WRITE('Digite o elemento da linha ', i, ' com a coluna ', j, ' da matriz ');
        READLN(mat[i][j]);
        END;
    END;

FOR i:=1 TO 10 DO
    BEGIN
    soma[i] := 0;
    FOR j:=1 TO 20 DO
        BEGIN
        soma[i] := soma[i] + mat[i][j];
        END;
    END;

FOR i:=1 TO 10 DO
    FOR j:=1 TO 20 DO
        mat[i][j] := mat[i][j] * soma[i];

WRITELN('Imprimindo a matriz resultante');
FOR i:=1 TO 10 DO
    BEGIN
    WRITELN('Linha ', i);
    FOR j:=1 TO 20 DO
        WRITE(mat[i][j]:7:2, ' ');
    END;
READLN;
END.