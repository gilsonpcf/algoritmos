PROGRAM EX9;
USES CRT;
VAR base, altura, area: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura da base do triƒngulo}
WRITELN('Digite a base do triƒngulo');
{Recebe a base do triƒngulo}
READLN(base);
{Mostra mensagem antes da leitura da altura do triƒngulo}
WRITELN('Digite a altura do triƒngulo');
{Recebe a altura do triƒngulo}
READLN(altura);
{Calcula a  rea do triƒngulo}
area := (base * altura)/2;
{Mostra a  rea do triƒngulo formatada com duas casas decimais}
WRITELN('A  rea do triƒngulo  ‚ ',area:5:2);
{P ra o programa a espera de um enter}
READLN;
END.
