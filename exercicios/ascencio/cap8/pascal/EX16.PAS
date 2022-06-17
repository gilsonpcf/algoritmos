PROGRAM EX16;
USES CRT;
TYPE vetor1 = ARRAY[1..10] OF INTEGER;
     vetor2 = ARRAY[1..20] OF INTEGER;
VAR vet1, vet2: vetor1;
    vet3: vetor2;
    x: INTEGER;

PROCEDURE ordena_todos(a, b: vetor1; VAR c:vetor2);
VAR i, j, k, cont: INTEGER;
BEGIN
k := 1;
FOR i:=1 TO 10 DO
    BEGIN
    cont := 1;
    WHILE (cont < k) AND (a[i] < c[cont]) DO
       cont := cont + 1;
    IF cont = k
       THEN BEGIN
            c[k] := a[i];
            k := k + 1;
            END
       ELSE BEGIN
            FOR j:=k DOWNTO cont-1 DO
                BEGIN
                c[j] := c[j-1];
                END;
            c[cont] := a[i];
            k := k + 1;
            END;
    END;
FOR i:=1 TO 10 DO
    BEGIN
    cont := 1;
    WHILE (cont < k) AND (b[i] < c[cont]) DO
        cont := cont + 1;
    IF cont = k
       THEN BEGIN
            c[k] := b[i];
            k := k + 1;
            END
       ELSE BEGIN
            FOR j:=k DOWNTO cont DO
                BEGIN
                c[j] := c[j-1];
                END;
	    c[cont] := b[i];
            k := k + 1;
            END;
    END;
END;

BEGIN
CLRSCR;
FOR x:=1 TO 10 DO
    BEGIN
    WRITE('Digite o ', x, '§ elemento de A ');
    READLN(vet1[x]);
    END;

WRITELN;
FOR x:=1 TO 10 DO
    BEGIN
    WRITE('Digite o ', x, '§ elemento de B ');
    READLN(vet2[x]);
END;
ordena_todos(vet1,vet2,vet3);
WRITELN;
WRITELN('Vetor ordenado ');
FOR x:=1 TO 20 DO
    WRITE(vet3[x], '  ');
READLN;
END.