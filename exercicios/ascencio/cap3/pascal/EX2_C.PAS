PROGRAM EX2;
USES CRT;
VAR nota1, nota2, nota3, media: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura da 1¦ nota}
WRITELN('Digite a primeira nota');
{Recebe a 1¦ nota}
READLN(nota1);
{Mostra mensagem antes da leitura da 2¦ nota}
WRITELN('Digite a segunda nota');
{Recebe a 2¦ nota}
READLN(nota2);
{Mostra mensagem antes da leitura da 3¦ nota}
WRITELN('Digite a terceira nota');
{Recebe a 3¦ nota}
READLN(nota3);
{Calcula a m‚dia aritm‚tica}
media := (nota1 + nota2 + nota3)/3;
{Mostra a m‚dia formatada com duas casas decimais}
WRITELN('M‚dia = ',media:4:2);
{P ra o programa a espera de um enter}
READLN;
END.
