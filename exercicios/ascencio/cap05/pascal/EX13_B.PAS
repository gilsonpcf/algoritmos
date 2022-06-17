PROGRAM EX13;
USES CRT;
VAR i, num_cri, meses, tot_f, tot_m, tot_24: INTEGER;
    porc_f, porc_m, porc_24:REAL;
    sexo:CHAR;
BEGIN
  CLRSCR;
  WRITELN('Digite o n£mero de crian‡as nascidas no per¡odo ');
  READLN( num_cri);
  tot_m := 0;
  tot_f := 0;
  tot_24 := 0;
  i := 1;
  WHILE i <= num_cri DO
  BEGIN
     WRITELN('Digite o sexo da ', i, '¦ crian‡a ');
     READLN( sexo);
     WRITELN('Digite o tempo de vida (em meses) da ', i, '¦ crian‡a ');
     READLN(meses);
     IF sexo  = 'M'
     THEN tot_m := tot_m + 1;
     IF sexo = 'F'
     THEN tot_f := tot_f + 1;
     IF meses <= 24
     THEN tot_24 := tot_24 + 1;
     i := i + 1;
  END;
  IF num_cri = 0
  THEN WRITELN('Nenhuma crian‡a digitada')
  ELSE BEGIN
       porc_m := tot_m * 100 / num_cri;
       porc_f := tot_f * 100 / num_cri;
       porc_24 := tot_24 * 100 / num_cri;
       WRITELN('Percentual de crian‡as do sexo feminino mortas ', porc_f:5:2);
       WRITELN('Percentual de crian‡as do sexo masculino mortas ', porc_m:5:2);
       WRITELN('Percentual de crian‡as com 24 meses ou menos mortas ', porc_24:5:2);
       END;
  READLN;
END.
