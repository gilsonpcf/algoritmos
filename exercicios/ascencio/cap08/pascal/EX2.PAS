PROGRAM EX2;
USES CRT;
VAR num1, num2, s: INTEGER;

FUNCTION somar(num1, num2:INTEGER): INTEGER;
VAR s, i: INTEGER;
BEGIN
  s := 0;
  FOR i:=num1+1 TO num2-1 DO
      BEGIN
      s := s + i;
      END;
  somar := s;
END;
BEGIN
CLRSCR;
WRITE('Digite o 1§ n£mero: ');
READLN(num1);
WRITE('Digite o 2§ n£mero: ');
READLN(num2);
s := somar(num1, num2);
WRITELN('Soma = ', s);
READLN;
END.