PROGRAM EX19;
USES CRT;
VAR m, n, soma, i: INTEGER;
BEGIN
  CLRSCR;
  WRITELN('Digite um valor para m ');
  READLN(m);
  WRITELN('Digite um valor para n ');
  READLN(n);
  WHILE (m < n) DO
   BEGIN
    soma := 0;
      FOR  i:=m TO n DO
	BEGIN
	  soma := soma + i;
	END;
   WRITELN('Soma dos inteiros entre ', m, ' e ', n, ' = ', soma);
   WRITELN('Digite um valor para m ');
   READLN(m);
   WRITELN('Digite um valor para n ');
   READLN(n);
   END;
READLN;
END.
