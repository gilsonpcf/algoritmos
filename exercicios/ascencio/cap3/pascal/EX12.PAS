PROGRAM EX12;
USES CRT;
VAR num1, num2, r1, r2: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura do 1§ n£mero}
WRITELN('Digite um n£mero');
{Recebe o 1§ n£mero}
READLN(num1);
{Mostra mensagem antes da leitura do 2§ n£mero}
WRITELN('Digite outro n£mero');
{Recebe o 2§ n£mero}
READLN(num2);
{Calcula o 1§ n£mero elevado ao 2§ n£mero}
r1 := EXP(num2 * LN(num1));
{Calcula o 2§ n£mero elevado ao 1§ n£mero}
r2 := EXP(num1 * LN(num2));
{Mostra o 1§ n£mero elevado ao 2§ n£mero}
WRITELN('Resposta 1  = ',r1:5:2);
{Mostra o 2§ n£mero elevado ao 1§ n£mero}
WRITELN('Resposta 2  = ',r2:5:2);
{P ra o programa a espera de um enter}
READLN;
END.
