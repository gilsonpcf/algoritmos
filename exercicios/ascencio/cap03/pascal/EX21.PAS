PROGRAM EX21;
USES CRT;
VAR X, Y, Z: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura do tamanho da escada}
WRITELN('Digite o tamanho da escada');
{Recebe o tamanho da escada}
READLN(Z);
{Mostra mensagem antes da leitura da altura desejada}
WRITELN('Digite a altura desejada');
{Recebe a altura desejada para pregar o prego}
READLN(X);
{Calcula a distƒncia da escada da parede}
Y := SQR(Z) - SQR(X);
Y := SQRT(Y);
{Mostra a distƒncia}
WRITELN('A distƒncia necess ria ‚ ' , Y:5:2);
{P ra o programa a espera de um enter}
READLN;
END.
