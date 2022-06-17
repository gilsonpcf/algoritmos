PROGRAM EX10;
USES CRT;
VAR num: INTEGER;
    s: REAL;

FUNCTION sequencia(n: INTEGER):REAL;
VAR a, b: INTEGER;
    f, seq:REAL;
BEGIN
seq := 1;
FOR a:=1 TO n DO
    BEGIN
    f := 1;
    FOR b:=1 TO a DO
        BEGIN
        f := f * b;
        END;
    seq := seq + 1/f;
    END;
sequencia := seq;
END;
BEGIN
CLRSCR;
WRITE('Digite um n£mero: ');
READLN(num);
s := sequencia(num);
WRITELN('Valor da sequenˆncia = ', s:7:2);
READLN;
END.