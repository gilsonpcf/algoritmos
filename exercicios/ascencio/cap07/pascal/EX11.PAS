PROGRAM EX11;
USES CRT;
VAR mat: ARRAY[1..8, 1..8] OF INTEGER;
    i, j: INTEGER;
    simetria: BOOLEAN;
BEGIN
CLRSCR;
WRITELN('Digitando os elementos da matriz 8 X 8 ');
FOR i:=1 TO 8 DO
    BEGIN
    FOR j:=1 TO 8 DO
        BEGIN
        WRITE('Digite o elemento ', i, '-', j, ' ');
        READLN(mat[i,j]);
        END;
    END;

simetria := true;
FOR i:=1 TO 8 DO
    BEGIN
    FOR j:=1 TO 8 DO
        IF mat[i,j] <> mat[j,i] THEN simetria := false;
    END;
IF simetria = true
  THEN WRITELN('Matriz Sim‚trica')
  ELSE WRITELN('Matriz Assim‚trica');

READLN;
END.