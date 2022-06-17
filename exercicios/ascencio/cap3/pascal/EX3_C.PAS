PROGRAM EX3;
USES CRT;
VAR nota1, nota2, nota3, peso1, peso2, peso3: REAL;
    soma1, soma2, soma3, total, media: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura da 1¦ nota}
WRITELN('Digite a 1¦ nota');
{Recebe a 1¦ nota}
READLN(nota1);
{Mostra mensagem antes da leitura do 1§ peso}
WRITELN('Digite o peso da 1¦ nota');
{Recebe o 1§ peso}
READLN(peso1);
{Mostra mensagem antes da leitura da 2¦ nota}
WRITELN('Digite a 2¦ nota');
{Recebe a 2¦ nota}
READLN(nota2);
{Mostra mensagem antes da leitura do 2§ peso}
WRITELN('Digite o peso da 2¦ nota');
{Recebe o 2§ peso}
READLN(peso2);
{Mostra mensagem antes da leitura da 3¦ nota}
WRITELN('Digite a 3¦ nota');
{Recebe a 3¦ nota}
READLN(nota3);
{Mostra mensagem antes da leitura do 3§ peso}
WRITELN('Digite o peso da 3¦ nota');
{Recebe o 3§ peso}
READLN(peso3);
{Calcula a m‚dia ponderada}
soma1:=nota1 * peso1;
soma2:=nota2 * peso2;
soma3:=nota3 * peso3;
total:=peso1 + peso2 + peso3;
media := (soma1 + soma2 + soma3)/total;
{Mostra a m‚dia formatada com duas casas decimais}
WRITELN('M‚dia Ponderada = ', media:5:2);
{P ra o progrma a espera de um enter}
READLN;
END.
