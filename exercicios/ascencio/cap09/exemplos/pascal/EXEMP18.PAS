PROGRAM EXEMPLO18;
USES STRINGS, CRT;
VAR S: array[0..79] of Char;
begin
 CLRSCR;
 WRITELN('DIGITE UMA STRING');
 READLN(S);
 {A fun‡ao STRLOWER converte uma string inteira para min£scula}
 STRLOWER(S);
 WRITELN('TEXTO CONVERTIDO PARA MINUSCULAS = ',S);
 READLN;
END.










