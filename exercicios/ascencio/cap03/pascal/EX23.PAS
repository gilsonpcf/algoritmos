PROGRAM EX23;
USES CRT;
VAR num, i, f, a: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura do n£mero real}
WRITELN('Digite um n£mero real');
{Recebe um n£mero real}
READLN(num);
{Coloca a parte inteira do n£mero na vari vel i}
i := TRUNC(num);
{Coloca a parte fracion ria do n£mero na vari vel f}
f := FRAC(num);
{Coloca o arredondamento do n£mero na vari vel a}
a := ROUND(num);
{Mostra a parte inteira do n£mero digitado}
WRITELN('Parte inteira do n£mero: ',i:5:0);
{Mostra a parte fracion ria do n£mero digitado}
WRITELN('Parte fracion ria do n£mero: ',f:5:2);
{Mostra o arredondamento do n£mero digitado}
WRITELN('Arredondamento do n£mero: ',a:5:0);
{P ra o programa a espera de um enter}
READLN;
END.
