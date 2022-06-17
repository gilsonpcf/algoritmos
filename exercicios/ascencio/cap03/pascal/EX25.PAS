PROGRAM EX25;
USES CRT;
VAR custo, convite, qtd: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura do custo do espet culo}
WRITE('Digite o custo do espet culo: ');
{Recebe o custo do espet culo}
READLN(custo);
{Mostra mensagem antes da leitura do pre‡o do convite}
WRITE('Digite o pre‡o do convite: ');
{Recebe o pre‡o do convite}
READLN(convite);
{Calcula a quantidade de convites}
qtd := custo / convite;
{Mostra a quantidade de convites}
WRITELN('Quantidade de convites necess ria: ', qtd:5:2);
{P ra o programa a espera de um enter}
READLN;
END.
