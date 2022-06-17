PROGRAM EX16;
USES CRT;
VAR base, altura, area: REAL;
BEGIN
  CLRSCR;
  base := 0;
  REPEAT
      WRITELN('Digite a medida da base ');
      READLN(base);
   UNTIL base > 0;
  altura := 0;
  REPEAT
     WRITELN('Digite a medida da altura ');
     READLN(altura);
   UNTIL altura > 0;
  area := base * altura / 2;
  WRITELN('µrea = ', area:5:2);
  READLN;
END.
