PROGRAM EX11;
USES CRT;
VAR i, num, qtde: INTEGER;
BEGIN
CLRSCR;
WRITELN('Digite um n£mero ');
READLN(num);
qtde := 0;
FOR i := 1 TO num DO
	BEGIN
	IF num MOD i = 0
	THEN begin
             qtde := qtde + 1;
             end;
	END;
IF qtde > 2
THEN WRITELN('N£mero nao primo')
ELSE WRITELN('N£mero primo');
READLN;
END.
