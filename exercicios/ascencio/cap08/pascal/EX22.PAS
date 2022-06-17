PROGRAM EX22;
USES CRT;
TYPE vetor=ARRAY[1..8] OF INTEGER;
VAR vet1, vet2, vet3: vetor;
    i, cont1, cont2: INTEGER;

FUNCTION pares(VAR v1, v2: vetor):INTEGER;
VAR i, r, cont: INTEGER;
BEGIN
cont := 0;
FOR i:=1 TO 8 DO
    BEGIN
    r := v1[i] MOD 2;
    IF r = 0
       THEN BEGIN
            cont := cont + 1;
            v2[cont] := v1[i];
            END;
    END;
pares := cont;
END;
  
FUNCTION impares(VAR v1, v2: vetor):INTEGER;
VAR i, r, cont: INTEGER;
BEGIN
cont := 0;
FOR i:=1 TO 8 DO
    BEGIN
    r := v1[i] MOD 2;
    IF r = 1
       THEN BEGIN
            cont := cont + 1;
            v2[cont] := v1[i];
            END;
    END;
IMpares := cont;
END;

BEGIN
CLRSCR;
FOR i:=1 TO 8 DO
    BEGIN
    WRITE('Digite um numero no vetor ');
    READLN(vet1[i]);
    END;

cont1 := pares(vet1, vet2);
WRITELN;
IF cont1 = 0
   THEN WRITELN('NENHUM PAR FOI DIGITADO')
   ELSE BEGIN
        WRITELN('Vetor de pares');
        FOR i:=1 TO cont1 DO
            WRITE(vet2[i], '  ');
        END;

cont2 := impares(vet1, vet3);
WRITELN;
IF cont2 = 0
   THEN WRITELN('NENHUM IMPAR FOI DIGITADO')
   ELSE BEGIN
        WRITELN('Vetor de impares');
        FOR i:=1 TO cont2 DO
            WRITE(vet3[i], '  ');
        END;
READLN;
END.