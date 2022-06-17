PROGRAM EXEMPLO8;
USES CRT;
VAR TEXTO1 : STRING;
BEGIN
    CLRSCR;
    {A vari vel TEXTO1 recebe a cadeia de caracteres: PROGRAMA DE COMPUTADOR}
    TEXTO1:='PROGRAMA DE COMPUTADOR';
    {A fun‡ao DELETE apaga, a partir da posi‡ao 9, 3 caracteres da
    cadeia TEXTO1}
    DELETE(TEXTO1,9,3);
    {Mostra o conte£do da vari vel TEXTO1}
    WRITELN('Nova cadeia TEXTO1 = ',TEXTO1);
    READLN;
END.



