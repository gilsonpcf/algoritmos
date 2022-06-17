PROGRAM EX3;
USES CRT;
VAR lojas: ARRAY[1..8] OF STRING;
    produtos: ARRAY[1..4] OF STRING;
    aux: STRING;
    pre: ARRAY[1..4, 1..8] OF REAL;
    i, j: INTEGER;
BEGIN
CLRSCR;
FOR j:=1 TO 8 DO
    BEGIN
    WRITE('Digite o nome da ', j, '¶ loja ');
    READLN(lojas[j]);
    END;
FOR i:=1  TO 4 DO
    BEGIN
    WRITE('Digite o nome do ', i, 'ß produto ');
    READLN(produtos[i]);
    END;

FOR i:=1 TO 4 DO
    BEGIN
    FOR j:=1 TO 8 DO
        BEGIN
        WRITE('Digite o preáo do produto ', produtos[i], ' na loja ', lojas[j], ' ');
        READLN(pre[i][j]);
        END;
    END;

WRITELN('Listagem dos produtos e respectivas lojas cujos preáos n∆o ultrapassam R$ 120,00');
FOR i:=1 TO 4 DO
    BEGIN
    FOR j:=1 TO 8 DO
        BEGIN
        IF pre[i][j] < 120
           THEN WRITELN(produtos[i], '-', lojas[j]);
        END;
    END;

READLN;
END.