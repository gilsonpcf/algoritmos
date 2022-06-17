PROGRAM EX23;
USES CRT;
VAR vendas: ARRAY[1..4, 1..5] OF REAL;
    tot_ven, tot_sem, tot_geral: REAL;
    i, j: INTEGER;
BEGIN
CLRSCR;
FOR i:=1 TO 4 DO
    BEGIN
    FOR j:=1 TO 5 DO
        BEGIN
        WRITE('Digite o valor da venda do vendedor ', j, ' na semana ', i, ' ');
	READLN(vendas[i][j]);
        END;
    END;

FOR i:=1 TO 5 DO
    BEGIN
    tot_ven := 0;
    FOR j:=1 TO 4 DO
        BEGIN
        tot_ven := tot_ven + vendas[j][i];
        END;
    WRITELN('O total de vendas do vendedor ', i, ' foi de ', tot_ven:7:2);
    END;

FOR i:=1 TO 4 DO
    BEGIN
    tot_sem := 0;
    FOR j:=1 TO 5 DO
        BEGIN
        tot_sem := tot_sem + vendas[i][j];
	END;
    WRITELN('O total de vendas da semana ', i, ' foi de ', tot_sem:7:2);
    END;


tot_geral := 0;
FOR i:=1 TO 4 DO
    BEGIN
    FOR j:=1 TO 5 DO
        BEGIN
        tot_geral := tot_geral + vendas[i][j];
        END;
    END;

WRITELN('O total geral de vendas ‚ ', tot_geral:7:2);
READLN;
END.
