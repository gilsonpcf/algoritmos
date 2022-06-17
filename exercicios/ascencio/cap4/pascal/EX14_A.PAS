PROGRAM EX14;
USES CRT;
VAR sal, novo_sal, boni, aux: real;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem solicitando o valor do sal rio}
WRITELN('Digite o valor do sal rio');
{Recebe o valor do sal rio}
READLN(sal);
{Calcula a bonifica‡ao}
IF sal <= 500
THEN boni:= sal * 5/100;
IF (sal > 500) AND (sal <1200)
THEN boni:=sal * 12/100;
IF sal >= 1200
THEN boni:=0;
{Calcula o aux¡lio}
IF sal <= 600
THEN aux:=150;
IF sal > 600
THEN aux:=100;
{Calcula o novo sal rio}
novo_sal:=sal + boni + aux;
{Mostra o novo sal rio}
WRITELN('Novo sal rio = ',novo_sal:5:2);
{P ra o programa a espera de um ENTER}
READLN;
END.
