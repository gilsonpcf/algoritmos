PROGRAM EX21;
USES CRT;
VAR x, y, soma: INTEGER;

FUNCTION primos(x, y:INTEGER):INTEGER;
VAR i, j, r, cont, somatorio:INTEGER;
BEGIN
somatorio := 0;
FOR i:=x TO y DO
    BEGIN
    cont := 0;
    FOR j:=1 TO j DO
        BEGIN
        r := i MOD j;
        IF r = 0
          THEN cont := cont + 1;
        END;
    IF cont <= 2 THEN somatorio := somatorio + i;
    END;
primos := somatorio;
END;
BEGIN
CLRSCR;
WRITE('Digite o valor de x ');
READLN(x);
WRITE('Digite o valor de y ');
READLN(y);

WHILE x <> y DO
   BEGIN
   soma := primos(x, y);
   WRITELN('Soma dos numeros primos entre ', x, ' e ', y, ' (inclusive) = ',  soma);
   WRITELN;
   WRITELN('Digite o valor de x ');
   READLN(x);
   WRITELN('Digite o valor de y ');
   READLN(y);
   END;
END.