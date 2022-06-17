PROGRAM EX17;
USES CRT;
VAR salario, cheque1, cheque2, cpmf1, cpmf2, saldo: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura do sal rio}
WRITE('Digite o sal rio recebido: ');
{Recebe o sal rio}
READLN(salario);
{Mostra mensagem antes da leitura do valor do 1§ cheque}
WRITE('Digite o valor do 1§ cheque: ');
{Recebe o valor do 1§ cheque}
READLN(cheque1);
{Mostra mensagem antes da leitura do valor do 2§ cheque}
WRITE('Digite o valor do 2§ cheque: ');
{Recebe o valor do 2§ cheque}
READLN(cheque2);
{Calcula a cpmf do 1§ cheque}
cpmf1 := cheque1 * 0.38 / 100;
{Calcula a cpmf do 2§ cheque}
cpmf2 := cheque2 * 0.38 / 100;
{Calcula o saldo}
saldo := salario - cheque1 - cheque2 - cpmf1 - cpmf2;
{Mostra o saldo}
WRITELN('O valor do saldo ‚: ', saldo:5:2);
{P ra o programa a espera de um enter}
READLN;
END.
