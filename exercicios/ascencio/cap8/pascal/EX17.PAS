PROGRAM EX17;
USES CRT;
TYPE mat = ARRAY[1..5, 1..5] OF INTEGER;
VAR matriz: mat;
    x, y, s: INTEGER;

FUNCTION soma_matriz(m: mat): INTEGER;
VAR i, j, soma: INTEGER;
BEGIN
soma := 0;
FOR i:=1 TO 5 DO
    BEGIN
    FOR j:=1 TO 5 DO
        soma := soma + m[i][j];
    END;
soma_matriz := soma;
END;

BEGIN
CLRSCR;
FOR x:=1 TO 5 DO
    BEGIN
    FOR y:=1 TO 5 DO
        BEGIN
        WRITE('Digite o elemento ', x, '-', y, ' ');
        READLN(matriz[x][y]);
        END;
    END;
s:=soma_matriz(matriz);
WRITELN;
WRITELN('A soma dos elementos da matriz ‚ ', s);
READLN;
END.