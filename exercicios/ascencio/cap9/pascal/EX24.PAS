PROGRAM EX24;
USES CRT;
VAR verbo:STRING;
    fim: STRING;
    i,tam: INTEGER;
BEGIN
CLRSCR;
WRITELN('Digite o verbo terminado em AR');
READLN(verbo);
tam:=LENGTH(verbo);
FOR i:= 1 to LENGTH(verbo) do
    verbo[i]:=UPCASE(verbo[i]);
fim:=COPY(verbo,tam-1,2);
IF fim <> 'AR'
THEN WRITELN('Verbo nao terminado em AR')
ELSE BEGIN
     fim:=copy(verbo,1,tam-2);
     WRITELN('EU ',fim,'O');
     WRITELN('TU ',fim,'AS');
     WRITELN('ELE ',fim,'A');
     WRITELN('ELA ',fim,'A');
     WRITELN('N¢S ',fim,'AMOS');
     WRITELN('V¢S ',fim,' IS');
     WRITELN('ELES ',fim,'AM');
     WRITELN('ELAS ',fim,'AM');
     END;
READLN;
END.