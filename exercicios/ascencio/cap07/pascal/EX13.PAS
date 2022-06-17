PROGRAM EX13;
USES CRT;
VAR nome: ARRAY[1..5] OF STRING;
    preco, imp: ARRAY[1..5,1..4] OF REAL;
    custo: ARRAY[1..5] OF REAL;
    final: REAL;
    i, j:INTEGER;
BEGIN
CLRSCR;
FOR i:=1 TO 5 DO
    BEGIN
    WRITE('Digite o nome do ', i, ' § produto ');
    READLN(nome[i]);
    END;

FOR i:=1 TO 5 DO
    BEGIN
    FOR j:=1 TO 4 DO
        BEGIN
        WRITE('Digite o pre‡o do produto ', nome[i], ' na loja ', j, ' ');
        READLN(preco[i,j]);
        END;
    END;

FOR i:=1 TO 5 DO
   BEGIN
   WRITE('Digite o custo de transporte do produto ', nome[i], ' ');
   READLN(custo[i]);
   END;

FOR i:=1 TO 5 DO
    BEGIN
    FOR j:=1 TO 4 DO
        BEGIN
        IF preco[i,j] <= 50
           THEN imp[i,j] := preco[i,j] * 5 / 100
           ELSE IF (preco[i] [j] > 50) AND (preco[i] [j] <= 100)
                   THEN imp[i,j] := preco[i,j] * 10 / 100
                   ELSE imp[i,j] := preco[i,j] * 15 / 100;
        END;
    END;

FOR i:=1 TO 5 DO
    BEGIN
    FOR j:=1 TO 4 DO
        BEGIN
        final := preco[i,j] + imp[i,j] + custo[i];
	WRITELN('Informa‡äes sobre o produto ', nome[i], ' na loja ', j);
	WRITELN('Valor do imposto ', imp[i,j]:7:2);
	WRITELN('Custo de transporte ', custo[i]:7:2);
	WRITELN('Preco ', preco[i,j]:7:2);
	WRITELN('Pre‡o final ', final:7:2);
        READLN;
        END;
   END;
END.