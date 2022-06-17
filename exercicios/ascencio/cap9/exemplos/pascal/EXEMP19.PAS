PROGRAM EXEMPLO19;
USES CRT;
VAR C:STRING;
    I: INTEGER;
BEGIN
CLRSCR;
WRITE('DIGITE UM NUMERO: ');
READLN(I);
{A funáao STR converte um n£mero inteiro para string}
STR(I,C);
WRITELN('VALOR NUMêRICO CONVERTIDO = ',C);
READLN;
END.










