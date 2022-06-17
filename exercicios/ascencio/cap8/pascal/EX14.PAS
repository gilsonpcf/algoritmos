PROGRAM EX14;
USES CRT;
TYPE vetor1 = ARRAY[1..10] OF INTEGER;
     vetor2 = ARRAY[1..30] OF INTEGER;
VAR vet1, vet2: vetor1;
    vet3: vetor2;
    x: INTEGER;

PROCEDURE uniao(a, b:vetor1; VAR u:vetor2);
VAR i, j, k, cont: INTEGER;
BEGIN
FOR i:=1 TO 20 DO
    u[i] := -1;
k:=1;
FOR i:=1 TO 10 DO
    BEGIN
    cont := 1;
    WHILE (cont < k) AND (a[i] <> u[cont]) DO
          cont := cont + 1;
    IF cont = k
       THEN BEGIN
            u[k] := a[i];
            k := k + 1;
            END
    END;
FOR i:=1 TO 10 DO
    BEGIN
    cont := 1;
    WHILE (cont < k) AND (b[i] <> u[cont]) DO
        cont := cont + 1;
    IF cont = k
       THEN BEGIN
            u[k] := b[i];
            k := k + 1;
            END;
    END;
END;

BEGIN
CLRSCR;
FOR x:=1 TO 10 DO
    BEGIN
    REPEAT
       WRITE('Digite o ', x, '§ elemento de A ');
       READLN(vet1[x]);
    UNTIL (vet1[x] >= 0);
    END;
WRITELN;
WRITELN;
FOR x:=1 TO 10 DO
    BEGIN
    REPEAT
       WRITE('Digite o ', x, '§ elemento de B ');
       READLN(vet2[x]);
    UNTIL (vet2[x] >= 0);
    END;
uniao(vet1,vet2,vet3);
x:=1;
WHILE (x<=20) AND (vet3[x] <> -1) DO
   BEGIN
   WRITE(vet3[x], '  ');
   x := x + 1;
   END;
READLN;
END.