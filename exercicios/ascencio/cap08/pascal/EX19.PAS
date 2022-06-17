PROGRAM EX19;
USES CRT;
TYPE mat = ARRAY[1..6, 1..6] OF INTEGER;
VAR matriz:mat;
    x, y, l, c: INTEGER;

PROCEDURE multiplica_matriz(VAR m:mat);
VAR i, j, me, v: INTEGER;
BEGIN
FOR i:=1 TO 6 DO
    BEGIN
    v:=m[i][i];
    FOR j:=1 TO 6 DO
        BEGIN
        m[i,j] := m[i,j] * v;
        END;
    END;
END;

BEGIN
CLRSCR;
FOR x:=1 TO 6 DO
    BEGIN
    FOR y:=1 TO 6 DO
        BEGIN
        WRITE('Digite o elemento ', x, '-', y, ' ');
        READLN(matriz[x][y]);
        END;
    END;
multiplica_matriz(matriz);
CLRSCR;
WRITELN;
WRITELN('Matriz alterada');
l:=5;
c:=2;
FOR x:=1 TO 6 DO
    BEGIN
    FOR y:=1 TO 6 DO
         BEGIN
         gotoxy(c,l);
         WRITELN(matriz[x][y], '  ');
         c:=c+10;
         END;
    l:=l+1;
    c:=2;
    END;
READLN;
END.