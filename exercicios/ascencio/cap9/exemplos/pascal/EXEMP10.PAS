PROGRAM EXEMPLO10;
USES CRT;
VAR TEXTO1 : STRING;
BEGIN
    CLRSCR;
    {A vari vel TEXTO1 recebe a cadeia de caracteres: PROGRAMA DE COMPUTADOR}
    TEXTO1:='PROGRAMA DE COMPUTADOR';
    {O comando abaixo altera a primeira letra da cadeia armazenada na
     vari vel TEXTO1 para T}
    TEXTO1[1]:='T';
    {Mostra o conte£do da vari vel TEXTO1}
    WRITELN('Nova cadeia TEXTO1 = ',TEXTO1);
    READLN;
END.




