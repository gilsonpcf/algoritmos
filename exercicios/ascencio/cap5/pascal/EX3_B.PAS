PROGRAM EX3;
USES CRT;
VAR n, num, i, j:INTEGER;
    fat: REAL;
BEGIN
CLRSCR;
WRITELN('Digite a quantidade de n£meros que serao lidos');
READLN(n);
i := 1;
WHILE i <= n DO
BEGIN
WRITELN;
WRITELN('Digite o ', i,'§ n£mero');
READLN(num);
fat := 1;
j := 1;
WHILE j <= num DO
      BEGIN
      fat := fat * j;
      j := j +1;
      END;
WRITELN('Fatorial de ',num,' = ',fat:5:2);
i := i + 1;
END;
READLN;
END.
