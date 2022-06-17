PROGRAM EX1;
USES CRT;
VAR n1, n2, n3, n4, soma: INTEGER;
BEGIN
{Recebe os quatro n£meros}
READLN(n1, n2, n3, n4);
{Soma os n£meros digitados}
soma := n1 + n2 + n3 + n4;
{Mostra o resultado da soma}
WRITELN(soma);
{P ra o programa a espera de um enter}
READLN;											
END.
