PROGRAM EX15;
USES CRT;
VAR p_fab, perc_d, perc_i, vlr_d, vlr_i, p_final: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura do pre‡o de f brica}
WRITELN('Digite o pre‡o de f brica');
{Recebe o pre‡o de f brica}
READLN(p_fab);
{Mostra mensagem antes da leitura do percentual do distribuidor}
WRITELN('Digite o percentual de lucro do distribuidor');
{Recebe o percentual do distribuidor}
READLN(perc_d);
{Mostra mensagem antes da leiura do percentual de impostos}
WRITELN('Digite o percentual de impostos');
{Recebe o percentual de impostos}
READLN(perc_i);
{Calcula o valor do distribuidor}
vlr_d := p_fab * perc_d / 100;
{Calcula o valor dos impostos}
vlr_i := p_fab * perc_i / 100;
{Calcula o pre‡o final}
p_final := p_fab + vlr_d + vlr_i;
{Mostra o lucro do distribuidor}
WRITELN('O lucro do distribuidor ‚ ' ,vlr_d:5:2);
{Mostra o valor dos impostos}
WRITELN('O valor dos impostos ‚ ',vlr_i:5:2);
{Mostra o pre‡o final}
WRITELN('O pre‡o final ‚ ',p_final:5:2);
{P ra o programa a espera de um enter}
READLN;
END.
