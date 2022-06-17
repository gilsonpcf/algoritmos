PROGRAM EX20;
USES CRT;
TYPE mat = ARRAY[1..12, 1..12] OF INTEGER;
VAR matriz:mat;
    x, y: INTEGER;
    m:REAL;

FUNCTION media_aritmetica(m:mat):REAL;
VAR i, j, cont: INTEGER;
    soma: REAL;
BEGIN
soma:=0;
cont:=0;
FOR i:=2 TO 12 DO
    BEGIN
    FOR j:=12 DOWNTO 14-i DO
        BEGIN
        soma := soma+ m[i,j];
        cont := cont + 1;
        END;
    END;
media_aritmetica := soma/cont;
END;

BEGIN
CLRSCR;
FOR x:=1 TO 12 DO
    BEGIN
    FOR y:=1 TO 12 DO
        BEGIN
        WRITE('Digite o elemento ', x, '-', y, ' ');
        READLN(matriz[x,y]);
matriz[x,y]:=y;
        END;
    END;
m := media_aritmetica(matriz);
WRITELN;
WRITELN('A m‚dia aritm‚tica ‚ ', m:7:2);
READLN;
END.
