PROGRAM EX21;
USES CRT;
VAR num: ARRAY[1..100, 1..100] OF INTEGER;
    dim, l, c, soma, cont:INTEGER;
BEGIN
CLRSCR;
REPEAT
WRITE('Digite a dimensao da matriz (quadrada) - no m ximo 100 ');
READLN(dim);
UNTIL (dim >= 1) AND (dim <= 100);

FOR l:=1 TO dim DO
   BEGIN
   FOR c:=1 TO dim DO
      BEGIN
      WRITE('Digite o n£mero da posi‡ao ', l, '-', c, ' ');
      READLN(num[l][c]);
      END;
   END;

soma := 0;
cont := 0;
FOR l:=2 TO dim DO
   BEGIN
   FOR c:=dim-l+2 TO dim DO
       BEGIN
       WRITE(num[l][c], '  ');
       soma := soma + num[l][c];
       END;
   cont := cont + 1;
   END;

WRITELN('Soma = ', soma);
READLN;
END.