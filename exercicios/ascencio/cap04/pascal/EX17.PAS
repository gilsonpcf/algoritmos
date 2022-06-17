PROGRAM EX17;
USES CRT;
VAR a, b, c, delta, x1, x2: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem solicitando os valores de a, b e c}
WRITELN('Digite os valores de a, b, e c');
{Recebe os valores de a, b e c}
READLN(a, b, c);
{Verifica se ‚ equa‡ao de 2§ grau}
IF a = 0
THEN WRITELN('Estes valores nao formam uma equa‡ao de segundo grau')
ELSE BEGIN
     {Calcula as ra¡zes quando estas existem}
	   delta := (b * b) - ( 4 * a * c);
	   IF delta < 0
           THEN WRITELN('Nao existe raiz real');
	   IF delta = 0
	    THEN BEGIN
		  WRITELN('Existe uma raiz real');
		  x1 := (- b) / (2 * a);
		  WRITELN(x1:5:2);
		  END;
	  IF delta > 0
	   THEN BEGIN
		   WRITELN('Existem duas ra¡zes reais');
		   x1 := ( - b + SQRT(delta)) / ( 2 * a);
		   x2 := ( - b - SQRT(delta)) / ( 2 * a);
		   WRITELN('Primeira raiz = ', x1:5:2);
                   WRITELN('Segunda raiz = ', x2:5:2);
		   END;
	    END;
{P ra o programa a espera de um ENTER}
READLN;
END.
