PROGRAM EX18;
USES CRT;
VAR vet:ARRAY[1..18] OF INTEGER;
    mat: ARRAY[1..3, 1..6] OF INTEGER;
    i, j, lin, col:INTEGER;
BEGIN
CLRSCR;
FOR i:=1 TO 18 DO
    BEGIN
    WRITE('Digite elemento ', i, ' ');
    READLN(vet[i]);
    END;

lin := 1;
col := 1;
FOR i:=1 TO 18 DO
    BEGIN
    mat[lin][col] := vet[i];
    col := col + 1;
    IF col > 6
       THEN BEGIN
            col := 1;
            lin := lin + 1;
            END;
    END;

FOR i:=1 TO 3 DO
    BEGIN
    FOR j:=1 TO 6 DO
        WRITELN('Elemento ', i, '-', j, ' ', mat[i][j]);
    END;

READLN;
END.