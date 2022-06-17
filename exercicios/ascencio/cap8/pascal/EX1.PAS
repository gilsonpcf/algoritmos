PROGRAM EX1;
USES CRT;
VAR num: INTEGER;
    x: BOOLEAN;

FUNCTION verifica(num:REAL): BOOLEAN;
BEGIN
  IF num >= 0
     THEN verifica := true
  ELSE verifica := false;
END;
BEGIN
CLRSCR;
WRITE('Digite um n£mero: ');
READLN(num);
x := verifica(num);
WRITELN;
IF x=true
   THEN WRITELN('N£mero positivo')
   ELSE WRITELN('N£mero negativo');
READLN;
END.