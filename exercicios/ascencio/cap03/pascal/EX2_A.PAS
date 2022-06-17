PROGRAM EX2;
USES CRT;
VAR nota1, nota2, nota3, media: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Recebe as trˆs notas}
READLN(nota1, nota2, nota3);
{Calcula a m‚dia aritm‚tica}
media := (nota1 + nota2 + nota3)/3;
{Mostra a m‚dia formatada para duas casas decimais}
WRITELN(media:4:2);
{P ra o programa a espera de um enter}
READLN;											
END.
