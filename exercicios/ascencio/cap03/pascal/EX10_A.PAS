PROGRAM EX10;
USES CRT;
VAR area, raio: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura do raio}
WRITELN('Digite o raio do c�rculo');
{Recebe o raio}
READLN(raio);
{Calcula a �rea do c�rculo}
area := 3.1415 * raio * raio;
{Mostra a �rea calculada}
WRITELN('A �rea do c�rculo � ',area:5:2);
{P�ra o programa a espera de um enter}
READLN;											
END.
