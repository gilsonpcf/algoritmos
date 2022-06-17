PROGRAM EX3;
USES CRT;
VAR n, num, i, j:INTEGER;
    fat: REAL;
BEGIN
CLRSCR;
WRITELN('Digite a quantidade de n£meros que serao lidos');
READLN(n);
FOR i := 1 TO n DO
BEGIN
WRITELN;
WRITELN('Digite o ', i,'§ n£mero');
READLN(num);
fat := 1;
FOR j := 1 TO num DO
    BEGIN
    fat := fat * j;
    END;
WRITELN('Fatorial de ',num,' = ',fat:5:2);
END;
READLN;
END.
