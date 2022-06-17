PROGRAM EX20;
USES CRT;
VAR num: ARRAY[1..5, 1..4] OF INTEGER;
    num_aux, i, j, k, l, m, n, lin, col:INTEGER;
BEGIN
CLRSCR;
FOR i:=1 TO 5 DO
    BEGIN
    FOR j:=1 TO 4 DO
        BEGIN
        WRITE('Digite um n£mero ');
        READLN(num_aux);
        IF (i=1) AND (j=1)
           THEN num[i][j]:= num_aux
           ELSE BEGIN
                k:=1;
                l:=1;
                WHILE (num[k][l] < num_aux) AND ((k<>i) OR (l<>j)) DO
                BEGIN
                l := l + 1;
                IF l > 4
                   THEN BEGIN
                        k := k + 1;
                  	l := 1;
                        END;
                END;
                m := i;
                n := j;
                WHILE (m<>k) OR (n<>l) DO
                BEGIN
                IF (n-1) < 1
                   THEN BEGIN
                        lin := m-1;
                        col := 4;
                        END
                   ELSE BEGIN
                        lin := m;
                        col := n-1;
                        END;
                num[m][n] := num[lin][col];
                n := n-1;
                IF n < 1
                   THEN BEGIN
                        n := 4;
                        m := m-1;
                        END;
                END; {fim while}
                num[k][l] := num_aux;
		END; {fim else}

	END; {fim for}
    END; {fim for}

FOR i:=1 TO 5 DO
    BEGIN
    FOR j:=1 TO 4 DO
        BEGIN
        WRITELN('Elemento da posi‡Æo ', i, '-', j, ' = ', num[i][j]);
        END;
    END;

READLN;
END.

