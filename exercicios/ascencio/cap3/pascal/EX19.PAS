PROGRAM EX19;
USES CRT;
VAR a_degrau, a_usuario, qtd_degraus: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura da altura do degrau}
WRITE('Digite a altura do degrau: ');
{Recebe a altura do degrau}
READLN(a_degrau);
{Mostra mensagem antes da leitura da altura que o usu rio deseja}
WRITE('Digite a altura deseja pelo usu rio: ');
{Receba a altura que o usu rio deseja}
READLN(a_usuario);
{Calcula a quantidade de degraus}
qtd_degraus := a_usuario / a_degrau;
{Mostra a quantidade de degraus}
WRITELN('Total de degraus necess rios: ',qtd_degraus:5:2);
{P ra o programa a espera de um enter}
READLN;
END.
