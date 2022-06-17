PROGRAM EXEMPLO9;
USES CRT;
VAR TEXTO1 : STRING;
BEGIN
    CLRSCR;
    {A vari vel TEXTO1 recebe a cadeia de caracteres: PROGRAMA DE COMPUTADOR}
    TEXTO1:='PROGRAMA DE COMPUTADOR';
    {A fun‡ao INSERT insere a cadeia ES, a partir da posi‡ao 23
    na cadeia TEXTO1}
    INSERT('ES',TEXTO1,23);
    {Mostra o conte£do da vari vel TEXTO1}
    WRITELN('Nova cadeia TEXTO1 = ',TEXTO1);
    READLN;
END.




