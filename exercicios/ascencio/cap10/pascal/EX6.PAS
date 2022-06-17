PROGRAM EX6;
USES CRT;
TYPE REGISTRO = RECORD
nome: STRING;
venda_nov, venda_dez, venda_jan : REAL;
END;
VAR  func: ARRAY[1..15] OF REGISTRO;
     i,pos_maior, mes, valor_total: INTEGER;
     PONTOS,MAIOR : REAL;
BEGIN
CLRSCR;
WRITELN('CADASTRANDO OS FUNCIONµRIOS');
FOR i := 1 TO 15 DO
BEGIN
WRITELN('Digite o nome do ',i, '§ funcion rio');
READLN(func[i].nome);
WRITELN('Digite o valor vendido no mˆs de novembro pelo ',i, '§ funcion rio');
READLN(func[i].venda_nov);
WRITELN('Digite o valor vendido no mˆs de dezembro pelo ',i, '§ funcion rio');
READLN(func[i].venda_dez);
WRITELN('Digite o valor vendido no mˆs de janeiro pelo ',i, '§ funcion rio');
READLN(func[i].venda_jan);
END;
WRITELN('MOSTRANDO AS PONTUA€åES MENSAIS DE CADA FUNCIONµRIO');
FOR i := 1 TO 15 DO
BEGIN
WRITELN('Funcion rio: ', func[i].nome);
pontos := func[i].venda_nov/100;
WRITELN('Pontos de novembro = ', pontos:5:2);
pontos := func[i].venda_dez/100;
WRITELN('Pontos de dezembro = ', pontos:5:2);
pontos := func[i].venda_jan/100;
WRITELN('Pontos de janeiro = ', pontos:5:2);
pontos := func[i].venda_nov/100 + func[i].venda_dez/100 + func[i].venda_jan/100;
WRITELN('Total de pontos = ', pontos:5:2);
WRITELN('Tecle enter para continuar');
READLN;
END;
WRITELN('MOSTRANDO A PONTUA€ÇO TOTAL DO MÒS DE NOVEMBRO');
pontos := 0;
FOR i := 1 TO 15 DO
BEGIN
pontos := pontos + func[i].venda_nov/100;
END;
WRITELN(pontos:5:2);
WRITELN('MOSTRANDO A PONTUA€ÇO TOTAL DO MÒS DE DEZEMBRO');
pontos := 0;
FOR i := 1 TO 15 DO
BEGIN
pontos := pontos + func[i].venda_dez/100;
END;
WRITELN(pontos:5:2);
WRITELN('MOSTRANDO A PONTUA€ÇO TOTAL DO MÒS DE JANEIRO');
pontos := 0;
FOR i := 1 TO 15 DO
BEGIN
pontos := pontos + func[i].venda_jan/100;
END;
WRITELN(pontos:5:2);
WRITELN('Tecle enter para continuar');
READLN;
WRITELN('MOSTRANDO A MAIOR PONTUA€ÇO');
maior := 0;
FOR i := 1 TO 15 DO
BEGIN
IF func[i].venda_nov/100 > maior
THEN BEGIN
	  maior := func[i].venda_nov/100;
	  pos_maior := i;
	  mes := 1;
	END;
IF func[i].venda_dez/100 > maior
THEN BEGIN
	  maior := func[i].venda_dez/100;
	  pos_maior := i;
	  mes := 2;
	END;
IF func[i].venda_jan/100 > maior
THEN BEGIN
	  maior := func[i].venda_jan/100;
	  pos_maior := i;
	  mes := 3;
	END;
END;
WRITELN('Funcion rio: ', func[pos_maior].nome);
WRITELN('Maior pontua‡Æo: ', maior:5:2);
IF mes = 1
THEN WRITELN('No mˆs de novembro');
IF mes = 2
THEN WRITELN('No mˆs de dezembro');
IF mes = 3
THEN WRITELN('No mˆs de janeiro');
WRITELN('MOSTRANDO O VALOR TOTAL VENDIDO');
pontos := 0;
FOR  i := 1 TO 15 DO
BEGIN
pontos := pontos + func[i].venda_nov/100 + func[i].venda_dez/100 + func[i].venda_jan/100;
END;
WRITELN('Total vendido = ', pontos:5:2);
READLN;
END.
