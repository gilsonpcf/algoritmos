PROGRAM EX16;
USES CRT;
VAR horas_t, vlr_sal_min, vlr_hora_t, vlr_sal_bru, imp, vlr_sal_liq: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura do total de horas trabalhadas}
WRITE('Digite o total de horas trabalhadas: ');
{Recebe o total de horas trabalhadas}
READLN(horas_t);
{Mostra mensagem antes da leitura do sal rio m¡nimo}
WRITE('Digite o valor do sal rio m¡nimo: ');
{Recebe o valor do sal rio m¡nimo}
READLN(vlr_sal_min);
{Calcula o valor da hora trabalhada}
vlr_hora_t :=  vlr_sal_min / 2;
{Calcula o sal rio bruto}
vlr_sal_bru := vlr_hora_t * horas_t;
{Calcula o imposto}
imp := vlr_sal_bru * 3 / 100;
{Calcula o sal rio l¡quido}
vlr_sal_liq := vlr_sal_bru - imp;
{Mostra o sal rio a receber, ou seja, o sal rio l¡quido}
WRITELN('O sal rio a receber ‚: ', vlr_sal_liq:5:2);
{P ra o programa a espera de um enter}
READLN;
END.
