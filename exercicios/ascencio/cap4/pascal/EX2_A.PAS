PROGRAM EX2;
USES CRT;
VAR nota1, nota2, nota3, media, nota_exame: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura da primeira nota}
WRITE('Digite a primeira nota: ');
{Recebe a primeira nota}
READLN(nota1);
{Mostra mensagem antes da leitura da segunda nota}
WRITE('Digite a segunda nota: ');
{Recebe a segunda nota}
READLN(nota2);
{Mostra mensagem antes da leitura da terceira nota}
WRITE('Digite a terceira nota: ');
{Recebe a terceira nota}
READLN(nota3);
{Calcula a m‚dia aritm‚tica}
media := (nota1 + nota2 + nota3) / 3;
{Mostra a m‚dia aritm‚tica}
WRITELN('M‚dia aritm‚tica: ',media:5:2);
{Mostra a situa‡ao}
IF (media >=0) AND (media <3)
   THEN WRITELN('Reprovado');
IF (media >=3) AND (media < 7)
   THEN BEGIN
	WRITELN('Exame ');
	nota_exame := 12 - media;
 	WRITELN('Deve tirar nota ',nota_exame:4:2,' para ser aprovado');
   	END;
IF (media >= 7) AND (media < 10)
   THEN WRITELN('Aprovado');
{P ra o programa a espera de um ENTER}
READLN;
END.
