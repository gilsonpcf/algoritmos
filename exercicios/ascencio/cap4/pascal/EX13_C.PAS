PROGRAM EX13;
USES CRT;
VAR  sal, imp, aum, novo_sal: REAL;
	op: INTEGER;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra o menu da tela}
WRITELN('Menu de Op‡oes');
WRITELN('1 - Imposto');
WRITELN('2 - Novo Sal rio');
WRITELN('3 - Classifica‡oes');
WRITE('Digite a op‡ao desejada:  ');
{Recebe a op‡ao do usu rio}
READLN(op);
{Calcula a sa¡da de acordo com a op‡ao escolhida}
CASE op OF
1 : BEGIN
	WRITELN('Digite o valor do sal rio');
	READLN(sal);
	IF sal < 500
	THEN imp := sal * 5/100;
	IF (sal >= 500) AND (sal <= 850)
	THEN imp := sal * 10/100;
	IF sal > 850
	THEN imp := sal * 15/100;
	WRITELN('Valor do Imposto = ',imp:5:2);
   END;
2 : BEGIN
	WRITELN('Digite o valor do sal rio');
	READLN(sal);
	IF sal > 1500
	THEN aum := 25;
	IF (sal >= 750) AND (sal <= 1500)
	THEN aum := 50;
	IF (sal >= 450) AND (sal < 750)
	THEN aum := 75;
	IF (sal < 450)
	THEN aum := 100;
	novo_sal := sal + aum;
	WRITELN('Valor do Novo Sal rio = ',novo_sal:5:2);
   END;
3 : BEGIN
	WRITELN('Digite o valor do sal rio');
	READLN(sal);
	IF sal <= 700
	THEN WRITELN('Mal Remunerado');
	IF sal > 700
	THEN WRITELN('Bem Remunerado');
   END
ELSE WRITELN('Op‡ao Inv lida');
END;
{P ra o programa a espera de um ENTER}
READLN;
END.
