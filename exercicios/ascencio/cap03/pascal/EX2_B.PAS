PROGRAM EX2;
USES CRT;
VAR nota1, nota2, nota3, soma, media: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura das notas}
WRITELN('Digite as trˆs notas');
{Recebe as trˆs notas}
READLN(nota1, nota2, nota3);
{Calcula a m‚dia}
soma := (nota1 + nota2 + nota3);
media := soma/3;
{Mostra a m‚dia formatada com duas casas decimais}
WRITELN('M‚dia = ',media:4:2);
{P ra o programa a espera de um enter}
READLN;							          			
END.
