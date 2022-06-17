PROGRAM EX19;
USES CRT;
VAR altura, peso: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem solicitando a altura}
WRITELN('Digite a altura ');
{Recebe a altura}
READLN(altura);
{Mostra mensagem solicitando o peso}
WRITELN('Digite o peso ');
{Recebe o peso}
READLN(peso);
{Mostra a classifica‡ao}
IF altura < 1.20
THEN BEGIN
     IF peso <= 60
     THEN WRITELN('Classifica‡ao A ');
     IF (peso > 60) AND (peso <= 90)
     THEN WRITELN('Classifica‡ao D ');
     IF peso > 90
     THEN WRITELN('Classifica‡ao G ');
     END;
IF (altura >= 1.20) AND (altura <= 1.70)
THEN BEGIN
     IF peso <= 60
     THEN WRITELN('Classifica‡ao B ');
     IF (peso > 60) AND (peso <= 90)
     THEN WRITELN('Classifica‡ao E ');
     IF peso > 90
     THEN WRITELN('Classifica‡ao H ');
     END;
IF altura > 1.70
THEN BEGIN
     IF peso <= 60
     THEN WRITELN('Classifica‡ao C ');
     IF (peso > 60) AND (peso <= 90)
     THEN WRITELN('Classifica‡ao F ');
     IF peso > 90
     THEN WRITELN('Classifica‡ao I ');
END;
{P ra o programa a espera de um ENTER}
READLN;
END.
