PROGRAM EX23;
USES CRT;
TYPE matriz=ARRAY[1..3, 1..4] OF INTEGER;
     vetor=ARRAY[1..12] OF INTEGER;
VAR mat:matriz;
    vet:vetor;
    i, j: INTEGER;

PROCEDURE gera_vetor(m:matriz; VAR v:vetor);
VAR i, j, k: INTEGER;

BEGIN
k := 1;
FOR i:=1 TO 3 DO
    BEGIN
    FOR j:=1 TO 4 DO
        BEGIN
        v[k] := m[i][j];
        k := k + 1;
        END;
    END;
END;

BEGIN
CLRSCR;
FOR i:=1 TO 3 DO
    BEGIN
    FOR j:=1 TO 4 DO
        BEGIN
        WRITE('Digite o numero da posicao ', i, '-', j, ' ');
        READLN(mat[i,j]);
        END;
    END;
gera_vetor(mat, vet);
WRITELN;
WRITELN('Vetor gerado');
FOR i:=1 TO 12 DO
    BEGIN
    WRITELN('Posi‡ao ', i, ': ', vet[i]);
    END;

READLN;
END.
