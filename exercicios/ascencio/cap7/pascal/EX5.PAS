PROGRAM EX5;
USES CRT;
VAR mat: ARRAY[1..4,1..7] OF INTEGER;
    menor, maior, i, j, linha_menor, coluna: INTEGER;
BEGIN
CLRSCR;
FOR i:=1 TO 4 DO
    BEGIN
    FOR j:=1 TO 7 DO
        BEGIN
        WRITE('Digite o elemento ', i, '-', j, ' ');
        READLN(mat[i,j]);
        END;
    END;

menor := mat[1][1];
linha_menor := 1;
FOR i:=1 TO 4 DO
    BEGIN
    FOR j:=1  TO 7 DO
        BEGIN
        IF mat[i][j] < menor
           THEN BEGIN
		menor := mat[i][j];
	        linha_menor := i;
                END;
        END;
    END;

maior := mat[linha_menor][1];
coluna := 1;
FOR j:=1  TO 7 DO
    BEGIN
    IF mat[linha_menor][j] > maior
       THEN BEGIN
            maior := mat[linha_menor][j];
            coluna := j;
            END;
    END;
WRITELN('O elemento minmax ‚ = ', maior, ' e est  na linha ', linha_menor, ' e na coluna ', coluna);
READLN;
END.