PROGRAM EXEMPLO16;
USES CRT;
VAR C1:STRING;
    I: INTEGER;
BEGIN
CLRSCR;
WRITE('DIGITE UM TEXTO: ');
READLN(C1);
{O comando UPCASE converte um caractere para mai�sculo}
FOR I:=1 TO LENGTH(C1) DO
C1[I]:=UPCASE(C1[I]);
WRITELN('TEXTO CONVERTIDO PARA MAI�SCULAS = ',C1);
READLN;
END.








