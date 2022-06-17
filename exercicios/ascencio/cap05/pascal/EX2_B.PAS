PROGRAM EX2;
USES CRT;
VAR n, i, j: INTEGER;
    e, fat:REAL;
BEGIN
CLRSCR;
WRITELN('Digite o valor de N');
READLN(n);
e := 1;
i := 1;
REPEAT
  j := 1;
  fat := 1;
  REPEAT
    fat := fat * j;
    j := j + 1;
  UNTIL j > i;
  i := i + 1;
  e := e + 1/fat;
UNTIL i > n;
WRITELN('Valor de E = ',e:5:2);
READLN;
END.
