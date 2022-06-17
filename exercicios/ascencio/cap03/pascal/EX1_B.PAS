PROGRAM EX1;
USES CRT;
VAR n1, n2, n3, n4, soma: INTEGER;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem antes da leitura dos n£meros}
WRITELN('Digite quatro n£meros');
{Recebe os quatro n£meros}
READLN(n1, n2, n3, n4);
{Soma os n£meros digitados}
soma := n1 + n2 + n3 + n4;
{Mostra mensagem e o resultado da soma}
WRITELN('Resultado da soma = ',soma);
{P ra o programa a espera de um enter}
READLN;											
END.
