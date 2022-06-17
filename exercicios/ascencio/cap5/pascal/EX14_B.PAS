PROGRAM EX14;
USES CRT;
VAR valor_inicial, juros, valor_parc, total, valor_juros: REAL;
         lin, num_parc, i: INTEGER;
BEGIN
CLRSCR;
WRITELN('Digite o valor inicial da d¡vida ');
READLN(valor_inicial);
juros := 0;
num_parc := 1;
total := valor_inicial;
valor_parc := valor_inicial;
GOTOXY(2,5);
WRITELN('Valor da d¡vida');
GOTOXY(2,6);
WRITE(total:5:2);
GOTOXY(20,5);
WRITELN('Valor dos juros');
GOTOXY(20,6);
WRITE(juros:5:2);
GOTOXY(38,5);
WRITELN('Quantidade de parcelas');
GOTOXY(38,6);
WRITE(num_parc);
GOTOXY(62,5);
WRITELN('Valor da parcela');
GOTOXY(62,6);
WRITELN(valor_parc:5:2);
juros := juros + 10;
num_parc := num_parc + 2;
lin := 7;
WHILE num_parc <= 12 DO
     BEGIN
	valor_juros := valor_inicial * juros / 100;
	total := valor_inicial + valor_juros;
	valor_parc := total / num_parc;
        GOTOXY(2,lin);
        WRITE(total:5:2);
        GOTOXY(20,lin);
        WRITE(valor_juros:5:2);
        GOTOXY(38,lin);
        WRITE(num_parc);
        GOTOXY(62,lin);
        WRITELN(valor_parc:5:2);
	juros := juros + 5;
	num_parc := num_parc + 3;
        lin := lin + 1
     END;
READLN;
END.
