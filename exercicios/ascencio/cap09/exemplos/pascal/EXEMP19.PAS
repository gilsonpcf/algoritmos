PROGRAM EXEMPLO19;
USES CRT;
VAR C:STRING;
    I: INTEGER;
BEGIN
CLRSCR;
WRITE('DIGITE UM NUMERO: ');
READLN(I);
{A fun�ao STR converte um n�mero inteiro para string}
STR(I,C);
WRITELN('VALOR NUM�RICO CONVERTIDO = ',C);
READLN;
END.










