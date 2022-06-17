PROGRAM EX11;
USES CRT;
VAR num, quad, cubo, r2, r3: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura do n£mero}
WRITELN('Digite um n£mero');
{Recebe o n£mero}
READLN(num);
{Calcula o n£mero digitado ao quadrado}
quad := SQR(num);
{Calcula o n£mero digitado ao cubo}
cubo := EXP(3 * LN(num));
{Calcula a raiz quadrada do n£mero digitado}
r2 := SQRT(num);
{Calcula a raiz c£bica do n£mero digitado}
r3 := EXP(1/3 * LN(num));
{Mostra o n£mero digitado ao quadrado}
WRITELN('N£mero ao quadrado  = ',quad:5:2);
{Mostra o n£mero digitado ao cubo}
WRITELN('N£mero ao cubo  = ',cubo:5:2);
{Mostra a raiz quadrada do n£mero digitado}
WRITELN('Raiz quadrada   = ',r2:5:2);
{Mostra a raiz c£bica do n£mero digitado}
WRITELN('Raiz c£bica  = ',r3:5:2);
{P ra o programa a espera de um enter}
READLN;
END.
