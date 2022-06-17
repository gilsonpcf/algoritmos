PROGRAM EX18;
USES CRT;
VAR x, y, z: REAL;
BEGIN
{Limpa a tela}
CLRSCR;
{Mostra mensagem solicitando os valores de x, y e z}
WRITELN('Digite os valores de x, y e z');
{Recebe os valores de x, y e z}
READLN(x, y, z);
{Verifica se formam triハgulo ou nao e o tipo do triangulo}
IF (x < y + z) AND (y < x + z) AND (z < x + y)
   THEN BEGIN
        IF (x = y) AND (y = z)
	THEN WRITELN('Triハgulo Eq（ltero')
        ELSE IF (x = y) OR (x = z) OR (y = z)
	      THEN WRITELN('Triハgulo Is｢sceles')
	      ELSE IF (x <> y) AND  (x <> z) AND  (y <> z)
	            THEN WRITELN('Triハgulo Escaleno');
     	END
  ELSE WRITELN('Estas medidas nao formam um triハgulo');
{Pra o programa a espera de um ENTEr}
READLN;
END.
