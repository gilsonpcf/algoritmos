PROGRAM EX7;
USES CRT;
VAR sal, salreceber, imp: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura do sal rio}
WRITELN('Digite o sal rio do funcion rio');
{Recebe o sal rio}
READLN(sal);
{Calcula o imposto}
imp := sal * 10/100;
{Calcula o sal rio a receber}
salreceber := sal + 50 - imp;
{Mostra o sal rio a receber formatado com duas casas decimais}
WRITELN('Sal rio a receber = ',salreceber:5:2);
{P ra o programa a espera de um enter}
READLN;											
END.
