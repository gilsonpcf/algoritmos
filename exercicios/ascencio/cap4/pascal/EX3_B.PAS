PROGRAM EX3;
USES CRT;
VAR  num1, num2: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem de leitura do primeiro n£mero}
WRITE('Digite o primeiro n£mero: ');
{Recebe o primeiro n£mero}
READLN(num1);
{Mostra mensagem de leitura do segundo n£mero}
WRITE('Digite o segundo n£mero: ');
{Recebe o segundo n£mero}
READLN(num2);
{Verifica qual o maior n£mero}
IF num1 > num2
   THEN WRITELN('O maior n£mero : ',num1:5:2)
   ELSE IF num2 > num1
        THEN WRITELN('O maior n£mero : ',num2:5:2)
        ELSE WRITELN('Os n£meros sao iguais');
{P ra o programa a espera de um ENTER}
READLN;
END.
