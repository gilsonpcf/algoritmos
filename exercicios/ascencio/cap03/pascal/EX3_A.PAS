PROGRAM EX3;
USES CRT;
VAR nota1, nota2, nota3, peso1, peso2, peso3, media: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Recebe as trˆs notas e os trˆs pesos}
READLN(nota1, nota2, nota3, peso1, peso2, peso3);
{Calcula a m‚dia ponderada}
media := (nota1 * peso1 + nota2 * peso2 + nota3 * peso3)/(peso1 + peso2 + peso3);
{Mostra a m‚dia ponderada formatada com duas casas decimais}
WRITELN(media:5:2);
{P ra o programa a espera de um enter}
READLN;											
END.
