PROGRAM EX6;
USES CRT;
VAR num: INTEGER;

PROCEDURE multiplicacao(n:INTEGER);
VAR i,j, l, c: integer;
BEGIN
CLRSCR;
l := 5;
c := 5;
FOR i:=1 TO n DO
    BEGIN
    FOR j:=1 TO i DO
        BEGIN
        gotoxy(c,l);
        WRITE(i*j);
        c:=c+5;
        END;
    l := l + 1;
    c := 5;
    END;
READLN;
END;
BEGIN
CLRSCR;
REPEAT
WRITE('Digite um n£mero entre 1 e 9: ');
READLN(num);
UNTIL (num >= 1) AND (num<=9);
multiplicacao(num);
END.

