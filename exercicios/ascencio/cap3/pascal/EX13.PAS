PROGRAM EX13;
USES CRT;
VAR pes, polegadas, jardas, milhas: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura da medida em p‚s}
WRITELN('Digite uma medida em p‚s');
{Receba a medida em p‚s}
READLN(pes);
{Calcula a medida em polegadas}
polegadas := pes * 12;
{Calcula a medida em jardas}
jardas := pes / 3;
{Calcula a medida em milhas}
milhas := jardas / 1760;
{Mostra a medida em polegadas}
WRITELN('Em polegadas  = ',polegadas:10:2);
{Mostra a medida em jardas}
WRITELN('Em jardas  = ',jardas:10:5);
{Mostra a medida em milhas}
WRITELN('Em milhas  = ',milhas:10:5);
{P ra o programa a espera de um enter}
READLN;
END.
