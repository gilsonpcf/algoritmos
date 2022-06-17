PROGRAM EX19;
USES CRT;
VAR mat: ARRAY[1..5, 1..4] OF INTEGER;
    i, j, num, r, lin_p, col_p, lin_i, col_i, tot:INTEGER;
BEGIN
CLRSCR;
lin_p := 2;
col_p := 1;
lin_i := 1;
col_i := 1;
tot := 0;
REPEAT
WRITE('Digite um n£mero ');
READLN(num);
r := num MOD 2;
IF r = 0
   THEN BEGIN
        IF lin_p > 4
           THEN WRITELN('NÆo h  mais espa‡o para n£meros pares ')
           ELSE BEGIN
                mat[lin_p][col_p] := num;
                tot := tot + 1;
                col_p := col_p + 1;
                IF col_p > 4
		   THEN BEGIN
                        lin_p := lin_p + 2;
                        col_p := 1;
                        END;
                END;
         END
    ELSE BEGIN
         IF lin_i > 5
            THEN WRITELN('NÆo h  mais espaço para n£meros ¡mpares ')
            ELSE BEGIN
                 mat[lin_i][col_i] := num;
                 tot := tot + 1;
                 col_i := col_i + 1;
                 IF col_i > 4
                    THEN BEGIN
                         lin_i := lin_i + 2;
                         col_i := 1;
                         END
                 END;
         END;
UNTIL tot >= 20;

WRITELN('Matriz totalmente preenchida');
FOR i:=1 TO 5 DO
    BEGIN
    FOR j:=1 TO 4 DO
        WRITE(mat[i][j], ' ');
    WRITELN;
    END;

READLN;
END.