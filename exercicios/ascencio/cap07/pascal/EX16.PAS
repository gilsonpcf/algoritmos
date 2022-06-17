PROGRAM EX16;
USES CRT;
VAR mat:ARRAY[1..7, 1..7] OF REAL;
    vet1, vet2:ARRAY[1..7] OF REAL;
    maior, menor:REAL;
    i, j: INTEGER;
BEGIN
CLRSCR;
FOR i:=1 TO 7 DO
    BEGIN
    FOR j:=1 TO 7 DO
        BEGIN
        WRITE('Digite o valor do elemento ', i, '-', j, ' ');
        READLN(mat[i][j]);
        END;
    END;

FOR i:=1 TO 7 DO
    BEGIN
    maior := mat[i][1];
    FOR j:=1 TO 7 DO
        BEGIN
	IF mat[i][j] > maior THEN maior := mat[i,j];
        END;
     vet1[i] := maior;
     END;

FOR i:=1 TO 7 DO
    BEGIN
    menor := mat[1][i];
    FOR j:=1 TO 7 DO
        BEGIN
        IF mat[j][i] < menor
           THEN menor := mat[j,i];
        END;
        vet2[i] := menor;
    END;

WRITELN('Valores armazenados na matriz ');
FOR i:=1 TO 7 DO
    BEGIN
    FOR j:=1 TO 7 DO
	WRITELN('Elemento ', i, '-', j, ' ', mat[i][j]:7:2);
    END;

WRITELN;
WRITELN('Vetor com os maiores valores de cada linha ');
FOR i:=1 TO 7 DO
    WRITE(vet1[i]:7:2, ' ');

WRITELN;
WRITELN('Vetor com os menores valores de cada coluna ');
FOR i:=1 TO 7 DO
    WRITE(vet2[i]:7:2, ' ');

READLN;
END.