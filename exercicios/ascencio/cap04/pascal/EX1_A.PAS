PROGRAM EX1;
USES CRT;
VAR nota_trab, aval_sem, exame, media: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura da nota do laborat¢rio}
WRITE('Digite a nota do trabalho em laborat rio: ');
{Recebe a nota do laborat¢rio}
READLN(nota_trab);
{Mostra mensagem antes da leitura da nota semestral}
WRITE('Digite a nota da avalia‡ao semestral: ');
{Recebe a nota semestral}
READLN(aval_sem);
{Mostra mensagem antes da leitura da nota do exame}
WRITE('Digite a nota do exame final: ');
{Recebe a nota do exame}
READLN(exame);
{Calcula a m‚dia ponderada}
media := (nota_trab * 2 + aval_sem * 3 + exame * 5) / 10;
{Mostra a m‚dia calculada com formata‡ao}
WRITELN('M‚dia ponderada: ',media:5:2);
{Mostra o conceito de acordo com a m‚dia}
IF (media >=8) AND (media <=10)
   THEN WRITELN('Obteve conceito A');
IF (media >=7) AND (media < 8)
  THEN WRITELN('Obteve conceito B');
IF (media >= 6) AND (media < 7)
 THEN WRITELN('Obteve conceito C');
IF (media >= 5) AND (media < 6)
 THEN WRITELN('Obteve conceito D');
IF (media >= 0) AND (media < 5)
  THEN WRITELN('Obteve conceito E');
{P ra o programa a espera de um ENTER}
READLN;
END.
