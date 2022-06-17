PROGRAM EX6;
USES CRT;
VAR a: ARRAY[1..4, 1..5] OF INTEGER;
    b: ARRAY[1..5, 1..2] OF INTEGER;
    c: ARRAY[1..4, 1..2] OF INTEGER;
    i, j, k, soma, mult: INTEGER;
BEGIN
CLRSCR;
WRITELN('Digitando os elementos da matriz A ');
FOR i:=1 TO 4 DO
    BEGIN
    FOR j:=1 TO 5 DO
        BEGIN
        WRITE('Digite o elemento ', i, '-', j, ': ');
        READLN(a[i,j]);
        END;
    END;

WRITELN('Digitando os elementos da matriz B ');
FOR i:=1 TO 5 DO
    BEGIN
    FOR j:=1 TO 2 DO
        BEGIN
        WRITE('Digite o elemento ', i, '-', j, ': ');
        READLN(b[i,j]);
        END;
    END;

soma := 0;
{Calculando a matriz resultante }
FOR i:=1 TO 4 DO
    BEGIN
    FOR k:=1 TO 2 DO
        BEGIN
        FOR j:=1 TO 5 DO
            BEGIN
            mult := a[i,j] * b[j,k];
            soma := soma + mult;
            END;
        c[i,k] := soma;
        soma := 0;
        END;
    END;

WRITELN('Escrevando a matriz resultante da multiplica‡Æo ');
FOR i:=1 TO 4 DO
    BEGIN
    FOR j:=1 TO 2 DO
        BEGIN
	WRITE(c[i,j], ' ');
        END;
    WRITELN;
    END;

READLN;
END.