PROGRAM EX23;
USES CRT;
VAR sal_min, nht, coeficiente, sal_bruto, imposto, grat, auxilio, sal_liq: REAL;
    turno, categoria: STRING;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem solicitando o valor do sal rio m¡nimo}
WRITELN('Digite o valor do sal rio m¡nimo');
{Recebe o sal rio m¡nimo}
READLN(sal_min);
{Mostra mensagem solicitando o turno}
WRITELN('Digite o turno de trabalho');
{Recebe o turno}
READLN(turno);
{Mostra mensagem solicitando a categoria}
WRITELN('Digite a categoria do trabalhador');
{Recebe a categoria}
READLN(categoria);
{Mostra mensagem solicitando o n£mero de horas trabalhadas}
WRITELN('Digite o n£mero de horas trabalhadas');
{Recebe o n£mero de horas trabalhadas}
READLN(nht);
{Calcula o coeficiente}
IF turno = 'M'
THEN coeficiente := sal_min * 10/100;
IF turno = 'V'
THEN coeficiente := sal_min * 15/100;
IF turno = 'N'
THEN coeficiente := sal_min * 12/100;
{Mostra o coeficiente}
WRITELN('Valor do Coeficiente = ',coeficiente:5:2);
{Calcula o sal rio bruto}
sal_bruto := nht * coeficiente;
{Mostra o sal rio bruto}
WRITELN('Valor do sal rio bruto = ',sal_bruto:5:2);
{Calcula o imposto}
IF categoria = 'O'
THEN BEGIN
	IF sal_bruto >= 300
	THEN imposto := sal_bruto*5/100
	ELSE imposto := sal_bruto*3/100;
   	END
ELSE BEGIN
	IF sal_bruto >= 400
	THEN imposto := sal_bruto*6/100
	ELSE imposto := sal_bruto*4/100;
  	END;
{Mostra o valor do imposto}
WRITELN('Valor do imposto = ',imposto:5:2);
{Calcula a gratifica‡ao}
IF (turno = 'N') AND (nht > 80)
THEN grat := 50
ELSE grat := 30;
{Mostra a gratifica‡ao}
WRITELN('Gratifica‡ao = ',grat:5:2);
{Calcula o aux¡lio}
IF (categoria = 'O') OR (coeficiente <= 25)
THEN auxilio := sal_bruto/3
ELSE auxilio := sal_bruto/2;
{Mostra o aux¡lio}
WRITELN('Valor do aux¡lio comida = ',auxilio:5:2);
{Calcula o sal rio l¡quido}
sal_liq := sal_bruto - imposto + grat + auxilio;
{Mostra o sal rio l¡quido}
WRITELN('Valor do sal rio l¡quido = ',sal_liq:5:2);
{Mostra a classifica‡ao}
IF sal_liq < 350
THEN WRITELN('Mal Remunerado');
IF (sal_liq >= 350) AND (sal_liq <= 600)
THEN WRITELN('Normal');
IF sal_liq > 600
THEN WRITELN('Bem Remunerado');
{P ra o programa a espera de um ENTER}
READLN;
END.
