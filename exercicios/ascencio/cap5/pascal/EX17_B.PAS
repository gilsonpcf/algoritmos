PROGRAM EX17;
USES CRT;
VAR sal_carlos, sal_joao: REAL;
        meses: INTEGER;
BEGIN
  CLRSCR;
  WRITELN('Digite o sal rio de Carlos ');
  READLN(sal_carlos);
  sal_joao := sal_carlos / 3;
  meses := 0;
  REPEAT
    sal_carlos := sal_carlos + (sal_carlos * 2 / 100);
    sal_joao := sal_joao + (sal_joao * 5 / 100);
    meses := meses + 1;
  UNTIL sal_joao >= sal_carlos; 
  WRITELN('Meses = ', meses);
  READLN;
END.
