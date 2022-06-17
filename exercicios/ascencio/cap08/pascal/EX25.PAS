PROGRAM EX25;
USES CRT;
TYPE vet=ARRAY[1..25] OF INTEGER;
VAR  vetor:vet;
     i: INTEGER;

PROCEDURE substituicao(VAR v: vet);
VAR z:INTEGER;
BEGIN
FOR z:=1 TO 25 DO
    BEGIN
    IF v[z] < 0 THEN v[z] := 0;
    END;
END;

BEGIN
CLRSCR;
FOR i:=1 TO 25 DO
    BEGIN
    WRITE('Digite o numero da posi‡ao ', i, ': ');
    READLN(vetor[i]);
    END;

substituicao(vetor);
      
WRITELN;
WRITELN('Vetor alterado'); 
FOR i:=1 TO 25 DO
    BEGIN      
    WRITE(vetor[i], '  ');
    END;
READLN;
END.    
          	   	