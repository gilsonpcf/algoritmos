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
     THEN WRITELN('Classifica‡ao A ')
     ELSE IF peso <=90
          THEN WRITELN('Classifica‡ao D ')
          ELSE  WRITELN('Classifica‡ao G ');
     END
ELSE IF altura <= 1.70
     THEN BEGIN
          IF peso <= 60
          THEN WRITELN('Classifica‡ao B ')
          ELSE IF peso <=90
               THEN WRITELN('Classifica‡ao E ')
               ELSE WRITELN('Classifica‡ao H ');
         END
     ELSE BEGIN
          IF peso <= 60
          THEN WRITELN('Classifica‡ao C ')
          ELSE IF peso <= 90
               THEN WRITELN('Classifica‡ao F ')
               ELSE WRITELN('Classifica‡ao I ');
          END;
{P ra o programa a espera de um ENTER}
READLN;
END.
