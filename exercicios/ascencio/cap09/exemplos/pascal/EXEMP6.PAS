PROGRAM EXEMPLO6;
USES CRT;
VAR TEXTO : STRING;
    TAMANHO: INTEGER;
BEGIN
    CLRSCR;
    {A vari vel TEXTO recebe a cadeia de caracteres: LINGUAGEM DE PROGRAMA€AO}
    TEXTO:='LINGUAGEM DE PROGRAMA€AO';
    {A vari vel TAMANHO recebe, atrav‚s da fun‡ao LENGTH,
    o n£mero de caracteres da cadeia
    armazenada na vari vel TEXTO}
    TAMANHO:=LENGTH(TEXTO);
    {Mostra o conte£do da vari vel TAMANHO}
    WRITELN('TAMANHO DA CADEIA DE CARACTERES = ',TAMANHO);
    READLN;
END.



