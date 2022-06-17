PROGRAM EX1;
USES CRT;
VAR mat, resultado: ARRAY[1..2, 1..2] OF INTEGER;
    i, j, maior: INTEGER;
BEGIN
CLRSCR;
FOR i:=1 TO 2 DO
    BEGIN
    FOR j:=1 TO 2 DO
        BEGIN
        WRITE ('Digite o elemento da linha ', i, ' e coluna ', j, ' ');
	READLN(mat[i,j]);
        END;
    END;

maior := mat[1][1];
FOR i:=1 TO 2 DO
    BEGIN
    FOR j:=1 TO 2 DO
        BEGIN
        IF mat[i][j] > maior THEN maior := mat[i,j];
        END;
    END;

FOR i:=1 TO 2 DO
    BEGIN
    FOR j:=1 TO 2 DO
        BEGIN
	resultado[i][j] := maior * mat[i][j];
        END;
    END;

WRITELN;
WRITELN('Imprimindo a matriz resultante ');
FOR i:=1 TO 2 DO
    BEGIN
    FOR j:=1 TO 2 DO
        BEGIN
        WRITE(resultado[i][j], ' ');
        END;
    END;
READLN;
END.