PROGRAM EX8;
USES CRT;
VAR mat1, mat2: ARRAY[1..6, 1..4] OF INTEGER;
    i, j, qtde: INTEGER;
BEGIN
CLRSCR;

WRITELN('Digitando os elementos da matriz 6 X 4 ');
FOR i:=1 TO 6 DO
    BEGIN
    FOR j:=1 TO 4 DO
        BEGIN
        WRITE('Elemento da linha ', i, ' com a coluna ', j, ' ');
        READLN(mat1[i,j]);
        END;
    END;

qtde := 0;
FOR i:=1 TO 6 DO
    BEGIN
    FOR j:=1 TO 4 DO
        BEGIN
        IF mat1[i,j] > 30 THEN qtde:= qtde + 1;
        END;
    END;

FOR i:=1 TO 6 DO
    BEGIN
    FOR j:=1 TO 4 DO
        BEGIN
        IF mat1[i][j] = 30 THEN mat2[i,j] := 0
                           ELSE mat2[i,j] := mat1[i][j];
        END;
    END;

WRITELN('Quantidade de n£meros maiores que 30 = ', qtde);
WRITELN;
WRITELN('imprimindo a matriz resultante ');
FOR i:=1 TO 6 DO
    BEGIN
    FOR j:=1 TO 4 DO
        BEGIN
        WRITE(mat2[i][j], ' ');
        END;
        WRITELN;
    END;

READLN;
END.