PROGRAM EX25;
USES CRT;
VAR mes1, mes2, bim: ARRAY[1..5, 1..3] OF INTEGER;
    i, j, tot_prod, tot_loja, maior: INTEGER;
BEGIN
CLRSCR;
FOR i:=1 TO 5 DO
    BEGIN
    FOR j:=1 TO 3 DO
        BEGIN
        WRITE('Digite a venda do produto ', i, ' na loja ', j, ' referente ao mˆs 1 ');
        READLN(mes1[i,j]);
        END;
    END;

FOR i:=1 TO 5 DO
    BEGIN
    FOR j:=1 TO 3 DO
        BEGIN
        WRITE('Digite a venda do produto ', i, ' na loja ', j, ' referente ao mˆs 2 ');
        READLN(mes2[i,j]);
        END;
    END;

FOR i:=1 TO 5 DO
    BEGIN
    FOR j:=1 TO 3 DO
        BEGIN
        bim[i,j] := mes1[i,j] + mes2[i,j];
        WRITELN('Venda bimestral do produto ', i, ' na loja ', j, ' foi ', bim[i,j]);
        IF (i=1) AND (j=1)
           THEN maior := bim[i,j]
        ELSE BEGIN
             IF bim[i,j] > maior
                THEN maior := bim[i,j];
             END;
        END;
    END;

WRITELN('A maior venda do bimestre foi ', maior);

FOR i:=1 TO 3 DO
    BEGIN
    tot_loja := 0;
    FOR j:=1 TO 5 DO
        BEGIN
        tot_loja := tot_loja + bim[j][i];
        END;
    WRITELN('O total vendido no bimestre pela loja ', i, ' foi ', tot_loja);
    END;

FOR i:=1 TO 5 DO
    BEGIN
    tot_prod := 0;
    FOR j:=1 TO 3 DO
        BEGIN
        tot_prod := tot_prod + bim[i][j];
        END;
    WRITELN('O total vendido do produto ', i, ' foi de ', tot_prod);
    END;

READLN;
END.