PROGRAM EX20;
USES CRT;
VAR ang, alt, escada, radiano: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura do valor do �ngulo}
WRITELN('Digite o valor do �ngulo em graus ');
{Recebe o valor do �ngulo}
READLN(ang);
{Mostra mensagem antes da leitura da altura da parede}
WRITELN('Digite a altura ');
{Recebe a altura da parede}
READLN(alt);
{Converte o �ngulo de graus para radianos}
radiano := ang * 3.14 / 180;
{Calcula a altura da escada}
escada := alt / sin(radiano);
{Mostra a altura da escada}
WRITELN('O comprimento da escada � ', escada:5:2);
{P�ra o programa a espera de um enter}
READLN;
END.
