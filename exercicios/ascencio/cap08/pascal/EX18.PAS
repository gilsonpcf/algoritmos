PROGRAM EX18;
USES CRT;
TYPE mat = ARRAY[1..6, 1..6] OF INTEGER;
VAR matriz: mat;
    x, y, menor: INTEGER;

FUNCTION menor_elemento(m:mat):INTEGER;
VAR i, j, me: INTEGER;
BEGIN
me := m[1,6];
j := 5;
FOR i:=2 TO 6 DO
    BEGIN
      IF m[i][j] < me
         THEN me := m[i][j];
      j := j-1;
    END;
menor_elemento := me;
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
menor := menor_elemento(matriz);
WRITELN;
WRITELN('O menor elemento da diagonal secund ria ‚ ', menor);
READLN;
END.