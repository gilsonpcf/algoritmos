PROGRAM EX24;
USES CRT;
VAR hora, h,m, conversao: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura da hora e dos minutos como um n£mero real}
WRITE('Digite a hora HH.MM: ');
{Receba a hora e os minutos}
READLN(hora);
{Pega a parte inteira do n£mero digitado que representa a hora}
h := trunc(hora);
{Retira a parte inteira do n£mero digitado, o que resta s∆o os minutos}
m := hora - h;
{Converte a hora, vari†vel h, em minutos, multiplicando por 60}
{Converte o minuto, vari†vel m, um n£mero fracion†rio,
em minutos, multiplicando por 100}
conversao := (h * 60) + (m * 100);
{Mostra a hora e os minutos digitados convertidos para minutos}
WRITELN('Hora convertida para minutos = ',conversao:5:0);
{P†ra o programa a espera de um enter}
READLN;

END.
