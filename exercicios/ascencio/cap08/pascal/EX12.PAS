PROGRAM EX12;
USES CRT;
TYPE vetor = ARRAY[1..3] OF INTEGER;
VAR vet: vetor;
    i: INTEGER;

PROCEDURE perfeitos(VAR v: vetor);
VAR a, r, num, soma, cont: INTEGER;
BEGIN
cont := 1;
num := 1;
WHILE (cont <= 3) DO
   BEGIN
      soma := 0;
      FOR a:=1 TO num-1 DO
          BEGIN
          r := num MOD a;
          IF r = 0
             THEN soma := soma + a;
          END;
      IF soma = num
         THEN BEGIN
              v[cont] := num;
              cont := cont + 1;
              END;
       num := num + 1;
   END;
END;

BEGIN
CLRSCR;
perfeitos(vet);
FOR i:=1 TO 3 DO
    WRITELN('O ', i, '§ n£mero perfeito ‚ ', vet[i]);
READLN;
END.