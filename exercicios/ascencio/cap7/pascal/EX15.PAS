PROGRAM EX15;
USES CRT;
VAR mat, mat_result:ARRAY[1..4, 1..3] OF INTEGER;
    vet1:ARRAY[1..5] OF INTEGER;
    vet2:ARRAY[1..10] OF INTEGER;
    i, j, maior, menor, mult, soma, qtde: INTEGER;
BEGIN
CLRSCR;
WRITELN('Lendo o 1§ vetor ');
FOR i:=1 TO 5 DO
    BEGIN
    WRITE('Digite o ', i, '§ elemento ');
    READLN(vet1[i]);
    END;

WRITELN('Lendo o 2§ vetor ');
FOR i:=1 TO 10 DO
    BEGIN
    WRITE('Digite o ', i, '§ elemento ');
    READLN(vet2[i]);
    END;

maior := vet1[1];
FOR i:=1 TO 5 DO
    BEGIN
    IF vet1[i] > maior
       THEN maior := vet1[i];
    END;

menor := vet2[1];
FOR i:=1 TO 10 DO
    BEGIN
    IF vet2[i] < menor
      THEN menor := vet2[i];
    END;

mult := maior * menor;
WRITELN('Maior elemento do vetor 1: ', maior);
WRITELN('Menor elemento do vetor 2: ', menor);
WRITELN('Multiplicaçao do maior pelo menor: ', mult);
WRITELN;
WRITELN('Lendo os elementos da matriz ');

FOR i:=1 TO 4 DO
    BEGIN
    FOR j:=1 TO 3 DO
        BEGIN
        WRITE('Digite o elemento ', i, '-', j, ' ');
        READLN(mat[i][j]);
        END;
    END;

WRITELN;
WRITELN('Mostrando nova matriz ');
FOR i:=1 TO 4 DO
    BEGIN
    FOR j:=1 TO 3 DO
        BEGIN
        mat_result[i,j] := mat[i,j] + mult;
	WRITELN('Elemento ', i, '-', j, ' ', mat_result[i,j]);
        END;
    END;

FOR i:=1 TO 4 DO
   BEGIN
   soma := 0;
   FOR j:=1 TO 3 DO
       BEGIN
       IF mat_result[i,j] MOD 2 = 0
          THEN soma := soma + mat_result[i,j];
       END;
       WRITELN('Soma dos elementos pares da linha ', i, ' da matriz resultante = ', soma);
    END;

FOR j:=1 TO 3 DO
    BEGIN
    qtde := 0;
    FOR i:=1 TO 4 DO
        BEGIN
        IF (mat_result[i][j] > 1) AND (mat_result[i][j] < 5)
           THEN qtde := qtde + 1;
        END;
        WRITELN('Total de numeros entre 1 e 5 na coluna ', j, ' da matriz resultante = ', qtde);
    END;

READLN;
END.