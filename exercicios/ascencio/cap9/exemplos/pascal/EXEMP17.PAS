PROGRAM EXEMPLO17;
USES STRINGS, CRT;
VAR S: array[0..79] of Char;
begin
 CLRSCR;
 WRITELN('DIGITE UMA STRING');
 READLN(S);
 {A fun‡ao STRUPPER converte uma string inteira para mai£scula}
 STRUPPER(S);
 WRITELN('TEXTO CONVERTIDO PARA MAIUSCULAS = ',S);
 READLN;
END.










