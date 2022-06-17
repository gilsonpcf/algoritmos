PROGRAM EX16;
USES CRT;
VAR base, altura, area: REAL;
BEGIN
  CLRSCR;
  base := 0;
  WHILE (base <= 0) DO
   BEGIN
     WRITELN('Digite a medida da base ');
      READLN(base);
   END;
  altura := 0;
  WHILE (altura <= 0) DO
   BEGIN
     WRITELN('Digite a medida da altura ');
     READLN(altura);
   END;
  area := base * altura / 2;
  WRITELN('µrea = ', area:5:2);
  READLN;
END.
