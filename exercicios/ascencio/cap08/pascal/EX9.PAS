PROGRAM EX9;
USES CRT;
VAR hora_i, min_i, hora_f, min_f, minutos: INTEGER;

PROCEDURE maior_menor;
VAR i, num, maior, menor: INTEGER;
BEGIN
FOR i:=1 TO 5 DO
    BEGIN
    WRITE('Digite o ', i, '§ numero: ');
    READLN(num);
    IF i = 1
       THEN BEGIN
            maior := num;
            menor := num;
            END
       ELSE BEGIN
            IF (num > maior)
               THEN maior := num;
            IF (num < menor)
            	THEN menor := num;
            END;
    END;

WRITELN('O maior numero digitado foi: ', maior);
WRITELN('O menor numero digitado foi: ', menor);
READLN;
END;
BEGIN
CLRSCR;
maior_menor;
END.