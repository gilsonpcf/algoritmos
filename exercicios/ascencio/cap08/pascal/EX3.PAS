PROGRAM EX3;
USES CRT;
VAR a, b, c, result: INTEGER;

FUNCTION divisores(a, b, c: INTEGER): INTEGER;
VAR i, s, r: INTEGER;
BEGIN
  s := 0;
  FOR i:=b TO c DO
      BEGIN
      r := i MOD a;
      IF r = 0
         THEN s := s + i;
      END;
  divisores := s;
END;
BEGIN
CLRSCR;
REPEAT
   WRITE('Digite o valor de a: ');
   READLN(a);
UNTIL a > 1;
WRITE('Digite o valor de b: ');
READLN(b);
WRITE('Digite o valor de c: ');
READLN(c);
result := divisores(a, b, c);
WRITELN('Soma dos inteiros = ', result);
READLN;
END.