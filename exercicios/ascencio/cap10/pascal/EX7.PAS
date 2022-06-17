PROGRAM EX7;
USES CRT;
TYPE REGISTRO = RECORD
cod, num_aula: INTEGER;
sexo : Char;
END;
VAR prof: ARRAY[1..10] OF REGISTRO;
        sal_bruto, desc, sal_liq, ma_masc, ma_fem, soma_masc, soma_fem : REAL;
        qt_masc, qt_fem, i : INTEGER;
BEGIN
CLRSCR;
FOR i := 1 TO 10 DO
BEGIN
prof[i].cod := 0;
prof[i].num_aula := 0;
END;
soma_masc := 0;
soma_fem := 0;
qt_masc := 0;
qt_fem := 0;
WRITELN('Digitando os dados dos 10 professores');
FOR i := 1 TO 10 DO
BEGIN
WRITELN(i, '§ professor');
WRITELN('Digite o c¢digo');
READLN(prof[i].cod);
WRITELN('Digite o n£mero de aulas');
READLN(prof[i].num_aula);
REPEAT
WRITELN('Digite o sexo (F - feminino ou M - masculino');
READLN(prof[i].sexo);
prof[i].sexo := UpCase(prof[i].sexo);
UNTIL (prof[i].sexo = 'F') OR (prof[i].sexo = 'M')
END;
WRITELN('Mostrando a listagem com os sal rios dos professores');
FOR i := 1 TO 10 DO
BEGIN
WRITELN(i, '§ professor');
WRITELN('C¢digo = ',prof[i].cod);
sal_bruto := 40.50 * prof[i].num_aula;
WRITELN('Sal rio bruto = ',sal_bruto:5:2);
IF prof[i].sexo = 'F'
THEN BEGIN
 IF prof[i].num_aula <= 70
	 THEN desc := sal_bruto * 7/100
	 ELSE desc := sal_bruto * 5/100
	END
ELSE BEGIN
 IF prof[i].num_aula <= 70
	 THEN desc := sal_bruto * 10/100
	 ELSE desc := sal_bruto * 8/100
          END;
WRITELN('Desconto = ', desc:5:2);
sal_liq := sal_bruto - desc;
WRITELN('Sal rio l¡quido = ', sal_liq:5:2);
WRITELN('Tecle enter para continuar ');
readln;
IF prof[i].sexo = 'F'
THEN BEGIN
	 soma_fem := soma_fem + sal_bruto;
	 qt_fem := qt_fem + 1;
	END
ELSE BEGIN
	 soma_masc := soma_masc + sal_bruto;
	 qt_masc := qt_masc + 1;
	END;
END;
IF qt_fem = 0
THEN ma_fem := 0
ELSE ma_fem := soma_fem / qt_fem;
IF qt_masc = 0
THEN ma_masc := 0
ELSE ma_masc := soma_masc / qt_masc;
WRITELN('M‚dia dos sal rios brutos dos professores do sexo feminino = ',ma_fem:5:2);
WRITELN('M‚dia dos sal rios brutos dos professores do sexo masculino = ',ma_masc:5:2);
READLN;
END.
