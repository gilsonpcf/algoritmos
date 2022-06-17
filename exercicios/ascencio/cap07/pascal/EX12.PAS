PROGRAM EX12;
USES CRT;
VAR mat: ARRAY[1..4, 1..4] OF INTEGER;
    soma_linha, soma_coluna: ARRAY[1..4] OF INTEGER;
    soma_diagp, soma_diags, i, j, compara: INTEGER;
    q_magico: BOOLEAN;
BEGIN
CLRSCR;
WRITELN('Digitando os elementos da matriz 4 X 4 ');
FOR i:=1 TO 4 DO
    BEGIN
    FOR j:=1 TO 4 DO
        BEGIN
        WRITE('Digite elemento ', i, '-', j, ' ');
        READLN(mat[i,j]);
        END;
    END;

FOR i:=1 TO 4 DO
    BEGIN
    soma_linha[i] := 0;
    FOR j:=1 TO 4 DO
        BEGIN
        soma_linha[i] := soma_linha[i] + mat[i,j];
        END;
    END;

FOR i:=1 TO 4 DO
    BEGIN
    soma_coluna[i] := 0;
    FOR j:=1 TO 4 DO
        BEGIN
        soma_coluna[i] := soma_coluna[i] + mat[j,i];
        END;
    END;

soma_diagp := 0;
FOR i:=1 TO 4 DO
    soma_diagp := soma_diagp + mat[i,i];

soma_diags := 0;
j := 4;
FOR i:=1 TO 4 DO
    BEGIN
    soma_diags := soma_diags + mat[i,j];
    j := j - 1;
    END;

q_magico := true;
FOR i:=1 TO 4 DO
    BEGIN
    FOR j:=1 TO 4 DO
        BEGIN
        IF soma_linha[i] <> soma_coluna[j]
           THEN q_magico := false;
        END;
    END;

FOR i:=1 TO 4 DO
    BEGIN
    IF soma_linha[i] <> soma_diagp
       THEN q_magico := false;
    END;

FOR i:=1 TO 4 DO
    BEGIN
    IF soma_linha[i] <> soma_diags
       THEN q_magico := false;
    END;

if q_magico = true
   THEN WRITELN('Forma quadrado magico')
   ELSE WRITELN('Nao forma quadrado magico');

READLN;
END.