PROGRAM EX22;
USES CRT;
VAR codigo, sal_base, tempo, imposto, grat, sal_liq: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem solicitando o c¢digo do funcion rio}
WRITELN('Digite o c¢digo do funcion rio');
{Recebe o c¢digo do funcion rio}
READLN(codigo);
{Mostra mensagem solicitando o sal rio base}
WRITELN('Digite o sal rio base do funcion rio');
{Recebe o sal rio base}
READLN(sal_base);
{Mostra mensagem solicitando o tempo de servi‡o}
WRITELN('Digite o tempo de servi‡o do funcion rio');
{Recebe o tempo de servi‡o}
READLN(tempo);
{Calcula o imposto}
IF sal_base < 200
THEN  imposto := 0
ELSE IF sal_base <= 450
	   THEN  imposto := 3/100 * sal_base
	   ELSE IF sal_base < 700
		  THEN imposto := 8/100 * sal_base
		   ELSE imposto := 12/100 * sal_base;
{Mostra o imposto}
WRITELN('Imposto = ',imposto:5:2);
{Calcula a gratifica‡ao}
IF sal_base > 500
THEN BEGIN
	IF tempo <= 3
	THEN grat := 20
	ELSE grat := 30
     END
ELSE BEGIN
	IF tempo <= 3
	THEN grat := 23
	ELSE IF tempo < 6
		THEN grat := 35
		 ELSE grat := 33
	END;
{Mostra a gratifica‡ao}
WRITELN('Gratifica‡ao = ',grat:5:2);
{Calcula o sal rio l¡quido}
sal_liq := sal_base - imposto + grat;
{Mostra o sal rio l¡quido}
WRITELN('Sal rio l¡quido = ',sal_liq:5:2);
{Mostra a classifica‡ao}
IF sal_liq <= 350
THEN WRITELN('Classifica‡ao A')
ELSE IF sal_liq < 600
	THEN WRITELN('Classifica‡ao B')
	 ELSE WRITELN('Classifica‡ao C');
{P ra o programa a espera de um ENTER}
READLN;
END.
