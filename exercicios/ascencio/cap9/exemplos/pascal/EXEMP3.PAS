PROGRAM EXEMPLO3;
USES CRT;
VAR TEXTO1, TEXTO2, TEXTO3, TEXTO4 : STRING;
    BEGIN
    CLRSCR;
    {A vari vel TEXTO1 recebe a cadeia de caracteres: PROGRAMA}
    TEXTO1:='PROGRAMA';
    {A vari vel TEXTO2 recebe a cadeia de caracteres: LEGAL}
    TEXTO2:=' LEGAL';
    {Existe um espa‡o no in¡cio da cadeia TEXTO2}
    {O comando abaixo concatena as cadeias TEXTO1 e TEXTO2}
    TEXTO3 := CONCAT(TEXTO1,TEXTO2);
    {O comando abaixo concatena a cadeia ' DEMAIS' na cadeia TEXTO3}
    TEXTO4 := TEXTO3+' DEMAIS';
    {Existe um espa‡o no in¡cio da cadeia DEMAIS}
    {Mostra o conte£do da vari vel TEXTO3}
    WRITELN('Cadeia TEXTO3 = ',TEXTO3);
    {Mostra o conte£do da vari vel TEXTO4}
    WRITELN('Cadeia TEXTO4 = ',TEXTO4);
    READLN;
END.

