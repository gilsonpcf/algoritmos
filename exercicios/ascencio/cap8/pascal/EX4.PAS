PROGRAM EX4;
USES CRT;
VAR seg: INTEGER;

PROCEDURE transformacao(segundos:INTEGER);
VAR h, r, m, s: INTEGER;
BEGIN
  h := segundos DIV 3600;
  r := segundos MOD 3600;
  m := r DIV 60;
  s := r MOD 60;
  WRITELN(segundos, ' segundo(s) equivale(m) a ', h, ' hora(s), ', m, ' minuto(s) e ', s, ' segundo(s)');
  READLN;
END;
BEGIN
CLRSCR;
WRITE('Digite o valor em segundos: ');
READLN(seg);
transformacao(seg);
END.

