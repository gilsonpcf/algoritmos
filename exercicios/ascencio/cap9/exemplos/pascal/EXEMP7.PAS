PROGRAM EXEMPLO7;
USES CRT;
VAR TEXTO1, TEXTO2 : STRING;
    LUGAR: INTEGER;
BEGIN
    CLRSCR;
    {A vari vel TEXTO1 recebe a cadeia de caracteres: PROGRAMA DE COMPUTADOR}
    TEXTO1:='PROGRAMA DE COMPUTADOR';
    {A vari vel TEXTO2 recebe a cadeia de caracteres: DE }
    TEXTO2:='DE';
    {A vari vel LUGAR recebe a posi‡ao a partir da qual
    a cadeia TEXTO2 aparece na cadeia TEXTO1}
    LUGAR:=POS(TEXTO2,TEXTO1);
    {Mostra o conte£do da vari vel LUGAR}
    WRITELN('LUGAR = ',LUGAR);
    READLN;
END.



