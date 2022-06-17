PROGRAM EX10;
USES CRT;
VAR mat: ARRAY[1..10, 1..10] OF INTEGER;
    aux, i, j: INTEGER;
BEGIN
CLRSCR;
WRITELN('Digitando os n£meros da matriz 10 X 10 ');
FOR i:=1 TO 10 DO
    BEGIN
    FOR j:=1 TO 10 DO
        BEGIN
        WRITE('Digite o elemento ', i, '-', j, ' ');
        READLN(mat[i, j]);
        END;
    END;
{trocando a linha 2 com a linha 8}
FOR j:=1 TO 10 DO
    BEGIN
    aux := mat[2,j];
    mat[2,j] := mat[8,j];
    mat[8,j] := aux;
    END;

{trocando a coluna 4 com a coluna 10}
FOR i:=1 TO 10 DO
    BEGIN
    aux := mat[i,4];
    mat[i,4] := mat[i,10];
    mat[i][10] := aux;
    END;

{trocando a diagonal principal com a diagonal secundaria}

j := 10;
FOR i:=1 TO 10 DO
    BEGIN
    aux := mat[i,i];
    mat[i,i] := mat[i,j];
    mat[i,j] := aux;
    j:= j - 1;
    END;

{trocando a linha 5 com a coluna 10}
FOR j:=1 TO 10 DO
    BEGIN
    aux := mat[5,j];
    mat[5][j] := mat[j,10];
    mat[j][10] := aux;
    END;

WRITELN('Matriz ap¢s as altera‡äes ');
FOR i:=1 TO 10 DO
    BEGIN
    FOR j:=1 TO 10 DO
        BEGIN
        WRITE(mat[i,j], ' ');
        END;
    WRITELN;
    END;

READLN;
END.