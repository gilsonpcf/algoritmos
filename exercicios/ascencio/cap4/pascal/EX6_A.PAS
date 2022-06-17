PROGRAM EX6;
USES CRT;
VAR num, r: INTEGER;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem solicitando o n£mero}
WRITELN('Digite um n£mero: ');
{Recebe o n£mero}
READLN(num);
{Verifica se o n£mero ‚ par atrav‚s da fun‡ao do resto da divisao}
r := num MOD 2;
{Mostra mensagem de n£mero par ou ¡mpar}
IF r = 0
THEN WRITELN('O n£mero ‚ par');
IF r <> 0
THEN WRITELN('O n£mero ‚ ¡mpar');
{P ra o programa a espera de um ENTER}
READLN;
END.
