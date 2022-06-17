PROGRAM EX20;
USES CRT;
VAR cont_f, cont_m: INTEGER;
    cod, num_h, sal_b, sal_l, media_m, media_f: REAL;
    sexo: CHAR;
BEGIN
  CLRSCR;
  WRITELN('Digite o c¢digo do professor ');
  READLN(cod);
  cont_m := 0;
  cont_f := 0;
  WHILE (cod <> 99999) DO
  BEGIN
      WRITELN('Digite sexo do professor (M ou F) ');
      READLN(sexo);
      WRITELN('Digite o n£mero de horas trabalhadas ');
      READLN(num_h);
      sal_b := num_h * 30;
      IF (sexo = 'M')
	THEN BEGIN
	           sal_l := sal_b - (sal_b * 10 / 100);
	           media_m := media_m + sal_l;
	           cont_m := cont_m + 1;
	   	END;
       IF (sexo = 'F')
	THEN BEGIN
	           sal_l := sal_b - (sal_b * 5 / 100);
	           media_f := media_f + sal_l;
	           cont_f := cont_f + 1;
	  	END;
        WRITELN('C¢digo do professor = ', cod:5:0);
        WRITELN('Sal rio bruto = ', sal_b:5:2);
        WRITELN('Sal rio l¡quido = ', sal_l:5:2);
        WRITELN;
        WRITELN('Digite o c¢digo do professor ');
        READLN(cod);
   END;
  IF (cont_m = 0)
   THEN WRITELN('Nenhum professor do sexo masculino')
   ELSE BEGIN
        media_m := media_m / cont_m;
        WRITELN('M‚dia dos sal rios dos professores ', media_m:5:2);
        END;
  IF (cont_f = 0)
   THEN WRITELN('Nenhum professor do sexo feminino')
   ELSE BEGIN
        media_f := media_f / cont_f;
        WRITELN('M‚dia dos sal rios das professoras ', media_f:5:2);
        END;
  READLN;
END.
