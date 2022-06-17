PROGRAM EX22;
USES CRT;
VAR vlr_sal, qtd_kw, vlr_kw, vlr_reais, desc, vlr_desc: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura do sal rio}
WRITE('Digite o valor do sal rio: ');
{Recebe o valor do sal rio}
READLN(vlr_sal);
{Mostra mensagem antes da leitura da quantidade de Kw}
WRITE('Digite a quantidade de Kw consumidos: ');
{Recebe a quantidade de Kw}
READLN(qtd_kw);
{Calcula o valor de cada Kw}
vlr_kw := vlr_sal / 5;
{Calcula o valor a pagar}
vlr_reais := vlr_kw * qtd_kw;
{Calcula o valor do desconto}
desc := vlr_reais * 15 / 100;
{Calcula o valor a pagar com desconto}
vlr_desc := vlr_reais - desc;
{Mostra o valor de cada Kw}
WRITELN('Valor do Kw: ',vlr_kw:5:2);
{Mostra o valor a pagar}
WRITELN('Valor a ser pago: ', vlr_reais:5:2);
{Mostra o valor a pagar com desconto}
WRITELN('Valor a ser pago com desconto: ',vlr_desc:5:2);
{P ra o programa a espera de um enter}
READLN;
END.
