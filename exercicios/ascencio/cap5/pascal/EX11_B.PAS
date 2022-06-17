PROGRAM EX11;
USES CRT;
VAR i, num, qtde: INTEGER;
BEGIN
CLRSCR;
WRITELN('Digite um n£mero ');
READLN(num);
qtde := 0;
i := 1;
REPEAT
	IF num MOD i = 0
	THEN qtde := qtde + 1;
i := i + 1;
UNTIL i = num;
IF qtde > 2
THEN WRITELN('N£mero nao primo')
ELSE WRITELN('N£mero primo');
READLN;
END.
