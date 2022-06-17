PROGRAM EX16;
USES CRT;
VAR pre, venda, novo_pre: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem solicitando o valor das vendas mensais}
WRITELN('Digite a venda m‚dia mensal');
{Recebe o valor das vendas mensais}
READLN(venda);
{Mostra mensagem solicitando o pre‡o atual}
WRITELN('Digite o pre‡o atual');
{Recebe o pre‡o atual}
READLN(pre);
{Calcula o novo pre‡o}
IF (venda < 500) OR (pre < 30)
THEN novo_pre := pre + 10/100 * pre
ELSE IF ((venda >= 500) AND (venda < 1200)) OR ((pre >= 30) AND (pre < 80))
     THEN novo_pre := pre + 15/100 * pre
     ELSE IF (venda >= 1200) OR (pre >= 80)
          THEN novo_pre := pre - 20/100 * pre;
{Mostra o novo pre‡o}
WRITELN('Novo pre‡o = ',novo_pre:5:2);
{P ra o programa a espera de um ENTER}
READLN;
END.
