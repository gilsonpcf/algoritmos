PROGRAM EX9;
USES CRT;
VAR base, altura, area: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura da base do triハgulo}
WRITELN('Digite a base do triハgulo');
{Recebe a base do triハgulo}
READLN(base);
{Mostra mensagem antes da leitura da altura do triハgulo}
WRITELN('Digite a altura do triハgulo');
{Recebe a altura do triハgulo}
READLN(altura);
{Calcula a �rea do triハgulo}
area := (base * altura)/2;
{Mostra a �rea do triハgulo formatada com duas casas decimais}
WRITELN('A �rea do triハgulo  � ',area:5:2);
{P�ra o programa a espera de um enter}
READLN;
END.
