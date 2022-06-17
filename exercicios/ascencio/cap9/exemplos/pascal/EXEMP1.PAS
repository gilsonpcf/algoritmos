PROGRAM EXEMPLO1;
USES CRT;
VAR TEXTO, PARTE : STRING;
BEGIN
    CLRSCR;
    {A vari vel TEXTO recebe a cadeia de caracteres: PROGRAMA DE COMPUTADOR}
    TEXTO:='PROGRAMA DE COMPUTADOR';
    {A vari vel PARTE recebe alguns caracteres da cadeia armazenada
     na vari vel TEXTO}
    {A fun‡ao COPY copia da cadeia armazenada em TEXTO, a partir da
     posi‡ao 10, 2 caracteres}
    {O primeiro caractere da cadeia est  na POSI€AO 1}
    PARTE:=COPY(TEXTO,10,2);
    {Mostra o conte£do da vari vel TEXTO}
    WRITELN('TEXTO = ',TEXTO);
    {Mostra o conte£do da vari vel PARTE}
    WRITELN('PARTE = ',PARTE);
    READLN;
END.
