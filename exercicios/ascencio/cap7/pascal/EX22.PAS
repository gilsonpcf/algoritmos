PROGRAM EX22;
USES CRT;
VAR prod: ARRAY[1..5, 1..3] OF REAL;
    tot_arm, maior_e, menor_e, custo_p, custo_a: REAL;
    i, j, ind_a: INTEGER;
BEGIN
CLRSCR;
FOR i:=1 TO 4 DO
    BEGIN
    FOR j:=1 TO 3 DO
        BEGIN
        WRITE('Digite o estoque do produto ', j, ' no armaz‚m ', i, ' ');
        READLN(prod[i][j]);
        END;
    END;

FOR i:=1 TO 3 DO
    BEGIN
    WRITE('Digite o custo do produto ', i, ' ');
    READLN(prod[5][i]);
    END;

FOR i:=1 TO 4 DO
    BEGIN
    tot_arm := 0;
    FOR j:=1 TO 3 DO
        BEGIN
        tot_arm := tot_arm + prod[i,j];
        END;
    WRITELN('O total de itens no armaz‚m ', i, ' ‚ ', tot_arm:7:2);
    IF i = 1
       THEN BEGIN
            menor_e := tot_arm;
            ind_a := i;
            END
       ELSE BEGIN
            IF tot_arm < menor_e
               THEN BEGIN
                    menor_e := tot_arm;
                    ind_a := i;
                    END;
            END;
    END;
WRITELN('Armazem com menor estoque ', ind_a);
FOR i:=1 TO 4 DO
    BEGIN
    IF i = 1
       THEN BEGIN
            maior_e := prod[i][2];
            ind_a := i;
            END
       ELSE BEGIN
            IF prod[i][2] > maior_e
               THEN BEGIN
                    maior_e := prod[i][2];
                    ind_a := i;
                    END
            END;
    END;

WRITELN('O maior estoque do produto 2 est  no armaz‚m ', ind_a);
FOR i:=1 TO 3 DO
    BEGIN
    custo_p := 0;
    FOR j:=1 TO 4 DO
        BEGIN
        custo_p := custo_p + prod[j][i] * prod[4][i];
        END;
    WRITELN('O custo total do produto ', i, ' ‚ ', custo_p:7:2);
    END;

FOR i:=1 TO 4 DO
    BEGIN
    custo_a := 0;
    FOR j:=1 TO 3 DO
        BEGIN
        custo_a := custo_a + prod[i][j] * prod[4][j];
        END;
    WRITELN('O custo toal do armaz‚m ', i, ' ‚ ', custo_a:7:2);
    END;

READLN;
END.
