PROGRAM EX15;
USES CRT;
TYPE vetor = ARRAY[1..5] OF INTEGER;
VAR vet: vetor;
    x: INTEGER;

PROCEDURE ordena(VAR v:vetor);
VAR i, j, aux: INTEGER;
BEGIN
FOR i:=1 TO 5 DO
    BEGIN
    FOR j:=1 TO 4 DO
        BEGIN
        IF v[j] > v[j+1]
           THEN BEGIN
                aux := v[j];
                v[j] := v[j+1];
                v[j+1] := aux;
                END;
        END;
    END;
END;

BEGIN
CLRSCR;
FOR x:=1 TO 5 DO
    BEGIN
    WRITE('Digite o ', x, '§ elemento de A ');
    READLN(vet[x]);
    END;
ordena(vet);
WRITELN;
WRITELN('Vetor ordenado ');
FOR x:=1 TO 5 DO
    WRITE(vet[x], '  ');
READLN;
END.