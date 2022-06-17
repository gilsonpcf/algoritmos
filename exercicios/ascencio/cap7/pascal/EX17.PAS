PROGRAM EX17;
USES CRT;
VAR mat:ARRAY[1..5, 1..5] OF INTEGER;
    i, j, dp, lin_ac, col_ac, lin_ab, col_ab, num, r, cont_dp, cont_ac, cont_ab: INTEGER;
BEGIN
CLRSCR;
dp := 1;
lin_ac := 1;
col_ac := 2;
lin_ab := 2;
col_ab := 1;
cont_dp := 0;
cont_ac := 0;
cont_ab := 0;
WHILE (cont_ac < 10) OR (cont_ab < 10) OR (cont_dp < 5) DO
BEGIN
WRITE('Digite um n£mero: ');
READLN(num);
r := num MOD 5;
IF r = 0
  THEN BEGIN
       IF cont_dp < 5
          THEN BEGIN
               mat[dp][dp] := num;
               dp := dp+1;
               cont_dp:= cont_dp+1;
               END
          ELSE BEGIN
               WRITELN('Nao existe mais espa‡o para m£ltiplos de 5 ');
               READLN;
               END;
       END
  ELSE BEGIN
       r := num MOD 11;
       IF r = 0
          THEN BEGIN
               IF cont_ac < 10
                  THEN BEGIN
                       mat[lin_ac][col_ac] := num;
                       col_ac := col_ac + 1;
                       IF col_ac > 5
                          THEN BEGIN
                               lin_ac := lin_ac + 1;
                               col_ac := lin_ac + 1;
                               END;
                       cont_ac := cont_ac + 1;
                       END
                   ELSE BEGIN
                        WRITELN('Nao existe mais espa‡o para m£ltiplos de 11 ');
                        READLN;
                        END;
               END
           ELSE BEGIN
                r := num MOD 13;
                IF r = 0
                   THEN BEGIN
                        IF cont_ab < 10
                           THEN BEGIN
                                mat[lin_ab][col_ab] := num;
                                col_ab := col_ab+1;
                                IF col_ab >= lin_ab
                                   THEN BEGIN
                                        lin_ab := lin_ab + 1;
                                        col_ab := 1;
                                        END;
                                cont_ab := cont_ab + 1;
                                END
                            ELSE BEGIN
                                 WRITELN('Nao existe mais espa‡o para m£ltiplos de 13 ');
                                 READLN;
                                 END;
                        END
                    ELSE BEGIN
                         WRITELN('Voce deve digitar um n£mero m£ltiplo de 5 ou de 11 ou de 13 ');
                         READLN;
                         END;
               END;
       END;
END; {fim while }

FOR i:=1 TO 5 DO
    BEGIN
    FOR j:=1 TO 5 DO
        WRITE(mat[i][j], ' ');
    WRITELN;
    END;

READLN;
END.