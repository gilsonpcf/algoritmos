PROGRAM EXEMPLO5;
USES CRT;
VAR TEXTO1, TEXTO2 : STRING;
BEGIN
    CLRSCR;
    {A vari vel TEXTO1 recebe a cadeia de caracteres: AULA}
    TEXTO1:='AULA';
    {A vari vel TEXTO2 recebe a cadeia de caracteres: Aula}
    TEXTO2:='Aula';
    {Mostra mensagem de cadeias iguais ou diferentes}
    IF TEXTO1 = TEXTO2
    THEN WRITELN('Cadeias iguais')
    ELSE WRITELN('Cadeias diferentes');
    READLN;
END.
