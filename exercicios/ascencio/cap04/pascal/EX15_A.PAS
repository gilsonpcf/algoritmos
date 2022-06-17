PROGRAM EX15;
USES CRT;
VAR sal_min, nht, ndep, nhet, sal_receber, vh, smes, vdep, vhe, imp: REAL;
        sbruto, sliq, grat : REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem solicitando o valor do sal rio m¡nimo}
WRITELN('Digite o valor do sal rio m¡nimo');
{Recebe o valor do sal rio m¡nimo}
READLN(sal_min);
{Mostra mensagem solicitando o n£mero de horas trabalhadas}
WRITELN('Digite o n£mero de horas trabalhadas');
{Recebe o n£mero de horas trabalhadas}
READLN(nht);
{Mostra mensagem solicitando o n£mero de dependentes}
WRITELN('Digite o n£mero de dependentes');
{Recebe o n£mero de dependentes}
READLN(ndep);
{Mostra mensagem solicitando o n£mero de horas extras}
WRITELN('Digite o n£mero de horas extras trabalhadas');
{Recebe o n£mero de horas extras}
READLN(nhet);
{Calcula o valor da hora trabalhada}
vh := 1/5 * sal_min;
{Calcula o sal rio mˆs}
smes := nht * vh;
{Calcula o valor dos dependentes}
vdep := 32 * ndep;
{Calcula o valor da hora extra e o valor a receber pelas horas extras}
vhe := nhet * (vh + (vh * 50/100));
{Calcula o sal rio bruto}
sbruto := smes + vdep + vhe;
{Calcula o sal rio imposto}
IF sbruto < 200
THEN imp := 0;
IF (sbruto >= 200) AND (sbruto <= 500)
THEN imp := sbruto * 10/100;
IF sbruto > 500
THEN imp := sbruto * 20/100;
{Calcula o sal rio l¡quido}
sliq := sbruto - imp;
{Calcula a gratifica‡ao}
IF sliq <= 350
THEN grat := 100;
IF sliq > 350
THEN grat := 50;
{Calcula o valor a receber}
sal_receber := sliq + grat;
{Mostra o valor a receber}
WRITELN('Sal rio a receber = ', sal_receber:5:2);
{P ra o programa a espera de um ENTER}
READLN;
END.
