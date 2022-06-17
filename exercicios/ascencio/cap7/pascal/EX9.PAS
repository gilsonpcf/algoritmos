PROGRAM EX9;
USES CRT;
VAR mat, rep, vezes: ARRAY[1..15, 1..5] OF INTEGER;
    i, j, k, l, lin, lin2, col, x, num, qtde: INTEGER;
    achou: BOOLEAN;
BEGIN
CLRSCR;
FOR i:=1 TO 15 DO
    BEGIN
    FOR j:=1 TO 5 DO
        BEGIN
        WRITE('Digite o elemento ', i, '-', j, ' ');
        READLN(mat[i,j]);
        END;
    END;

lin := 1;
col := 1;
FOR i:=1 TO 15 DO
    BEGIN
    FOR j:=1 TO 5 DO
        BEGIN
        qtde := 1;
        num := mat[i,j];
        FOR k:=1 TO 15 DO
            BEGIN
            FOR l:=1 TO 5 DO
                BEGIN
                IF (i<>k) OR (j<>l)
                   THEN IF mat[k][l] = num
                           THEN	qtde := qtde + 1;
                END; {fim for l}
            END; { fim k}
            IF qtde > 1
               THEN BEGIN
                    achou := false;
                    IF col = 1
                       THEN lin2 := lin-1
                       ELSE lin2 := lin;
                       FOR k:=1 TO lin2 DO
                           BEGIN
                           IF k < lin2
                              THEN x:=4
                              ELSE x:=col-1;
                           FOR l:=1 TO x DO
                               IF num=rep[k,l] THEN achou := true;
                           END; {fim for k}
                           IF achou = false
                              THEN BEGIN
                                   rep[lin,col] := num;
                                   vezes[lin,col] := qtde;
                                   col := col + 1;
                                   IF col > 4
                                      THEN BEGIN
                                           lin := lin + 1;
                                           col := 1;
                                           END;
                                   END;
                    END; {fim if qtde > 1}
        END; {fim for j}
    END; {fim for i}

WRITELN;
FOR i:=1 TO lin DO
    BEGIN
    IF i<lin THEN x := 4
             ELSE x := col-1;
    FOR j:=1 TO x DO
        BEGIN
        WRITELN('O n£mero ', rep[i][j], ' est  repetido ', vezes[i][j], ' vezes');
        END;
    END;

READLN;
END.
