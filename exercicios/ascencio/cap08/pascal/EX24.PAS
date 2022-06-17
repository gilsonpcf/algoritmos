PROGRAM EX23;
USES CRT;
VAR num1, num2, res: INTEGER;
    op: CHAR;

FUNCTION calculo(n1, n2: INTEGER; simbolo:CHAR):INTEGER;
VAR result: INTEGER;
BEGIN
IF simbolo = '+'
   THEN result := n1 + n2
   ELSE result := n1 * n2;
calculo := result;
END;

BEGIN
CLRSCR;
WRITE('Digite o primeiro numero: ');
READLN(num1);
WRITE('Digite o segundo numero: ');
READLN(num2);
REPEAT
  WRITE('Digite o simbolo da opera‡ao desejada (+ ou *) ');
  READLN(op);
UNTIL (op = '+') OR (op = '*');
res := calculo(num1, num2, op);
WRITELN('Resultado = ', res);
READLN;
END.
